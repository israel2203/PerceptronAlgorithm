#include <stdio.h>
#include <stdlib.h>

int main(){
  int nbTraningData,k=1;
  int counter=0,output,nbIteration=1;
  float activation=0;
  float learningParameter;
  printf("Enter the amount of elemnets selected for the traning data \n");
  scanf("%d",&nbTraningData);
  int elements[3][nbTraningData];
  int desiredValue[nbTraningData];
  float weight[3];
   for(int i=0;i<3;i++){
       weight[i]=0;
     }
  printf("Enter the elements selected for the traning data:\n");
  for(int i=0;i<nbTraningData;i++){
     for(int j=1;j<3;j++){
         scanf("%d",&elements[j][i]);
         elements[0][i]=1;
         }
     } 
  printf("Specify the Desired Value for each tranaing data entered:\n");
  for(int i=0;i<nbTraningData;i++){
      printf("Desired Value %d:",k++);
      scanf("%d",&desiredValue[i]);
     }
  printf("Enter the Learning Parameter:");
  scanf("%f",&learningParameter);
 for(int t=counter;t<nbTraningData;t++){
  for(int i=0;i<nbTraningData;i++){
     for(int j=0;j<3;j++){
       activation=activation+(elements[j][i]*weight[j]);
         }
    if(activation>=0){
        output=1;
       }
       else{
          output=-1;
         }
    if(output==desiredValue[i]){
          counter++;
        }
       else{
          counter=0;
      for(int j=0;j<3;j++){
       weight[j]=weight[j]+(learningParameter*(desiredValue[i]-output)*elements[j][i]);
            }
        }
      activation=0;
      }
       nbIteration++;
    }
   for(int p=0;p<3;p++){
        printf("%f \n",weight[p]);
       }
     printf("The number of iteration is %d\n",nbIteration);

  return 0;
}
