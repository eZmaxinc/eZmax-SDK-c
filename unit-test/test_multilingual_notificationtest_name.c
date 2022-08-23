#ifndef multilingual_notificationtest_name_TEST
#define multilingual_notificationtest_name_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multilingual_notificationtest_name_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multilingual_notificationtest_name.h"
multilingual_notificationtest_name_t* instantiate_multilingual_notificationtest_name(int include_optional);



multilingual_notificationtest_name_t* instantiate_multilingual_notificationtest_name(int include_optional) {
  multilingual_notificationtest_name_t* multilingual_notificationtest_name = NULL;
  if (include_optional) {
    multilingual_notificationtest_name = multilingual_notificationtest_name_create(
      "Default",
      "Default"
    );
  } else {
    multilingual_notificationtest_name = multilingual_notificationtest_name_create(
      "Default",
      "Default"
    );
  }

  return multilingual_notificationtest_name;
}


#ifdef multilingual_notificationtest_name_MAIN

void test_multilingual_notificationtest_name(int include_optional) {
    multilingual_notificationtest_name_t* multilingual_notificationtest_name_1 = instantiate_multilingual_notificationtest_name(include_optional);

	cJSON* jsonmultilingual_notificationtest_name_1 = multilingual_notificationtest_name_convertToJSON(multilingual_notificationtest_name_1);
	printf("multilingual_notificationtest_name :\n%s\n", cJSON_Print(jsonmultilingual_notificationtest_name_1));
	multilingual_notificationtest_name_t* multilingual_notificationtest_name_2 = multilingual_notificationtest_name_parseFromJSON(jsonmultilingual_notificationtest_name_1);
	cJSON* jsonmultilingual_notificationtest_name_2 = multilingual_notificationtest_name_convertToJSON(multilingual_notificationtest_name_2);
	printf("repeating multilingual_notificationtest_name:\n%s\n", cJSON_Print(jsonmultilingual_notificationtest_name_2));
}

int main() {
  test_multilingual_notificationtest_name(1);
  test_multilingual_notificationtest_name(0);

  printf("Hello world \n");
  return 0;
}

#endif // multilingual_notificationtest_name_MAIN
#endif // multilingual_notificationtest_name_TEST
