//
//  tagsort.h
//  Lab 5
//
//  Created by Phoebe ZOU on 11/27/20.
//

#ifndef tagsort_h
#define tagsort_h

//swap the address
void sort(int *b[], int size) {
   for(int i = 0; i<size; i++){
        for(int j = i+1; j<size; j++){
            if(*b[i]>=*b[j]){
                int *temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
            
        }
        
    }
};
#endif /* tagsort_h */
