#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int lexicographic_sort(const char * a,const char * b) {
    return strcmp(a,b);
}

int lexicographic_sort_reverse(const char * a,const char * b) {
    return strcmp(b, a);
}

int sort_by_length(const char *a, const char * b) {
    if(strlen(a) == strlen(b)) {
        return strcmp(a,b);
    }
    else {
        return strlen(a) - strlen(b);
    }
}

int sort_by_no_of_distinct_characters(const char *a, const char *b) {
    int count_a = 0;
    int count_b = 0;

    int freq_a[26] = {0};
    int freq_b[26] = {0};

    for(int i = 0; i < strlen(a); i++) {
        if(freq_a[a[i] - 'a'] == 0) {
            count_a++;
            freq_a[a[i] - 'a'] = 1;
        }
    }

    for(int i = 0; i < strlen(b); i++) {
        if(freq_b[b[i] - 'a'] == 0) {
            count_b++;
            freq_b[b[i] - 'a'] = 1;
        }
    }

    if(count_a == count_b) {
        return strcmp(a,b);
    }
    else {
        return count_a - count_b;
    }

}

void string_sort(char **arr ,const int len, int (*cmp_function)(const char *a , const char * b)) {
    for(int i = 0; i < len - 1; i++) {
        for(int j = 0; j < len - i - 1; j++) {
            if(cmp_function(arr[j], arr[j + 1]) > 0) {
                char * temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {

    int n;
    printf("Enter no. of Strings:");
    scanf("%d",&n);

    char ** arr;
    arr = (char**)malloc(n * sizeof(char *));

    printf("Enter %d strings with only small letters only: ",n);

    for(int i = 0; i < n; i++) {
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s",*(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen((*arr + i )) + 1);
    }

    string_sort(arr, n, lexicographic_sort);
    printf("\n --- --- --- --- --- ---\n");
    for(int i = 0; i < n; i++ ) {
        printf("%s\n",arr[i]);
    }
    printf(" --- --- --- --- --- ---\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    printf("\n --- --- --- --- --- ---\n");
    for(int i = 0; i < n; i++ ) {
        printf("%s\n",arr[i]);
    }
    printf(" --- --- --- --- --- ---\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    printf("\n --- --- --- --- --- ---\n");
    for(int i = 0; i < n; i++ ) {
        printf("%s\n",arr[i]);
    }
    printf(" --- --- --- --- --- ---\n");

    for(int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
}