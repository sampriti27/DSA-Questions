void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        //   boolean swapped=false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                //   swapped=true;
                swap(&arr[j + 1], &arr[j]);
            }
        }
    }
    //   if(!swapped){
    //       break;
    //   }
}
