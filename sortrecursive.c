#include "sortrecursive.h"

Number* Add_recursive(Number * node, float value){
    if(!node){
        Number * newnode = (Number*)malloc(sizeof(Number));
        newnode->value=value;
        return newnode;
    }
    if(node->value>value){
        node->smaller=Add_recursive(node->smaller, value);
    }
    if(node->value<value){
        node->larger=Add_recursive(node->larger, value);
    }
}

int Push_back_to_array(Number* node,float * t, int index){
    if(node && node->smaller){
        index = Push_back_to_array(node->smaller, t, index);
    }
    if(node){
        t[index] = node->value;
        index++;
    }
    if(node && node->larger){
        index = Push_back_to_array(node->larger, t, index); 
    }
    return index;
}

void sortrecursive(float * t, int size){
    Number* root = 0;
    
    for(int i = 0; i<size; i++){
        root = Add_recursive(root, t[i]);
    }
    Push_back_to_array(root, t, 0);
}