/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
        let intFromI = [];
    let result = 0 ;
    for(let i = 0; i < s.length; i++){
        s[i] === "I" ? intFromI[i] = 1 : s[i] === "V" ? intFromI[i] = 5: s[i] === "X" ? intFromI[i] = 10 : s[i] === "L" ? intFromI[i] = 50 : s[i] === "C" ? intFromI[i] = 100 : s[i] === "D" ? intFromI[i] = 500 : intFromI[i] = 1000;
    }
    for(let i = 0; i < intFromI.length; i++){
        if(intFromI[i] < intFromI[i + 1]){
            result+= intFromI[i + 1] - intFromI[i]
            i +=1
        }else{
            result += intFromI[i]
        }
    }

    return result
};
