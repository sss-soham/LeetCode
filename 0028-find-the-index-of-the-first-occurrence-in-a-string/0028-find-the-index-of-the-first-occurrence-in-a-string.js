/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
    if(haystack.length < needle.length){
        return -1;
    }

    let found = 0;
    for(let i=0; i < haystack.length-needle.length +1; i++){
        if(haystack[i] === needle[0]){
            found = 1;
            for(let j=1; j < needle.length; j++){
                if(haystack[i+j] !== needle[j]){
                    found = 0;
                    break;
                }
            }
            if(found === 1){
                return i;
            }
        }
    }
    return -1;
};