class DataThree {
static int count; 
static DataThree* ptr1;
  DataThree() = default; 
   public: 
      DataThree& operator=(DataThree& other ) = delete;
      DataThree(const DataThree&) = delete;

        static DataThree* get_ptr() { 
             if(count < 3) { 
                ptr1 = new DataThree();
                count++;
             }
             return ptr1;
        }
         ~DataThree() {
            delete ptr1;
         }        
}; 
int DataThree::count = 0;
   DataThree* DataThree::ptr1 = nullptr;

     int main(void) { 
         DataThree* ptr_dates[5];
         for(int i = 0; i < 5; ++i) { 
            ptr_dates[i] = DataThree::get_ptr();
         }   
     }
