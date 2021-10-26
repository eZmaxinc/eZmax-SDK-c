#ifndef listpresentation_request_TEST
#define listpresentation_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define listpresentation_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/listpresentation_request.h"
listpresentation_request_t* instantiate_listpresentation_request(int include_optional);



listpresentation_request_t* instantiate_listpresentation_request(int include_optional) {
  listpresentation_request_t* listpresentation_request = NULL;
  if (include_optional) {
    listpresentation_request = listpresentation_request_create(
      "0",
      "bField1 eq true and iField2 gte 0 and iField2 lte 1000 and sField3 eq 'Other' and eField4 eq 'Paid' and sField5 like '%needle%' and iField6 in '1,2,3' and dtField7 rg '=m,=3mm'",
      "0",
      list_create(),
      100,
      0,
      1
    );
  } else {
    listpresentation_request = listpresentation_request_create(
      "0",
      "bField1 eq true and iField2 gte 0 and iField2 lte 1000 and sField3 eq 'Other' and eField4 eq 'Paid' and sField5 like '%needle%' and iField6 in '1,2,3' and dtField7 rg '=m,=3mm'",
      "0",
      list_create(),
      100,
      0,
      1
    );
  }

  return listpresentation_request;
}


#ifdef listpresentation_request_MAIN

void test_listpresentation_request(int include_optional) {
    listpresentation_request_t* listpresentation_request_1 = instantiate_listpresentation_request(include_optional);

	cJSON* jsonlistpresentation_request_1 = listpresentation_request_convertToJSON(listpresentation_request_1);
	printf("listpresentation_request :\n%s\n", cJSON_Print(jsonlistpresentation_request_1));
	listpresentation_request_t* listpresentation_request_2 = listpresentation_request_parseFromJSON(jsonlistpresentation_request_1);
	cJSON* jsonlistpresentation_request_2 = listpresentation_request_convertToJSON(listpresentation_request_2);
	printf("repeating listpresentation_request:\n%s\n", cJSON_Print(jsonlistpresentation_request_2));
}

int main() {
  test_listpresentation_request(1);
  test_listpresentation_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // listpresentation_request_MAIN
#endif // listpresentation_request_TEST
