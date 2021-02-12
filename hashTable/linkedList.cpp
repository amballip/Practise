#include "headers.h"


void linked::add(std::string s)
{
    if (head == nullptr)
    {
        object* o = new object;
        o->value = s;
        head = o;
    }
    else
    {
        object* temp= new object;
        temp = head;
        while(temp->next!= nullptr)
        {
            temp = temp->next;
        }

        object* temp1 = new object;
        temp1->value = s;
        temp->next = temp1;
    }
    
}

linked::linked()
{
		head = nullptr;

}



