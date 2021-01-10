#include "Stack.h"
#include "Node.h"

#include <iostream>
#include<sstream>

Stack::Stack(std::string _name){
    first = Node::Dummy();
    first->next = Node::Dummy();
}

bool Stack::push(int element) { return false; }
bool Stack::pop(int element) { return false; }
bool Stack::size(int element) { return false; }

std::string Stack::print_stack(){
    Node* c = this->first->next;
    std::stringstream ss;
    while (!c->is_dummy()) {
        ss << c->get_data() << " ";
        c = c->next;
    }
    return ss.str();
}