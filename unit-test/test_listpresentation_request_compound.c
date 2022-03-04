#ifndef listpresentation_request_compound_TEST
#define listpresentation_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define listpresentation_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/listpresentation_request_compound.h"
listpresentation_request_compound_t* instantiate_listpresentation_request_compound(int include_optional);



listpresentation_request_compound_t* instantiate_listpresentation_request_compound(int include_optional) {
  listpresentation_request_compound_t* listpresentation_request_compound = NULL;
  if (include_optional) {
    listpresentation_request_compound = listpresentation_request_compound_create(
      "0",
      "bField1 eq true and iField2 gte 0 and iField2 lte 1000 and sField3 eq 'Other' and eField4 eq 'Paid' and sField5 like '%needle%' and iField6 in '1,2,3' and dtField7 rg '=m,=3mm'",
      "0",
      list_createList(),
      100,
      0,
      1
    );
  } else {
    listpresentation_request_compound = listpresentation_request_compound_create(
      "0",
      "bField1 eq true and iField2 gte 0 and iField2 lte 1000 and sField3 eq 'Other' and eField4 eq 'Paid' and sField5 like '%needle%' and iField6 in '1,2,3' and dtField7 rg '=m,=3mm'",
      "0",
      list_createList(),
      100,
      0,
      1
    );
  }

  return listpresentation_request_compound;
}


#ifdef listpresentation_request_compound_MAIN

void test_listpresentation_request_compound(int include_optional) {
    listpresentation_request_compound_t* listpresentation_request_compound_1 = instantiate_listpresentation_request_compound(include_optional);

	cJSON* jsonlistpresentation_request_compound_1 = listpresentation_request_compound_convertToJSON(listpresentation_request_compound_1);
	printf("listpresentation_request_compound :\n%s\n", cJSON_Print(jsonlistpresentation_request_compound_1));
	listpresentation_request_compound_t* listpresentation_request_compound_2 = listpresentation_request_compound_parseFromJSON(jsonlistpresentation_request_compound_1);
	cJSON* jsonlistpresentation_request_compound_2 = listpresentation_request_compound_convertToJSON(listpresentation_request_compound_2);
	printf("repeating listpresentation_request_compound:\n%s\n", cJSON_Print(jsonlistpresentation_request_compound_2));
}

int main() {
  test_listpresentation_request_compound(1);
  test_listpresentation_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // listpresentation_request_compound_MAIN
#endif // listpresentation_request_compound_TEST
