

function twoSum(nums: number[], target: number): number[] {


    let map = new Map<number,number>();

    for(let i : number = 0; i < nums.length ; i++){

        let complement : number = target - nums[i];

        if(map.has(complement)){
            return [i , map.get(complement)];
        }

        map.set(nums[i], i);

    }

    return [];
    
};