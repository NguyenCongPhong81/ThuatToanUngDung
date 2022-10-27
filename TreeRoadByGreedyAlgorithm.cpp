#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

int numberOfChild, valueChild;

class Tree {      
  public:          
    int currentValue;
    vector<Tree> listChild;
    int level;

  	// Constructor default
  	Tree() {
	}
	
	// Constructor with only value
	Tree(int value) {
		this->currentValue = value;
	}

};

Tree tree;

Tree findNodeNext(vector<Tree> listChild) {
	Tree nextNode = listChild.at(0);
	for (int i = 1; i < listChild.size(); i++) {
		if (listChild.at(i).currentValue > nextNode.currentValue) {
			nextNode = listChild.at(i);
		}
	}
	return nextNode;
}

Tree inputChild(Tree object, int sizeChild, int valueOfParent, bool isRoot, int indexChild, int level) {
	cout << "--------" << "Level " << level << "-------" << endl;
	int tempSizeChild;

	if (isRoot) {
		cout << "Nhap gia tri root: ";
	} else {
		cout << "Nhap gia tri node con thu " << indexChild << " cua node parent " << valueOfParent << ": ";
	}
	
	cin >> valueChild;
	object.currentValue = valueChild;
	object.level = level;
		
	cout << "Nhap so luong node con cua node " << object.currentValue << ": ";
	cin >> tempSizeChild;
			
	for (int j = 0; j < tempSizeChild; j++) {
		object.listChild.push_back(inputChild(Tree(), tempSizeChild, object.currentValue, false, j + 1, level + 1));
	}

	return object;
}

void showRoad() {
	Tree currentNode = findNodeNext(tree.listChild);
	cout << "\n=> Duong di: ";
	cout << tree.currentValue << " -> " << currentNode.currentValue << " -> ";
		
	do {
		currentNode = findNodeNext(currentNode.listChild);
		if (currentNode.listChild.size() == 0) {
			cout << currentNode.currentValue;
		} else {
			cout << currentNode.currentValue << " -> ";
		}
	} while (currentNode.listChild.size() > 0);
}

int main() {
	tree = inputChild(tree, 1, 0, true, 0, 1);
	showRoad();
	return 0; 
}
