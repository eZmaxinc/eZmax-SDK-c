#ifndef multilingual_ezsignfoldertype_name_TEST
#define multilingual_ezsignfoldertype_name_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multilingual_ezsignfoldertype_name_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multilingual_ezsignfoldertype_name.h"
multilingual_ezsignfoldertype_name_t* instantiate_multilingual_ezsignfoldertype_name(int include_optional);



multilingual_ezsignfoldertype_name_t* instantiate_multilingual_ezsignfoldertype_name(int include_optional) {
  multilingual_ezsignfoldertype_name_t* multilingual_ezsignfoldertype_name = NULL;
  if (include_optional) {
    multilingual_ezsignfoldertype_name = multilingual_ezsignfoldertype_name_create(
      "Embauche",
      "Recruitment"
    );
  } else {
    multilingual_ezsignfoldertype_name = multilingual_ezsignfoldertype_name_create(
      "Embauche",
      "Recruitment"
    );
  }

  return multilingual_ezsignfoldertype_name;
}


#ifdef multilingual_ezsignfoldertype_name_MAIN

void test_multilingual_ezsignfoldertype_name(int include_optional) {
    multilingual_ezsignfoldertype_name_t* multilingual_ezsignfoldertype_name_1 = instantiate_multilingual_ezsignfoldertype_name(include_optional);

	cJSON* jsonmultilingual_ezsignfoldertype_name_1 = multilingual_ezsignfoldertype_name_convertToJSON(multilingual_ezsignfoldertype_name_1);
	printf("multilingual_ezsignfoldertype_name :\n%s\n", cJSON_Print(jsonmultilingual_ezsignfoldertype_name_1));
	multilingual_ezsignfoldertype_name_t* multilingual_ezsignfoldertype_name_2 = multilingual_ezsignfoldertype_name_parseFromJSON(jsonmultilingual_ezsignfoldertype_name_1);
	cJSON* jsonmultilingual_ezsignfoldertype_name_2 = multilingual_ezsignfoldertype_name_convertToJSON(multilingual_ezsignfoldertype_name_2);
	printf("repeating multilingual_ezsignfoldertype_name:\n%s\n", cJSON_Print(jsonmultilingual_ezsignfoldertype_name_2));
}

int main() {
  test_multilingual_ezsignfoldertype_name(1);
  test_multilingual_ezsignfoldertype_name(0);

  printf("Hello world \n");
  return 0;
}

#endif // multilingual_ezsignfoldertype_name_MAIN
#endif // multilingual_ezsignfoldertype_name_TEST
