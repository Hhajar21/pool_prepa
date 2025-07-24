int maxArea(int* height, int heightSize) {
    int indx_left = 0;
    int index_right = heightSize - 1;
    int stor = 0;
    int max_stor = 0;
    int final_h = 0;
    int final_w = 0;

    while (indx_left < index_right)
    {
        if(height[indx_left] < height[index_right]) // hna ghankhedo le sghir fih ghy7bas lma 
            final_h = height[indx_left];
        else
            final_h = height[index_right];
        final_w = index_right - indx_left;
        stor = final_h * final_w;
        if(stor > max_stor)
            max_stor = stor;
        if(height[indx_left] < height[index_right])// ohna incrimontiw lakn eft mzl sghar ydoz l pos li7daha so bach nkhdeo the highst one else right ghtji backword bach tkhod the highist ''
            indx_left++;
        else
            index_right--;
    }
    return max_stor;
    
}
