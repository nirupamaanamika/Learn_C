   head->next=NULL;
   */
 
  int main()
  {
    char ch;
    printf("eneter the character");
    scanf("%s",&ch);
    char *ptr=&ch;
    count_p(ch);