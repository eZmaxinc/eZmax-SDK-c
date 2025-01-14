#ifndef field_e_customer_marketingcorrespondence_TEST
#define field_e_customer_marketingcorrespondence_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_customer_marketingcorrespondence_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_customer_marketingcorrespondence.h"
field_e_customer_marketingcorrespondence_t* instantiate_field_e_customer_marketingcorrespondence(int include_optional);



field_e_customer_marketingcorrespondence_t* instantiate_field_e_customer_marketingcorrespondence(int include_optional) {
  field_e_customer_marketingcorrespondence_t* field_e_customer_marketingcorrespondence = NULL;
  if (include_optional) {
    field_e_customer_marketingcorrespondence = field_e_customer_marketingcorrespondence_create(
    );
  } else {
    field_e_customer_marketingcorrespondence = field_e_customer_marketingcorrespondence_create(
    );
  }

  return field_e_customer_marketingcorrespondence;
}


#ifdef field_e_customer_marketingcorrespondence_MAIN

void test_field_e_customer_marketingcorrespondence(int include_optional) {
    field_e_customer_marketingcorrespondence_t* field_e_customer_marketingcorrespondence_1 = instantiate_field_e_customer_marketingcorrespondence(include_optional);

	cJSON* jsonfield_e_customer_marketingcorrespondence_1 = field_e_customer_marketingcorrespondence_convertToJSON(field_e_customer_marketingcorrespondence_1);
	printf("field_e_customer_marketingcorrespondence :\n%s\n", cJSON_Print(jsonfield_e_customer_marketingcorrespondence_1));
	field_e_customer_marketingcorrespondence_t* field_e_customer_marketingcorrespondence_2 = field_e_customer_marketingcorrespondence_parseFromJSON(jsonfield_e_customer_marketingcorrespondence_1);
	cJSON* jsonfield_e_customer_marketingcorrespondence_2 = field_e_customer_marketingcorrespondence_convertToJSON(field_e_customer_marketingcorrespondence_2);
	printf("repeating field_e_customer_marketingcorrespondence:\n%s\n", cJSON_Print(jsonfield_e_customer_marketingcorrespondence_2));
}

int main() {
  test_field_e_customer_marketingcorrespondence(1);
  test_field_e_customer_marketingcorrespondence(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_customer_marketingcorrespondence_MAIN
#endif // field_e_customer_marketingcorrespondence_TEST
