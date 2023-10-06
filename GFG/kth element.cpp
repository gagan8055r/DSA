int kthElement(int arr1[], int arr2[], int n, int m, int k) {
    int i = 0, j = 0;
    int result;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            result = arr1[i];
            i++;
        } else {
            result = arr2[j];
            j++;
        }
        k--;

        if (k == 0) {
            return result;
        }
    }

  
    while (i < n) {
        result = arr1[i];
        i++;
        k--;

        if (k == 0) {
            return result;
        }
    }

    while (j < m) {
        result = arr2[j];
        j++;
        k--;

        if (k == 0) {
            return result;
        }
    }

   
}
