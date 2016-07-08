int digitValue(char c){

    int value=0;

    switch(c){
         case 'I': value = 1; break;
         case 'V': value = 5; break;
         case 'X': value = 10; break;
         case 'L': value = 50; break;
         case 'C': value = 100; break;
         case 'D': value = 500; break;
         case 'M': value = 1000; break;
         case '\0': value = 0; break;
         default: value = -1; 
    }

    return value;
}
int Solution::romanToInt(string A) {

    int i=0;
    long int number =0;
   
    char *roman_Number = new char[A.length() + 1];
    strcpy(roman_Number, A.c_str());
    // do stuff
    
   
    while(roman_Number[i]){
        
         if(digitValue(roman_Number[i]) < 0){
             printf("Invalid roman digit : %c",roman_Number[i]);
             return 0;
         }
            
         if((strlen(roman_Number) -i) > 2){
             if(digitValue(roman_Number[i]) < digitValue(roman_Number[i+2])){
                 printf("Invalid roman number");
                 return 0;
             }
         }

         if(digitValue(roman_Number[i]) >= digitValue(roman_Number[i+1]))
             number = number + digitValue(roman_Number[i]);
         else{
             number = number + (digitValue(roman_Number[i+1]) - digitValue(roman_Number[i]));
             i++;
         }
         i++;
    }
        
    delete [] roman_Number;
    return number;
 
}

