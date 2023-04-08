#ifndef multilingual_usergroup_name_TEST
#define multilingual_usergroup_name_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multilingual_usergroup_name_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multilingual_usergroup_name.h"
multilingual_usergroup_name_t* instantiate_multilingual_usergroup_name(int include_optional);



multilingual_usergroup_name_t* instantiate_multilingual_usergroup_name(int include_optional) {
  multilingual_usergroup_name_t* multilingual_usergroup_name = NULL;
  if (include_optional) {
    multilingual_usergroup_name = multilingual_usergroup_name_create(
      "Direction",
      "Management"
    );
  } else {
    multilingual_usergroup_name = multilingual_usergroup_name_create(
      "Direction",
      "Management"
    );
  }

  return multilingual_usergroup_name;
}


#ifdef multilingual_usergroup_name_MAIN

void test_multilingual_usergroup_name(int include_optional) {
    multilingual_usergroup_name_t* multilingual_usergroup_name_1 = instantiate_multilingual_usergroup_name(include_optional);

	cJSON* jsonmultilingual_usergroup_name_1 = multilingual_usergroup_name_convertToJSON(multilingual_usergroup_name_1);
	printf("multilingual_usergroup_name :\n%s\n", cJSON_Print(jsonmultilingual_usergroup_name_1));
	multilingual_usergroup_name_t* multilingual_usergroup_name_2 = multilingual_usergroup_name_parseFromJSON(jsonmultilingual_usergroup_name_1);
	cJSON* jsonmultilingual_usergroup_name_2 = multilingual_usergroup_name_convertToJSON(multilingual_usergroup_name_2);
	printf("repeating multilingual_usergroup_name:\n%s\n", cJSON_Print(jsonmultilingual_usergroup_name_2));
}

int main() {
  test_multilingual_usergroup_name(1);
  test_multilingual_usergroup_name(0);

  printf("Hello world \n");
  return 0;
}

#endif // multilingual_usergroup_name_MAIN
#endif // multilingual_usergroup_name_TEST
