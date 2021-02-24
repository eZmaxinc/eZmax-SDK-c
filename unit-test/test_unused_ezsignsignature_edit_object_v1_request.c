#ifndef unused_ezsignsignature_edit_object_v1_request_TEST
#define unused_ezsignsignature_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define unused_ezsignsignature_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/unused_ezsignsignature_edit_object_v1_request.h"
unused_ezsignsignature_edit_object_v1_request_t* instantiate_unused_ezsignsignature_edit_object_v1_request(int include_optional);

#include "test_ezsignsignature_request.c"


unused_ezsignsignature_edit_object_v1_request_t* instantiate_unused_ezsignsignature_edit_object_v1_request(int include_optional) {
  unused_ezsignsignature_edit_object_v1_request_t* unused_ezsignsignature_edit_object_v1_request = NULL;
  if (include_optional) {
    unused_ezsignsignature_edit_object_v1_request = unused_ezsignsignature_edit_object_v1_request_create(
      {"fkiEzsigndocumentID":48,"fkiEzsignfoldersignerassociationID":77,"iEzsignpagePagenumber":3,"iEzsignsignatureX":200,"iEzsignsignatureY":300,"iEzsignsignatureStep":1,"eEzsignsignatureType":"Name"}
    );
  } else {
    unused_ezsignsignature_edit_object_v1_request = unused_ezsignsignature_edit_object_v1_request_create(
      {"fkiEzsigndocumentID":48,"fkiEzsignfoldersignerassociationID":77,"iEzsignpagePagenumber":3,"iEzsignsignatureX":200,"iEzsignsignatureY":300,"iEzsignsignatureStep":1,"eEzsignsignatureType":"Name"}
    );
  }

  return unused_ezsignsignature_edit_object_v1_request;
}


#ifdef unused_ezsignsignature_edit_object_v1_request_MAIN

void test_unused_ezsignsignature_edit_object_v1_request(int include_optional) {
    unused_ezsignsignature_edit_object_v1_request_t* unused_ezsignsignature_edit_object_v1_request_1 = instantiate_unused_ezsignsignature_edit_object_v1_request(include_optional);

	cJSON* jsonunused_ezsignsignature_edit_object_v1_request_1 = unused_ezsignsignature_edit_object_v1_request_convertToJSON(unused_ezsignsignature_edit_object_v1_request_1);
	printf("unused_ezsignsignature_edit_object_v1_request :\n%s\n", cJSON_Print(jsonunused_ezsignsignature_edit_object_v1_request_1));
	unused_ezsignsignature_edit_object_v1_request_t* unused_ezsignsignature_edit_object_v1_request_2 = unused_ezsignsignature_edit_object_v1_request_parseFromJSON(jsonunused_ezsignsignature_edit_object_v1_request_1);
	cJSON* jsonunused_ezsignsignature_edit_object_v1_request_2 = unused_ezsignsignature_edit_object_v1_request_convertToJSON(unused_ezsignsignature_edit_object_v1_request_2);
	printf("repeating unused_ezsignsignature_edit_object_v1_request:\n%s\n", cJSON_Print(jsonunused_ezsignsignature_edit_object_v1_request_2));
}

int main() {
  test_unused_ezsignsignature_edit_object_v1_request(1);
  test_unused_ezsignsignature_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // unused_ezsignsignature_edit_object_v1_request_MAIN
#endif // unused_ezsignsignature_edit_object_v1_request_TEST
