#include <iostream>

class SingleTon {
   static SingleTon* single_ptr; 
     SingleTon() = default;
     public: 
          SingleTon& operator=(const SingleTon&) = delete;
          SingleTon(const SingleTon&) = delete;
          static SingleTon* get_single_ptr() { 
              if(single_ptr == nullptr) { 
                single_ptr = new SingleTon();
              }
              return single_ptr;
          }  
          ~SingleTon() { 
            single_ptr = nullptr;
          }
}; 
   SingleTon* SingleTon::single_ptr = nullptr;
      int main () { 
        SingleTon* ptr_cl = SingleTon::get_single_ptr();
 
       std::cout<< "***THX FOR WATCHING BRO'S!!***";
        delete ptr_cl;
      }