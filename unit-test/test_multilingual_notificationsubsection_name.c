#ifndef multilingual_notificationsubsection_name_TEST
#define multilingual_notificationsubsection_name_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multilingual_notificationsubsection_name_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multilingual_notificationsubsection_name.h"
multilingual_notificationsubsection_name_t* instantiate_multilingual_notificationsubsection_name(int include_optional);



multilingual_notificationsubsection_name_t* instantiate_multilingual_notificationsubsection_name(int include_optional) {
  multilingual_notificationsubsection_name_t* multilingual_notificationsubsection_name = NULL;
  if (include_optional) {
    multilingual_notificationsubsection_name = multilingual_notificationsubsection_name_create(
      "Signature électronique",
      "Electronic signature"
    );
  } else {
    multilingual_notificationsubsection_name = multilingual_notificationsubsection_name_create(
      "Signature électronique",
      "Electronic signature"
    );
  }

  return multilingual_notificationsubsection_name;
}


#ifdef multilingual_notificationsubsection_name_MAIN

void test_multilingual_notificationsubsection_name(int include_optional) {
    multilingual_notificationsubsection_name_t* multilingual_notificationsubsection_name_1 = instantiate_multilingual_notificationsubsection_name(include_optional);

	cJSON* jsonmultilingual_notificationsubsection_name_1 = multilingual_notificationsubsection_name_convertToJSON(multilingual_notificationsubsection_name_1);
	printf("multilingual_notificationsubsection_name :\n%s\n", cJSON_Print(jsonmultilingual_notificationsubsection_name_1));
	multilingual_notificationsubsection_name_t* multilingual_notificationsubsection_name_2 = multilingual_notificationsubsection_name_parseFromJSON(jsonmultilingual_notificationsubsection_name_1);
	cJSON* jsonmultilingual_notificationsubsection_name_2 = multilingual_notificationsubsection_name_convertToJSON(multilingual_notificationsubsection_name_2);
	printf("repeating multilingual_notificationsubsection_name:\n%s\n", cJSON_Print(jsonmultilingual_notificationsubsection_name_2));
}

int main() {
  test_multilingual_notificationsubsection_name(1);
  test_multilingual_notificationsubsection_name(0);

  printf("Hello world \n");
  return 0;
}

#endif // multilingual_notificationsubsection_name_MAIN
#endif // multilingual_notificationsubsection_name_TEST
