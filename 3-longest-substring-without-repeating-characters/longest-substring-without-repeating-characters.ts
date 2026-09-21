function lengthOfLongestSubstring(s: string): number {

    let left : number = 0;
    let right : number = 0;
    let seen = new Set<string>();
    let lonSubt : number = 0;
    
    for(const char of s){

        if(seen.has(char)){

            while(seen.has(char)){
                seen.delete(s[left]);
                left++;
            }
        }
        seen.add(s[right]);
        right++;

        lonSubt = Math.max(lonSubt, right - left); 

    }

    return lonSubt;
};