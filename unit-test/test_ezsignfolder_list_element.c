#ifndef ezsignfolder_list_element_TEST
#define ezsignfolder_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_list_element.h"
ezsignfolder_list_element_t* instantiate_ezsignfolder_list_element(int include_optional);



ezsignfolder_list_element_t* instantiate_ezsignfolder_list_element(int include_optional) {
  ezsignfolder_list_element_t* ezsignfolder_list_element = NULL;
  if (include_optional) {
    ezsignfolder_list_element = ezsignfolder_list_element_create(
      33,
      "Test eZsign Folder"
    );
  } else {
    ezsignfolder_list_element = ezsignfolder_list_element_create(
      33,
      "Test eZsign Folder"
    );
  }

  return ezsignfolder_list_element;
}


#ifdef ezsignfolder_list_element_MAIN

void test_ezsignfolder_list_element(int include_optional) {
    ezsignfolder_list_element_t* ezsignfolder_list_element_1 = instantiate_ezsignfolder_list_element(include_optional);

	cJSON* jsonezsignfolder_list_element_1 = ezsignfolder_list_element_convertToJSON(ezsignfolder_list_element_1);
	printf("ezsignfolder_list_element :\n%s\n", cJSON_Print(jsonezsignfolder_list_element_1));
	ezsignfolder_list_element_t* ezsignfolder_list_element_2 = ezsignfolder_list_element_parseFromJSON(jsonezsignfolder_list_element_1);
	cJSON* jsonezsignfolder_list_element_2 = ezsignfolder_list_element_convertToJSON(ezsignfolder_list_element_2);
	printf("repeating ezsignfolder_list_element:\n%s\n", cJSON_Print(jsonezsignfolder_list_element_2));
}

int main() {
  test_ezsignfolder_list_element(1);
  test_ezsignfolder_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_list_element_MAIN
#endif // ezsignfolder_list_element_TEST
