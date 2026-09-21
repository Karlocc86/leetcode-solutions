function maxArea(height: number[]): number {

    let left : number = 0;
    let right : number = height.length - 1;
    let maxAP : number = 0;
    let distance : number = 0;

    while(left < right){

        distance = right - left;
        maxAP = Math.max(maxAP, Math.min(height[left], height[right]) * distance);
        if(height[left] >= height[right]){
            right--;
        }else{
            left++;
        }

    }

    return maxAP;
    
};