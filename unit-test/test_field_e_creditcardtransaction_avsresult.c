#ifndef field_e_creditcardtransaction_avsresult_TEST
#define field_e_creditcardtransaction_avsresult_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_creditcardtransaction_avsresult_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_creditcardtransaction_avsresult.h"
field_e_creditcardtransaction_avsresult_t* instantiate_field_e_creditcardtransaction_avsresult(int include_optional);



field_e_creditcardtransaction_avsresult_t* instantiate_field_e_creditcardtransaction_avsresult(int include_optional) {
  field_e_creditcardtransaction_avsresult_t* field_e_creditcardtransaction_avsresult = NULL;
  if (include_optional) {
    field_e_creditcardtransaction_avsresult = field_e_creditcardtransaction_avsresult_create(
    );
  } else {
    field_e_creditcardtransaction_avsresult = field_e_creditcardtransaction_avsresult_create(
    );
  }

  return field_e_creditcardtransaction_avsresult;
}


#ifdef field_e_creditcardtransaction_avsresult_MAIN

void test_field_e_creditcardtransaction_avsresult(int include_optional) {
    field_e_creditcardtransaction_avsresult_t* field_e_creditcardtransaction_avsresult_1 = instantiate_field_e_creditcardtransaction_avsresult(include_optional);

	cJSON* jsonfield_e_creditcardtransaction_avsresult_1 = field_e_creditcardtransaction_avsresult_convertToJSON(field_e_creditcardtransaction_avsresult_1);
	printf("field_e_creditcardtransaction_avsresult :\n%s\n", cJSON_Print(jsonfield_e_creditcardtransaction_avsresult_1));
	field_e_creditcardtransaction_avsresult_t* field_e_creditcardtransaction_avsresult_2 = field_e_creditcardtransaction_avsresult_parseFromJSON(jsonfield_e_creditcardtransaction_avsresult_1);
	cJSON* jsonfield_e_creditcardtransaction_avsresult_2 = field_e_creditcardtransaction_avsresult_convertToJSON(field_e_creditcardtransaction_avsresult_2);
	printf("repeating field_e_creditcardtransaction_avsresult:\n%s\n", cJSON_Print(jsonfield_e_creditcardtransaction_avsresult_2));
}

int main() {
  test_field_e_creditcardtransaction_avsresult(1);
  test_field_e_creditcardtransaction_avsresult(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_creditcardtransaction_avsresult_MAIN
#endif // field_e_creditcardtransaction_avsresult_TEST
