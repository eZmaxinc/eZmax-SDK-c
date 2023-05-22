#ifndef clonehistory_list_element_TEST
#define clonehistory_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define clonehistory_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/clonehistory_list_element.h"
clonehistory_list_element_t* instantiate_clonehistory_list_element(int include_optional);



clonehistory_list_element_t* instantiate_clonehistory_list_element(int include_optional) {
  clonehistory_list_element_t* clonehistory_list_element = NULL;
  if (include_optional) {
    clonehistory_list_element = clonehistory_list_element_create(
      12,
      70,
      70,
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      "JohnDoe",
      "John",
      "Doe",
      "JohnDoe",
      "John",
      "Doe"
    );
  } else {
    clonehistory_list_element = clonehistory_list_element_create(
      12,
      70,
      70,
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      "JohnDoe",
      "John",
      "Doe",
      "JohnDoe",
      "John",
      "Doe"
    );
  }

  return clonehistory_list_element;
}


#ifdef clonehistory_list_element_MAIN

void test_clonehistory_list_element(int include_optional) {
    clonehistory_list_element_t* clonehistory_list_element_1 = instantiate_clonehistory_list_element(include_optional);

	cJSON* jsonclonehistory_list_element_1 = clonehistory_list_element_convertToJSON(clonehistory_list_element_1);
	printf("clonehistory_list_element :\n%s\n", cJSON_Print(jsonclonehistory_list_element_1));
	clonehistory_list_element_t* clonehistory_list_element_2 = clonehistory_list_element_parseFromJSON(jsonclonehistory_list_element_1);
	cJSON* jsonclonehistory_list_element_2 = clonehistory_list_element_convertToJSON(clonehistory_list_element_2);
	printf("repeating clonehistory_list_element:\n%s\n", cJSON_Print(jsonclonehistory_list_element_2));
}

int main() {
  test_clonehistory_list_element(1);
  test_clonehistory_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // clonehistory_list_element_MAIN
#endif // clonehistory_list_element_TEST
