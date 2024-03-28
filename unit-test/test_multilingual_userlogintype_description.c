#ifndef multilingual_userlogintype_description_TEST
#define multilingual_userlogintype_description_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multilingual_userlogintype_description_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multilingual_userlogintype_description.h"
multilingual_userlogintype_description_t* instantiate_multilingual_userlogintype_description(int include_optional);



multilingual_userlogintype_description_t* instantiate_multilingual_userlogintype_description(int include_optional) {
  multilingual_userlogintype_description_t* multilingual_userlogintype_description = NULL;
  if (include_optional) {
    multilingual_userlogintype_description = multilingual_userlogintype_description_create(
      "Courriel et téléphone ou SMS",
      "Email and phone or SMS"
    );
  } else {
    multilingual_userlogintype_description = multilingual_userlogintype_description_create(
      "Courriel et téléphone ou SMS",
      "Email and phone or SMS"
    );
  }

  return multilingual_userlogintype_description;
}


#ifdef multilingual_userlogintype_description_MAIN

void test_multilingual_userlogintype_description(int include_optional) {
    multilingual_userlogintype_description_t* multilingual_userlogintype_description_1 = instantiate_multilingual_userlogintype_description(include_optional);

	cJSON* jsonmultilingual_userlogintype_description_1 = multilingual_userlogintype_description_convertToJSON(multilingual_userlogintype_description_1);
	printf("multilingual_userlogintype_description :\n%s\n", cJSON_Print(jsonmultilingual_userlogintype_description_1));
	multilingual_userlogintype_description_t* multilingual_userlogintype_description_2 = multilingual_userlogintype_description_parseFromJSON(jsonmultilingual_userlogintype_description_1);
	cJSON* jsonmultilingual_userlogintype_description_2 = multilingual_userlogintype_description_convertToJSON(multilingual_userlogintype_description_2);
	printf("repeating multilingual_userlogintype_description:\n%s\n", cJSON_Print(jsonmultilingual_userlogintype_description_2));
}

int main() {
  test_multilingual_userlogintype_description(1);
  test_multilingual_userlogintype_description(0);

  printf("Hello world \n");
  return 0;
}

#endif // multilingual_userlogintype_description_MAIN
#endif // multilingual_userlogintype_description_TEST
