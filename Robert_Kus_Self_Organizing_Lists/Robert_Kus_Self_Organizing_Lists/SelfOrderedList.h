/*
 * File:   SelfOrderedList.h
 * Author: Robert Kus
 *
 * Created on August 23, 2023
* Implementation header file for the SelfOrderedListADT class. The SelfOrderedList Class also contains function that
*  apply the three main self-ordered list heuristics: count, move-to-front, and transpose.
*/

#include "SelfOrderedListADT.h"
#include "llist.h"
#include <iostream>

using namespace std;

template <typename E> 
class SelfOrderedList: public LList<E> {
    private:
        LList<E>* linkedList;           //Holds the actual entries.
        LList<int>* elementCnts;        //Holds the count for the number of times each entry in linkedList is searched for.
                                        // Indexes of items in linkedList and elementCnts are directly correlated.
        int compareCnt;                 //Stores the total number of comparisons completed
        string heuristicType;           //Stores the type of heuristic that will be applied
        
        //Initialize properties that are not set based on parameters
        void init() {
            linkedList = new LList<E>();
            compareCnt = 0;
            elementCnts = new LList<int>();
        };
    public:
        //Default constructor  
        SelfOrderedList() {  
            init();
            heuristicType = "count";
        };

        //Parameter-based constructor
        SelfOrderedList(string type) {
            init();
            heuristicType = type;
        }

        //Destructor
        ~SelfOrderedList() { delete[] linkedList; };

        //Look for it and execute the self-ordering heuristic based on value entered in the constructor
        bool find(const E& it) {
            linkedList->moveToStart();
            int addIndex = 0;
            for (int i = 0; i < linkedList->length(); i++) {
                E value = linkedList->getValue();
                compareCnt++;
                if (it == linkedList->getValue()) {
                    reorder(i);
                    return true;
                }
                linkedList->next();
                addIndex = i;
            }
            add(it);

            //Because the value is added, we do not want to increment its count when calling reorder
            if (heuristicType == "moveToFront") reorder(linkedList->length() - 1, true);
            return false;
        };

        //Add it to the list and initialize it's count to 1
        void add(const E& it) {              
            linkedList->append(it);          //Add new 'it' to the list.
            elementCnts->append(1);          //Initialize it's count to 1.
        };  

        int getCompares() const {                //Returns the number of accumulated compares
            return compareCnt;
        };   


        int size() const{                        //Returns the size of the list
            return linkedList->length();
        };

        //Print the list
        // - printlist() prints the full list
        // - printlist(n) prints elements in the linked lists and is called by the printlist() function.
        void printlist() {
            int listSize = size();
            cout << heuristicType << " Heuristic: Size of list: " << listSize << endl;
            cout << "Number of compares: " << compareCnt << endl;
            linkedList->moveToStart();
            for (int i = 0; i < listSize; i++) {
                printlist(i);
            }
            cout << endl << endl;
        };
        void printlist(int n) {
            elementCnts->moveToPos(n);
            cout << linkedList->getValue() << "-" << elementCnts->getValue() << " ";
            linkedList->next();
        };

        //Reorder the lists based on the heuristic selected (count, move-to-front, or transpose).
        void reorder(int index, bool isAdd = false) {
            if (heuristicType == "count") {
                int listIndex = 0;
                elementCnts->moveToPos(index);
                int currentCnt = elementCnts->getValue();
                int earlierCnt = currentCnt;
                while (currentCnt <= earlierCnt) {
                    elementCnts->moveToPos(listIndex);
                    earlierCnt = elementCnts->getValue();

                    if (currentCnt + 1 > earlierCnt) {
                        //Use this helper function to move elements in 
                        // list as required by the count heuristic and 
                        // set earlierCnt equal to currentCnt - 1 to end while loop
                        moveElementsInLists(index, listIndex, isAdd);
                        earlierCnt = currentCnt-1;
                    }

                    listIndex++;
                }
            }
            else {
                //Call on the helper method to execute the self-ordering heuristic
                moveElementsInLists(index, 0, isAdd);
            }
        }

        //Moves the elements to their correct positions in their list based on the heuristic type
        // The first list holds the values; the second list holds the counts
        void moveElementsInLists(int index, int listIndex = 0, bool isAdd = false) {
            linkedList->moveToPos(index);
            E currentValue = linkedList->getValue();
            linkedList->remove();

            //Move list to correct position based on heuristic type
            if (heuristicType == "count") {
                linkedList->moveToPos(listIndex);
            }
            else if (heuristicType == "moveToFront") {
                linkedList->moveToStart();
            }
            else {
                linkedList->prev();
            }
            
            linkedList->insert(currentValue);

            elementCnts->moveToPos(index);
            int elementCnt = elementCnts->getValue();
            if (!isAdd) elementCnt++;                   //Increment the element count if the value is already in the linkedList
            elementCnts->remove();

            //Move list to correct position based on heuristic type
            if (heuristicType == "count") {
                elementCnts->moveToPos(listIndex);
            }
            else if (heuristicType == "moveToFront") {
                elementCnts->moveToStart();
            }
            else {
                elementCnts->prev();
            }

            elementCnts->insert(elementCnt);
        }
};
