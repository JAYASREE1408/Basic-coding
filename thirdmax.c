int thirdMax(int* nums, int numsSize){
  int max1=INT_MIN;
  for(int i=0;i<numsSize;i++){
    if(nums[i]>=max1){
      max1=nums[i];
    }
  }
  int max2=INT_MIN;
  for(int j=0;j<numsSize;j++){
    if(nums[j]<max1&&nums[j]>=max2){
      max2=nums[j];
    }
  }
  int max3=INT_MIN,count=0;
  for(int k=0;k<numsSize;k++){
    if(nums[k]<max1&&nums[k]<max2&&nums[k]>=max3){
      max3=nums[k];
      count++;
    }
  }
  if(count>0){
    return max3;
  }
  else{
    return max1;
  }
}
