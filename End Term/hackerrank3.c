#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a,b);
}
int lexicographic_sort_reverse(const char* a, const char* b) {
     return -strcmp(a,b);
     }
int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int m=strlen(a),n=strlen(b);
    for(int i=0;i<strlen(a)-1;i++){
        for(int j=i+1;j<strlen(a);j++){
            if(a[i]==a[j]){
            m--;
            break;}
            }}
     for(int i=0;i<strlen(b)-1;i++){
        for(int j=i+1;j<strlen(b);j++){
            if(b[i]==b[j]){
            n--;
            break;}
            }}
    if(m>n)
    return 1;
    else{
        if(m==n)
        return strcmp(a,b);
        else 
        return 0;
        }}
int sort_by_length(const char* a, const char* b) {
    if(strlen(a)>strlen(b)){
        return 1;}
    else {
        if(strlen(a)==strlen(b))
        return strcmp(a,b);
        else 
        return 0; 
        }}
void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    char*c;
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(cmp_func(arr[i],arr[j])>0){
                c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;    }}}}