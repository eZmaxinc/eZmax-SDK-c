#ifndef creditcarddetail_response_compound_TEST
#define creditcarddetail_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcarddetail_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcarddetail_response_compound.h"
creditcarddetail_response_compound_t* instantiate_creditcarddetail_response_compound(int include_optional);



creditcarddetail_response_compound_t* instantiate_creditcarddetail_response_compound(int include_optional) {
  creditcarddetail_response_compound_t* creditcarddetail_response_compound = NULL;
  if (include_optional) {
    creditcarddetail_response_compound = creditcarddetail_response_compound_create(
      53,
      2,
      4242,
      10,
      2024,
      "2500",
      "Daniel-Johnson Blvd.",
      "H7T 2P6"
    );
  } else {
    creditcarddetail_response_compound = creditcarddetail_response_compound_create(
      53,
      2,
      4242,
      10,
      2024,
      "2500",
      "Daniel-Johnson Blvd.",
      "H7T 2P6"
    );
  }

  return creditcarddetail_response_compound;
}


#ifdef creditcarddetail_response_compound_MAIN

void test_creditcarddetail_response_compound(int include_optional) {
    creditcarddetail_response_compound_t* creditcarddetail_response_compound_1 = instantiate_creditcarddetail_response_compound(include_optional);

	cJSON* jsoncreditcarddetail_response_compound_1 = creditcarddetail_response_compound_convertToJSON(creditcarddetail_response_compound_1);
	printf("creditcarddetail_response_compound :\n%s\n", cJSON_Print(jsoncreditcarddetail_response_compound_1));
	creditcarddetail_response_compound_t* creditcarddetail_response_compound_2 = creditcarddetail_response_compound_parseFromJSON(jsoncreditcarddetail_response_compound_1);
	cJSON* jsoncreditcarddetail_response_compound_2 = creditcarddetail_response_compound_convertToJSON(creditcarddetail_response_compound_2);
	printf("repeating creditcarddetail_response_compound:\n%s\n", cJSON_Print(jsoncreditcarddetail_response_compound_2));
}

int main() {
  test_creditcarddetail_response_compound(1);
  test_creditcarddetail_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcarddetail_response_compound_MAIN
#endif // creditcarddetail_response_compound_TEST
