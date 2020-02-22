count = 0;
function megeSort(arr, L, H){

    if(L<H){
       let M =Math.floor((L+H)/2)
       console.log("Step ", ++count, " ")
       console.log("mergeSort(", "arr", ", ", L, ", ", M, " )" )
        megeSort(arr, L, M);
        console.log("Step ", ++count, " ")
        console.log("mergeSortU(", "arr", ", ", M+1, ", ", H," )"  )
        megeSort(arr, M+1, H);
        console.log("Step ", ++count, " ")
        console.log("merge(", "arr", ", ",L, ", ", M, ", ", M+1, ", ", H, " )"  )
        merge(arr, L, M, M+1, H);
    }
    return arr;
}

function merge(arr, Lbeg, Lend, Rbeg, Rend){

     let temp = [],i,q1,q2;
     for(i = 0,q1=Lbeg,q2=Rbeg; q1<=Lend&&q2<=Rend; i++){
         temp[i] = arr[q1]<arr[q2]?arr[q1++]: arr[q2++];
     }
     for(; q1<=Lend; i++){
         temp[i] = arr[q1++];
     }
     for(; q2<=Rend; i++){
         temp[i]= arr[q2++];
     }

     for(i=0, q1=Lbeg; q1<=Rend; i++, q1++){
         arr[q1]=temp[i];
     }


}


    let a = [8,7,6,5,4];
    let arr = megeSort(a, 0, a.length-1);
    console.log(arr, "12345");

