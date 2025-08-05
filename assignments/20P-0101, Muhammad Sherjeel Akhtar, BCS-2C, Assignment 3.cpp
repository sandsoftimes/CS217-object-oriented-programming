#include<iostream>
#include<sstream>
using namespace std;

	// FIRST OF ALL WE WILL MAKE THE PROGRAM ACCORDING TO 



								// THE 1.1 AS THE THINGS ARE MENTIONED THERE.
			class Address
		
		{
			
        
        public:
               								 int house_no;
                
        int street;
                
							string city;
				
        
string country;
                
                
                
        
				string get_full_address()
		
	
		{
       
	 ostringstream strout;
        
        
		
																strout<<"H. No "<<house_no<<",Street "<<street<<","<<city<<" "<<country;
        
        
		
		
							return strout.str();
                
				
				}
                

};



class Employee{
        


			string employeeName;


    
																Address current_address;



Address permanent_address;
    
				
				
					public:
             
			    
       
											
											
													void set_current_address(int house_no, int street, string city, string country){
            
            
            
			current_address.house_no = house_no;
            
          
		    
current_address.street = street;
            
            
											current_address.city = city;
            
            
			current_address.country = country;
        
		}
        
								void set_permanent_address(int house_no, int street, string city, string country){
            
            

permanent_address.house_no = house_no;
           
           
		    										permanent_address.street = street;
           
	
	permanent_address.city = city;
           
		    					
								
																		permanent_address.country = country;
       	
	    }
        
	void print_addresses(){
           
		  									
											  
											  			cout<<"Current Address:"<<endl;
            
cout<<current_address.get_full_address()<<endl;
            
	
					
	cout<<"Permanent Address:"<<endl;	
            
																	
	
	
																	cout<<permanent_address.get_full_address()<<endl;
        
		
		}


};




							class Wheel
			
			
			
		{
    

string state;
   
 
 
 	  				 		public:

			void set_wheel_state(string s){
           
		   						 					state = s;
        }
        
        											string get_wheel_state(){
            
								return state;
       
	    }

};


		class Car{
 
    
   
   						 												Wheel wheels[4];
   
						
						
													public:
       
	    				
							void set_car_to_moving(){
            


	for(int i=0;i<4;i++){
               	
			 		   							wheels[i].set_wheel_state("Turning");
           	
		    }
        
		}
        
				void set_car_to_stopped(){
            
														for(int i=0;i<4;i++)
			
					{
               
wheels[i].set_wheel_state("Stopped");
            
	
					}
        }
       
	    								void print_car_wheels_state(){
            
cout<<"Car state:"<<endl;
            
										for(int i=0;i<4;i++){
              
							cout<<"- Wheel "<<i<<" is "<<wheels[i].get_wheel_state()<<endl;
           
		    }
        
		
		}
        
}							;

						//Now we will make a main function and work in it.

					int main(){
    
   
   
   
    										Employee emp;
        
	emp.set_current_address(4,25,"Peshawar","Pakistan");
       
	    				
												emp.set_permanent_address(4,25,"Peshawar","Pakistan");
       

emp.print_addresses();
        
        										
												cout<<endl;
    

   
    			
				Car c;
   

c.set_car_to_moving();
   
					
					c.print_car_wheels_state();
   
    														
															c.set_car_to_stopped();
   

c.print_car_wheels_state();
    
   
    		
			return 0;
}
