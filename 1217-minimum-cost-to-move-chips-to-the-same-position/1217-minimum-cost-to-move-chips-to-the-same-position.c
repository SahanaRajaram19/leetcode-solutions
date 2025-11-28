int minCostToMoveChips(int* arr, int positionSize) {
   int even=0,odd=0;
   for(int i=0;i<positionSize;i++){
    if(*(arr+i)%2==0){
        even++;
    }
    else{
        odd++;

    }
   }    
   return even<odd?even:odd;
   } 