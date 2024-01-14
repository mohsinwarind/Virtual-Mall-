#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
    char choice;
    string name;
    int qun11,qun12,qun13,qun14,qun15,qun21,qun22,qun23,qun24,qun25,
    qun31,qun32,qun33,qun34,qun35,qun41,qun42,qun43,qun44,qun45,
    qun51,qun52,qun53,qun54,qun55,qun61,qun62,qun63,qun64,qun65,
    qun71,qun72,qun73,qun74,qun75,qun81,qun82,qun83,qun84,qun85;
    int fqun11,fqun12,fqun13,fqun14,fqun15,fqun21,fqun22,fqun23,fqun24,fqun25
    ,fqun31,fqun32,fqun33,fqun34,fqun35,fqun41,fqun42,fqun43,fqun44,fqun45,
    fqun51,fqun52,fqun53,fqun54,fqun55,fqun61,fqun62,fqun63,fqun64,fqun65,
    fqun71,fqun72,fqun73,fqun74,fqun75,fqun81,fqun82,fqun83,fqun84,fqun85;
    float amount11=0,amount12=0,amount13=0,amount14=0,
    amount15=0,amount21=0,amount22=0,amount23=0,amount24=0,amount25=0
    ,amount31=0,amount32=0,amount33=0,amount34=0,amount35=0,
    amount41=0,amount42=0,amount43=0,amount44=0,amount45=0,
    amount51=0,amount52=0,amount53=0,amount54=0,amount55=0
    ,amount61=0,amount62=0,amount63=0,amount64=0, amount65=0,
    amount71=0,amount72=0,amount73=0,amount74=0,amount75=0,
    amount81=0,amount82=0,amount83=0,amount84=0,amount85=0;
    float final_sum=0,tqun=0;
    int input;

    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                     _________________________                                                "<<endl;
    cout<<"____________________________________| Welcome to Virtual Mall | ______________________________________________"<<endl;
    cout<<"                                    |_________________________|                                               "<<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"=============================================================================================================="<<endl;
    cout<<endl;
    cout<<"Enter your Name : ";
    getline(cin,name);
    cout<<endl;
    cout<<"Enter your Password : ";
    cin>>input;
    if(input==12345){
    cout<<"___________"<<endl;
    cout<<endl;
    cout<<"Categories "<<endl;
    cout<<"___________"<<endl;
    cout<<endl;
    cout<<"1-Electronics"<<endl;
    cout<<"2-Clothings"<<endl;
    cout<<"3-Books"<<endl;
    cout<<"4-Home Appliances"<<endl;
    cout<<"5-Toys"<<endl;
    cout<<"6-Beauty"<<endl;
    cout<<"7-Sports"<<endl;
    cout<<"8-Stationary"<<endl;
    cout<<"_________________________"<<endl;
    cout<<endl;
    do{
        
        int option;
        cout<<"Enter the Number of Category you want to explore : ";
        cin>>option;
        switch(option){
            case 1:
            cout<<"___________"<<endl;
            cout<<endl;
            cout<<"Subcategories in Electronics are : "<<endl;
            
            
            cout<<"_________________________"<<endl;
            cout<<endl;
            cout<<"1- Fans       -    $99.99"<<endl;
            cout<<"2- Bulbs      -    $23.99"<<endl;
            cout<<"3- LED Lights -    $40.00"<<endl;
            cout<<"4- Televisons -    $200.99"<<endl;
            cout<<"5- Switches   -    $9.99"<<endl;
            cout<<"_________________________"<<endl;
            cout<<endl;
            int a;
            cout<<"What do you want to purchase : ";
            cin>>a;
            switch(a){
                case 1:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun11;
                    fqun11+=qun11;
                    amount11+=qun11*99.9;
                    final_sum+=amount11;
                    tqun+=fqun11;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun11<<" fans are purchasd for "<<amount11<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 2:
                   
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun12;
                    fqun12+=qun12;
                    amount12=qun12*23.99;
                    final_sum+=amount12;
                    tqun+=fqun12;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun12<<" numbers of Bulbs are purchasd for "<<amount12<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 3:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun13;
                    fqun13+=qun13;
                    tqun+=fqun13;
                    amount13=qun13*40.00;
                    final_sum+=amount13;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun13<<" LED Lights are purchasd for "<<amount13<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 4:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun14;
                    fqun14+=qun14;
                    amount14=qun14*200.99;
                    final_sum+=amount14;
                    tqun+=fqun14;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun14<<"  TV's are purchasd for "<<amount14<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 5:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun15;
                    fqun15+=qun15;
                    tqun+=fqun15;
                    amount15=qun15*9.99;
                    final_sum+=amount15;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun15<<" switches are purchasd for "<<amount15<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                default:
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<"Invalid choice. Please enter a valid option."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
            }
            break;
            //Second Category
            case 2:
            cout<<"___________"<<endl;
            cout<<endl;
            cout<<"Subcategories in Cloths are : "<<endl;
            cout<<"_________________________"<<endl;
            cout<<endl;
            cout<<"1- Pant    -   $99.99"<<endl;
            cout<<"2- Shirt   -   $23.99"<<endl;
            cout<<"3- Jeans   -   $40.00"<<endl;
            cout<<"4- Lehnga  -   $200.99"<<endl;
            cout<<"5- Abaya   -   $9.99"<<endl;
            cout<<"_________________________"<<endl;
            cout<<endl;
            int b;
            cout<<"What do you want to purchase : ";
            cin>>b;
            switch(b){
                case 1:
                   
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun21;
                    fqun21+=qun21;
                    tqun+=fqun21;
                    amount21=qun21*99.9;
                    final_sum+=amount21;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun21<<" Pants are purchasd for "<<amount21<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 2:
                  
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun22;
                    fqun22+=qun22;
                    tqun+=fqun22;
                    amount22=qun22*23.99;
                    final_sum+=amount22;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun21<<" Shirts are purchasd for "<<amount22<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 3:
                   
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun23;
                    fqun23+=qun23;
                    tqun+=fqun23;
                    amount23=qun23*40.00;
                    final_sum+=amount23;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun23<<" Jeans are purchasd for "<<amount23<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 4:
                   
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun24;
                    fqun24+=qun24;
                    tqun+=fqun24;
                    amount24=qun24*200.99;
                    final_sum+=amount24;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun24<<" Lehnga are purchasd for "<<amount24<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 5:
                   
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun25;
                    fqun25+=qun25;
                    tqun+=fqun25;
                    amount25=qun25*9.99;
                    final_sum+=amount25;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun25<<" Abaya are purchasd for "<<amount25<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                default:
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<"Invalid choice. Please enter a valid option."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
            }
        break;
        // Third Category
         case 3:
            cout<<"___________"<<endl;
            cout<<endl;
            cout<<"Subcategories in Books are : "<<endl;
            cout<<"_________________________"<<endl;
            cout<<endl;
            cout<<"1- Sapiens -   $99.99"<<endl;
            cout<<"2- Deus    -   $23.99"<<endl;
            cout<<"3- Fiction -   $40.00"<<endl;
            cout<<"4- Shatter -   $200.99"<<endl;
            cout<<"5- World   -   $9.99"<<endl;
            cout<<"_________________________"<<endl;
            cout<<endl;
            int c;
            cout<<"What do you want to purchase : ";
            cin>>c;
            switch(c){
                case 1:
                
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun31;
                    fqun31+=qun31;
                    tqun+=fqun31;
                    amount31=qun31*99.9;
                    final_sum+=amount31;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun31<<" Sapiens are purchasd for "<<amount31<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 2:
               
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun32;
                    fqun32+=qun32;
                    tqun+=fqun32;
                    amount32=qun32*23.99;
                    final_sum+=amount32;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun31<<"Deus are purchasd for "<<amount32<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 3:
                
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun33;
                    fqun33+=qun33;
                    tqun+=fqun33;
                    amount33=qun33*40.00;
                    final_sum+=amount33;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun33<<" Fictions are purchasd for "<<amount33<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 4:
                
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun34;
                    fqun34+=qun34;
                    tqun+=fqun34;
                    amount34=qun34*200.99;
                    final_sum+=amount34;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun34<<" Shatter are purchasd for "<<amount34<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 5:
                
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun35;
                    fqun35+=qun35;
                    tqun+=fqun35;
                    amount35=qun35*9.99;
                    final_sum+=amount35;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun35<<" World are purchasd for "<<amount35<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                    default:
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<"Invalid choice. Please enter a valid option."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
            }
        break;
        //Category 4
        case 4:
            cout<<"___________"<<endl;
            cout<<endl;
            cout<<"Subcategories in Home Appliances are : "<<endl;
            cout<<"_________________________"<<endl;
            cout<<endl;
            cout<<"1- Iron   -  $99.99"<<endl;
            cout<<"2- Table  -  $23.99"<<endl;
            cout<<"3- Juicer -  $40.00"<<endl;
            cout<<"4- Chairs -  $200.99"<<endl;
            cout<<"5- Door   -  $9.99"<<endl;
            cout<<"_________________________"<<endl;
            cout<<endl;
            int d;
            cout<<"What do you want to purchase : ";
            cin>>d;
            switch(d){
                case 1:
            
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun41;
                    fqun41+=qun41;
                    tqun+=fqun41;
                    amount41=qun41*99.9;
                    final_sum+=amount41;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun41<<" Iron are purchasd for "<<amount41<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 2:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun42;
                    fqun42+=qun42;
                    tqun+=fqun42;
                    amount42=qun42*23.99;
                    final_sum+=amount42;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun42<<" Tables are purchasd for "<<amount42<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 3:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun43;
                    fqun43+=qun43;
                    tqun+=fqun43;
                    amount43=qun43*40.00;
                    final_sum+=amount43;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun43<<" Juicer are purchasd for "<<amount43<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 4:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun44;
                    fqun44+=qun44;
                    tqun+=fqun44;
                    amount44=qun44*200.99;
                    final_sum+=amount44;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun44<<" Chairs are purchasd for "<<amount44<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 5:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun45;
                    fqun45+=qun45;
                    tqun+=fqun45;
                    amount45=qun45*9.99;
                    final_sum+=amount45;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun45<<" Door are purchasd for "<<amount45<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                default:
                cout<<"_________________________________________________________"<<endl;
                cout<<endl;
                cout<<"Invalid choice. Please enter a valid option."<<endl;
                cout<<"_________________________________________________________"<<endl;
                break;
            }
        break;
        //Category 5
        case 5:
            cout<<"___________"<<endl;
            cout<<endl;
            cout<<"Subcategories in Toys are : "<<endl;
            cout<<"_________________________"<<endl;
            cout<<endl;
            cout<<"1- Car  - $99.99"<<endl;
            cout<<"2- Bear - $23.99"<<endl;
            cout<<"3- Doll - $40.00"<<endl;
            cout<<"4- Yoyo - $200.99"<<endl;
            cout<<"5- Guns - $9.99"<<endl;
            cout<<"_________________________"<<endl;
            cout<<endl;
            int e;
            cout<<"What do you want to purchase : ";
            cin>>e;
            switch(e){
                case 1:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun51;
                    fqun51+=qun51;
                    tqun+=fqun51;
                    amount51=qun51*99.9;
                    final_sum+=amount51;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun51<<" cars are purchasd for "<<amount51<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 2:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun52;
                    fqun52+=qun52;
                    tqun+=fqun52;
                    amount52=qun52*23.99;
                    final_sum+=amount52;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun52<<" bears are purchasd for "<<amount52<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 3:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun53;
                    fqun53+=qun53;
                    tqun+=fqun53;
                    amount53=qun53*40.00;
                    final_sum+=amount53;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun53<<" dolls Maker are purchasd for "<<amount53<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 4:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun54;
                    fqun54+=qun54;
                    tqun+=fqun54;
                    amount54=qun54*200.99;
                    final_sum+=amount54;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun54<<" yoyos are purchasd for "<<amount54<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 5:
                   
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun55;
                    fqun55+=qun55;
                    tqun+=fqun55;
                    amount55=qun55*9.99;
                    final_sum+=amount55;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun55<<" guns are purchasd for "<<amount55<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                default:
                cout<<"_________________________________________________________"<<endl;
                cout<<endl;
                cout<<"Invalid choice. Please enter a valid option."<<endl;
                cout<<"_________________________________________________________"<<endl;
                break;
            }
        break;
        //Category 6
         case 6:
            cout<<"___________"<<endl;
            cout<<endl;
            cout<<"Subcategories in Beauty are : "<<endl;
            cout<<"_________________________"<<endl;
            cout<<endl;
            cout<<"1- Creams  -   $99.99"<<endl;
            cout<<"2- Serum   -   $23.99"<<endl;
            cout<<"3- Combs   -   $40.00"<<endl;
            cout<<"4- Lotion  -   $200.99"<<endl;
            cout<<"5- Perfume -   $9.99"<<endl;
            cout<<"_________________________"<<endl;
            cout<<endl;
            int f;
            cout<<"What do you want to purchase : ";
            cin>>f;
            switch(f){
                case 1:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun61;
                    fqun61+=qun61;
                    amount61+=qun61*99.9;
                    final_sum+=amount61;
                    tqun+=fqun61;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun61<<" Creams are purchasd for "<<amount61<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 2:
                   
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun62;
                    fqun62+=qun62;
                    amount62=qun62*23.99;
                    final_sum+=amount62;
                    tqun+=fqun62;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun62<<" numbers of Serum are purchasd for "<<amount62<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 3:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun63;
                    fqun63+=qun63;
                    tqun+=fqun63;
                    amount63=qun63*40.00;
                    final_sum+=amount63;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun63<<" Combs are purchasd for "<<amount63<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 4:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun64;
                    fqun64+=qun64;
                    amount64=qun64*200.99;
                    final_sum+=amount64;
                    tqun+=fqun64;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun64<<" Lotion are purchasd for "<<amount64<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 5:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun65;
                    fqun65+=qun65;
                    tqun+=fqun65;
                    amount65=qun65*9.99;
                    final_sum+=amount65;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun65<<" Perfume are purchasd for "<<amount65<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                default:
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<"Invalid choice. Please enter a valid option."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
            }
            break;
        //Category 7
        case 7:
            cout<<"___________"<<endl;
            cout<<endl;
            cout<<"Subcategories in Sports are : "<<endl;
            cout<<"_________________________"<<endl;
            cout<<endl;
            cout<<"1- Bat      -     $99.99"<<endl;
            cout<<"2- Ball     -     $23.99"<<endl;
            cout<<"3- Racket   -     $40.00"<<endl;
            cout<<"4- Tenis    -     $200.99"<<endl;
            cout<<"5- Football -     $9.99"<<endl;
            cout<<"_________________________"<<endl;
            cout<<endl;
            int g;
            cout<<"What do you want to purchase : ";
            cin>>g;
            switch(g){
                case 1:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun71;
                    fqun71+=qun71;
                    amount71+=qun71*99.9;
                    final_sum+=amount71;
                    tqun+=fqun71;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun71<<" Bats are purchasd for "<<amount71<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 2:
                   
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun72;
                    fqun72+=qun72;
                    amount72=qun72*23.99;
                    final_sum+=amount72;
                    tqun+=fqun72;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun72<<" numbers of Balls are purchasd for "<<amount72<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 3:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun73;
                    fqun73+=qun73;
                    tqun+=fqun73;
                    amount73=qun73*40.00;
                    final_sum+=amount73;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun73<<" Rackets are purchasd for "<<amount73<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 4:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun74;
                    fqun74+=qun74;
                    amount74=qun74*200.99;
                    final_sum+=amount74;
                    tqun+=fqun74;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun74<<"  Tennis are purchasd for "<<amount74<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 5:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun75;
                    fqun75+=qun75;
                    tqun+=fqun75;
                    amount75=qun75*9.99;
                    final_sum+=amount75;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun75<<" football are purchasd for "<<amount75<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                default:
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<"Invalid choice. Please enter a valid option."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
            }
            break;
        // Eight Category 
        case 8:
            cout<<"___________"<<endl;
            cout<<endl;
            cout<<"Subcategories in Stationary is : "<<endl;
            cout<<"_________________________"<<endl;
            cout<<endl;
            cout<<"1- Pen      -  $99.99"<<endl;
            cout<<"2- Marker   -  $23.99"<<endl;
            cout<<"3- Jell Pen -  $40.00"<<endl;
            cout<<"4- Scale    -  $200.99"<<endl;
            cout<<"5- Compass  -  $9.99"<<endl;
            cout<<"_________________________"<<endl;
            cout<<endl;
            int h;
            cout<<"What do you want to purchase : ";
            cin>>h;
            switch(h){
                case 1:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun81;
                    fqun81+=qun81;
                    amount81+=qun81*99.9;
                    final_sum+=amount81;
                    tqun+=fqun81;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun81<<" pens are purchasd for "<<amount81<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 2:
                   
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun82;
                    fqun82+=qun82;
                    amount82=qun82*23.99;
                    final_sum+=amount82;
                    tqun+=fqun82;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun82<<" markers are purchasd for "<<amount82<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 3:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun83;
                    fqun83+=qun83;
                    tqun+=fqun83;
                    amount83=qun83*40.00;
                    final_sum+=amount83;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun83<<" Jell Pens are purchasd for "<<amount83<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 4:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun84;
                    fqun84+=qun84;
                    amount84=qun84*200.99;
                    final_sum+=amount84;
                    tqun+=fqun84;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun84<<" Scale are purchasd for "<<amount84<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                case 5:
                    
                    cout<<"Enter the Number of Product you want to buy : ";
                    cin>>qun85;
                    fqun85+=qun85;
                    tqun+=fqun85;
                    amount85=qun85*9.99;
                    final_sum+=amount85;
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<qun85<<" compass are purchasd for "<<amount85<<" by you ."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
                default:
                    cout<<"_________________________________________________________"<<endl;
                    cout<<endl;
                    cout<<"Invalid choice. Please enter a valid option."<<endl;
                    cout<<"_________________________________________________________"<<endl;
                    break;
            }
            break;
        default:
                cout<<"_________________________________________________________"<<endl;
                cout<<endl;
                cout<<"Invalid choice. Please enter a valid option."<<endl;
                cout<<"_________________________________________________________"<<endl;
                break;
        }
        cout<<endl;
        cout<<"Do you want to Explore again(Y/N) ? ";
        cin>>choice;
    }while(choice=='Y' || choice=='y');
    cout<<endl;
 if(tqun>0){
cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
cout<<endl;
 cout << setw(10) << setiosflags(ios::left) << "Product" << setw(15) << setiosflags(ios::left) << "Quantity" << setw(20) << setiosflags(ios::left) << "Amount" << endl;
 cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
   cout<<endl;
 
    if (amount11>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Fans"<<setw(15)<<setiosflags(ios::left)<<fqun11<<setw(20)<<setiosflags(ios::left)<<amount11<< endl;
    }
    if (amount12>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Bulbs"<<setw(15)<<setiosflags(ios::left)<<fqun12<<setw(20)<<setiosflags(ios::left)<<amount12<< endl;
    }
    if (amount13>0) {
        cout<< setw(10) << setiosflags(ios::left) << "LED Lights" << setw(15) << setiosflags(ios::left) << fqun13 << setw(20) << setiosflags(ios::left)<<amount13<< endl;
    }
    if (amount14>0) {
        cout << setw(10) << setiosflags(ios::left) << "TVs" << setw(15) << setiosflags(ios::left)<<fqun14<<setw(20)<<setiosflags(ios::left)<<amount14<< endl;
    }
    if (amount15>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Fans"<<setw(15)<<setiosflags(ios::left)<<fqun15<<setw(20)<<setiosflags(ios::left)<<amount15<< endl;
    }
    //Second Category Output
    if (amount21>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Pants"<<setw(15)<<setiosflags(ios::left)<<fqun21<<setw(20)<<setiosflags(ios::left)<<amount21<< endl;
    }
    if (amount22>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Shirt"<<setw(15)<<setiosflags(ios::left)<<fqun22<<setw(20)<<setiosflags(ios::left)<<amount22<< endl;
    }
    if (amount23>0) {
        cout<< setw(10) << setiosflags(ios::left) << "Jeans" << setw(15) << setiosflags(ios::left) << fqun23 << setw(20) << setiosflags(ios::left)<<amount23<< endl;
    }
    if (amount24>0) {
        cout << setw(10) << setiosflags(ios::left) << "Lehnga" << setw(15) << setiosflags(ios::left)<<fqun24<<setw(20)<<setiosflags(ios::left)<<amount24<< endl;
    }
    if (amount25>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Abaya"<<setw(15)<<setiosflags(ios::left)<<fqun25<<setw(20)<<setiosflags(ios::left)<<amount25<< endl;
    }
    // Third Category
    if (amount31>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Sapiens"<<setw(15)<<setiosflags(ios::left)<<fqun31<<setw(20)<<setiosflags(ios::left)<<amount31<< endl;
    }
    if (amount32>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Deus"<<setw(15)<<setiosflags(ios::left)<<fqun32<<setw(20)<<setiosflags(ios::left)<<amount32<< endl;
    }
    if (amount33>0) {
        cout<< setw(10) << setiosflags(ios::left) << "Fiction" << setw(15) << setiosflags(ios::left) << fqun33 << setw(20) << setiosflags(ios::left)<<amount33<< endl;
    }
    if (amount34>0) {
        cout << setw(10) << setiosflags(ios::left) << "Shatter" << setw(15) << setiosflags(ios::left)<<fqun34<<setw(20)<<setiosflags(ios::left)<<amount34<< endl;
    }
    if (amount35>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"World"<<setw(15)<<setiosflags(ios::left)<<fqun35<<setw(20)<<setiosflags(ios::left)<<amount35<< endl;
    }
    // Fourth Category
    if (amount41>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Iron"<<setw(15)<<setiosflags(ios::left)<<fqun41<<setw(20)<<setiosflags(ios::left)<<amount41<< endl;
    }
    if (amount42>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Table"<<setw(15)<<setiosflags(ios::left)<<fqun42<<setw(20)<<setiosflags(ios::left)<<amount42<< endl;
    }
    if (amount43>0) {
        cout<< setw(10) << setiosflags(ios::left) << "Juicer" << setw(15) << setiosflags(ios::left) << fqun43 << setw(20) << setiosflags(ios::left)<<amount43<< endl;
    }
    if (amount44>0) {
        cout << setw(10) << setiosflags(ios::left) << "Chairs" << setw(15) << setiosflags(ios::left)<<fqun44<<setw(20)<<setiosflags(ios::left)<<amount44<< endl;
    }
    if (amount45>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Door"<<setw(15)<<setiosflags(ios::left)<<fqun45<<setw(20)<<setiosflags(ios::left)<<amount45<< endl;
    }
    //Fith Category
    if (amount51>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Car"<<setw(15)<<setiosflags(ios::left)<<fqun51<<setw(20)<<setiosflags(ios::left)<<amount51<< endl;
    }
    if (amount52>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Bear"<<setw(15)<<setiosflags(ios::left)<<fqun52<<setw(20)<<setiosflags(ios::left)<<amount52<< endl;
    }
    if (amount53>0) {
        cout<< setw(10) << setiosflags(ios::left) << "Doll" << setw(15) << setiosflags(ios::left) << fqun53 << setw(20) << setiosflags(ios::left)<<amount53<< endl;
    }
    if (amount54>0) {
        cout << setw(10) << setiosflags(ios::left) << "Yoyo" << setw(15) << setiosflags(ios::left)<<fqun54<<setw(20)<<setiosflags(ios::left)<<amount54<< endl;
    }
    if (amount55>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Guns"<<setw(15)<<setiosflags(ios::left)<<fqun55<<setw(20)<<setiosflags(ios::left)<<amount55<< endl;
    }
    //6th Category
    if (amount61>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Creams"<<setw(15)<<setiosflags(ios::left)<<fqun61<<setw(20)<<setiosflags(ios::left)<<amount61<< endl;
    }
    if (amount62>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Serum"<<setw(15)<<setiosflags(ios::left)<<fqun62<<setw(20)<<setiosflags(ios::left)<<amount62<< endl;
    }
    if (amount63>0) {
        cout<< setw(10) << setiosflags(ios::left) << "Combos" << setw(15) << setiosflags(ios::left) << fqun63 << setw(20) << setiosflags(ios::left)<<amount63<< endl;
    }
    if (amount64>0) {
        cout << setw(10) << setiosflags(ios::left) << "Lotion" << setw(15) << setiosflags(ios::left)<<fqun64<<setw(20)<<setiosflags(ios::left)<<amount64<< endl;
    }
    if (amount65>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Perfume"<<setw(15)<<setiosflags(ios::left)<<fqun65<<setw(20)<<setiosflags(ios::left)<<amount65<< endl;
    }
    //Seventh Category
    if (amount71>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Bat"<<setw(15)<<setiosflags(ios::left)<<fqun71<<setw(20)<<setiosflags(ios::left)<<amount71<< endl;
    }
    if (amount72>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Balls"<<setw(15)<<setiosflags(ios::left)<<fqun72<<setw(20)<<setiosflags(ios::left)<<amount72<< endl;
    }
    if (amount73>0) {
        cout<< setw(10) << setiosflags(ios::left) << "Racket" << setw(15) << setiosflags(ios::left) << fqun73 << setw(20) << setiosflags(ios::left)<<amount73<< endl;
    }
    if (amount74>0) {
        cout << setw(10) << setiosflags(ios::left) << "Tenis" << setw(15) << setiosflags(ios::left)<<fqun74<<setw(20)<<setiosflags(ios::left)<<amount74<< endl;
    }
    if (amount75>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Football"<<setw(15)<<setiosflags(ios::left)<<fqun75<<setw(20)<<setiosflags(ios::left)<<amount75<< endl;
    }
    //Eight Category
    if (amount81>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Pen"<<setw(15)<<setiosflags(ios::left)<<fqun81<<setw(20)<<setiosflags(ios::left)<<amount81<< endl;
    }
    if (amount82>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Marker"<<setw(15)<<setiosflags(ios::left)<<fqun82<<setw(20)<<setiosflags(ios::left)<<amount82<< endl;
    }
    if (amount83>0) {
        cout<< setw(10) << setiosflags(ios::left) << "Jell Pen" << setw(15) << setiosflags(ios::left) << fqun83 << setw(20) << setiosflags(ios::left)<<amount83<< endl;
    }
    if (amount84>0) {
        cout << setw(10) << setiosflags(ios::left) << "Scale" << setw(15) << setiosflags(ios::left)<<fqun84<<setw(20)<<setiosflags(ios::left)<<amount84<< endl;
    }
    if (amount85>0) {
        cout<<setw(10)<<setiosflags(ios::left)<<"Compass"<<setw(15)<<setiosflags(ios::left)<<fqun85<<setw(20)<<setiosflags(ios::left)<<amount85<< endl;
    }
    cout<<endl;
    cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<endl;
    cout << setw(10) << setiosflags(ios::left) << "Total" << setw(15) << setiosflags(ios::left) << tqun << setw(20) << setiosflags(ios::left) << final_sum << endl;
    cout<<"________________________________________________________________________________________________________________________________________________"<<endl;
    }
 
   cout<<setw(60)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
   cout<<endl;
   cout<<setw(60)<<"                                                ______________________________                                    "<<endl;
   cout<<setw(60)<<"_______________________________________________| Thank You for Shoping       |____________________________________"<<endl;
   cout<<"_______________________________________________| Come Back Again "<<setw(11)<<name<< " |____________________________________"<<endl;
   cout<<setw(60)<<"                                               |_____________________________|                                    "<<endl;
   cout<<endl;
   cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
}
else{
    cout<<"Invalid Login Id "<<name<<" Please  Try Again ."<<endl;
}
return 0;
}