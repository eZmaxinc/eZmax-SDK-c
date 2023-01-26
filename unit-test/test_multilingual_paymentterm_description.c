#ifndef multilingual_paymentterm_description_TEST
#define multilingual_paymentterm_description_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multilingual_paymentterm_description_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multilingual_paymentterm_description.h"
multilingual_paymentterm_description_t* instantiate_multilingual_paymentterm_description(int include_optional);



multilingual_paymentterm_description_t* instantiate_multilingual_paymentterm_description(int include_optional) {
  multilingual_paymentterm_description_t* multilingual_paymentterm_description = NULL;
  if (include_optional) {
    multilingual_paymentterm_description = multilingual_paymentterm_description_create(
      "Net 30 jours",
      "Net 30 days"
    );
  } else {
    multilingual_paymentterm_description = multilingual_paymentterm_description_create(
      "Net 30 jours",
      "Net 30 days"
    );
  }

  return multilingual_paymentterm_description;
}


#ifdef multilingual_paymentterm_description_MAIN

void test_multilingual_paymentterm_description(int include_optional) {
    multilingual_paymentterm_description_t* multilingual_paymentterm_description_1 = instantiate_multilingual_paymentterm_description(include_optional);

	cJSON* jsonmultilingual_paymentterm_description_1 = multilingual_paymentterm_description_convertToJSON(multilingual_paymentterm_description_1);
	printf("multilingual_paymentterm_description :\n%s\n", cJSON_Print(jsonmultilingual_paymentterm_description_1));
	multilingual_paymentterm_description_t* multilingual_paymentterm_description_2 = multilingual_paymentterm_description_parseFromJSON(jsonmultilingual_paymentterm_description_1);
	cJSON* jsonmultilingual_paymentterm_description_2 = multilingual_paymentterm_description_convertToJSON(multilingual_paymentterm_description_2);
	printf("repeating multilingual_paymentterm_description:\n%s\n", cJSON_Print(jsonmultilingual_paymentterm_description_2));
}

int main() {
  test_multilingual_paymentterm_description(1);
  test_multilingual_paymentterm_description(0);

  printf("Hello world \n");
  return 0;
}

#endif // multilingual_paymentterm_description_MAIN
#endif // multilingual_paymentterm_description_TEST
