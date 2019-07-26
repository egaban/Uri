#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
  char name[11];
  int killed;
  int isDead;
  struct person *left, *right;
};

struct person *root = NULL;

struct person* findPerson(char name[]);
struct person* insertPerson(char name[]);
void printTree(struct person *p);
void deleteTree(struct person *p);

int main(void)
{
  char killer[11], killed[11];
  struct person *p;

  while (scanf("%s %s", killer, killed) != EOF) {
    p = findPerson(killer);
    if (!p)
      p = insertPerson(killer);
    p->killed++;

    p = findPerson(killed);
    if (!p)
      p = insertPerson(killed);
    p->isDead = 1;
  }

  printf("HALL OF MURDERERS\n");
  printTree(root);
  deleteTree(root);

  return 0;
}

struct person* findPerson(char name[])
{
  struct person *k = root;

  while (k) {
    if (!strcmp(name, k->name))
      return k;
    else if (strcmp(name, k->name) < 0)
      k = k->left;
    else
      k = k->right;
  }

  return k;
}

struct person* insertPerson(char name[])
{
  struct person *p = NULL;
  struct person *q = root;
  struct person *newp = (struct person*) malloc(sizeof (struct person));

  strcpy(newp->name, name);
  newp->isDead = newp->killed = 0;
  newp->left = newp->right = NULL;

  while (q) {
    p = q;
    if (strcmp(name, q->name) < 0)
      q = q->left;
    else
      q = q->right;
  }

  if (!p)
    root = newp;
  else if (strcmp(name, p->name) < 0) 
    p->left = newp;
  else
    p->right = newp;

  return newp;
}

void printTree(struct person *p)
{
  if (p) {
    printTree(p->left);
    if (p->isDead == 0)
      printf("%s %d\n", p->name, p->killed);
    printTree(p->right);
  }
}

void deleteTree(struct person *p)
{
  if (p) {
    deleteTree(p->left);
    deleteTree(p->right);
    free(p);
  }
}
