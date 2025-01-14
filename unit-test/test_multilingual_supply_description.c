#ifndef multilingual_supply_description_TEST
#define multilingual_supply_description_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multilingual_supply_description_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multilingual_supply_description.h"
multilingual_supply_description_t* instantiate_multilingual_supply_description(int include_optional);



multilingual_supply_description_t* instantiate_multilingual_supply_description(int include_optional) {
  multilingual_supply_description_t* multilingual_supply_description = NULL;
  if (include_optional) {
    multilingual_supply_description = multilingual_supply_description_create(
      "Papier lettre paquet",
      "Letter paper package"
    );
  } else {
    multilingual_supply_description = multilingual_supply_description_create(
      "Papier lettre paquet",
      "Letter paper package"
    );
  }

  return multilingual_supply_description;
}


#ifdef multilingual_supply_description_MAIN

void test_multilingual_supply_description(int include_optional) {
    multilingual_supply_description_t* multilingual_supply_description_1 = instantiate_multilingual_supply_description(include_optional);

	cJSON* jsonmultilingual_supply_description_1 = multilingual_supply_description_convertToJSON(multilingual_supply_description_1);
	printf("multilingual_supply_description :\n%s\n", cJSON_Print(jsonmultilingual_supply_description_1));
	multilingual_supply_description_t* multilingual_supply_description_2 = multilingual_supply_description_parseFromJSON(jsonmultilingual_supply_description_1);
	cJSON* jsonmultilingual_supply_description_2 = multilingual_supply_description_convertToJSON(multilingual_supply_description_2);
	printf("repeating multilingual_supply_description:\n%s\n", cJSON_Print(jsonmultilingual_supply_description_2));
}

int main() {
  test_multilingual_supply_description(1);
  test_multilingual_supply_description(0);

  printf("Hello world \n");
  return 0;
}

#endif // multilingual_supply_description_MAIN
#endif // multilingual_supply_description_TEST
