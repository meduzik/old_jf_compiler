/*** Generated by LEXX. Do not edit ***/

void report_int_kwd();
void report_id(const unsigned char* data, unsigned int size);
void report_in_math();



typedef unsigned char lexx_byte;
typedef size_t lexx_size;
#define lexem_length (data - lexem_start)
#define LEXX_UNPUT(n) (data -= n)
#define LEXX_GOTO(state) goto state
#if !defined(LEXX_CONSUME_UNEXPECTED)
#define LEXX_CONSUME_UNEXPECTED
#endif
#if !defined(LEXX_USERPARAM)
#define LEXX_USERPARAM
#endif

void lexx_run(LEXX_USERPARAM const lexx_byte* data, lexx_size size){
	const lexx_byte* data_end = data + size;
	const lexx_byte* lexem_start = data;
	goto INITIAL;
	INITIAL:
	lexem_start = data;
	goto INITIAL_6;
	INITIAL_1:
		switch(*data){
		case 0:{
			if ( data == data_end ){
					report_id(lexem_start, lexem_length);
					

				goto INITIAL;
			}else{
					report_id(lexem_start, lexem_length);
					

				goto INITIAL;
			}
		}break;
		case 48:case 49:case 50:case 51:case 52:case 53:case 54:case 55:case 56:case 57:case 65:case 66:case 67:case 68:case 69:case 70:case 71:case 72:case 73:case 74:case 75:case 76:case 77:case 78:case 79:case 80:case 81:case 82:case 83:case 84:case 85:case 86:case 87:case 88:case 89:case 90:case 95:case 97:case 98:case 99:case 100:case 101:case 102:case 103:case 104:case 105:case 106:case 107:case 108:case 109:case 111:case 112:case 113:case 114:case 115:case 116:case 117:case 118:case 119:case 120:case 121:case 122:{
		data++;
		goto INITIAL_4;
		}break;
		case 110:{
		data++;
		goto INITIAL_2;
		}break;
		case 39:{
		data++;
		goto INITIAL_7;
		}break;
		default:{
				report_id(lexem_start, lexem_length);
				

			goto INITIAL;
		}break;
		}
	INITIAL_2:
		switch(*data){
		case 0:{
			if ( data == data_end ){
					report_id(lexem_start, lexem_length);
					

				goto INITIAL;
			}else{
					report_id(lexem_start, lexem_length);
					

				goto INITIAL;
			}
		}break;
		case 48:case 49:case 50:case 51:case 52:case 53:case 54:case 55:case 56:case 57:case 65:case 66:case 67:case 68:case 69:case 70:case 71:case 72:case 73:case 74:case 75:case 76:case 77:case 78:case 79:case 80:case 81:case 82:case 83:case 84:case 85:case 86:case 87:case 88:case 89:case 90:case 95:case 97:case 98:case 99:case 100:case 101:case 102:case 103:case 104:case 105:case 106:case 107:case 108:case 109:case 110:case 111:case 112:case 113:case 114:case 115:case 117:case 118:case 119:case 120:case 121:case 122:{
		data++;
		goto INITIAL_4;
		}break;
		case 116:{
		data++;
		goto INITIAL_3;
		}break;
		default:{
				report_id(lexem_start, lexem_length);
				

			goto INITIAL;
		}break;
		}
	INITIAL_3:
		switch(*data){
		case 0:{
			if ( data == data_end ){
					report_int_kwd();
					LEXX_GOTO(MATH);

				goto INITIAL;
			}else{
					report_int_kwd();
					LEXX_GOTO(MATH);

				goto INITIAL;
			}
		}break;
		case 48:case 49:case 50:case 51:case 52:case 53:case 54:case 55:case 56:case 57:case 65:case 66:case 67:case 68:case 69:case 70:case 71:case 72:case 73:case 74:case 75:case 76:case 77:case 78:case 79:case 80:case 81:case 82:case 83:case 84:case 85:case 86:case 87:case 88:case 89:case 90:case 95:case 97:case 98:case 99:case 100:case 101:case 102:case 103:case 104:case 105:case 106:case 107:case 108:case 109:case 110:case 111:case 112:case 113:case 114:case 115:case 116:case 117:case 118:case 119:case 120:case 121:case 122:{
		data++;
		goto INITIAL_4;
		}break;
		default:{
				report_int_kwd();
				LEXX_GOTO(MATH);

			goto INITIAL;
		}break;
		}
	INITIAL_4:
		switch(*data){
		case 0:{
			if ( data == data_end ){
					report_id(lexem_start, lexem_length);
					

				goto INITIAL;
			}else{
					report_id(lexem_start, lexem_length);
					

				goto INITIAL;
			}
		}break;
		case 48:case 49:case 50:case 51:case 52:case 53:case 54:case 55:case 56:case 57:case 65:case 66:case 67:case 68:case 69:case 70:case 71:case 72:case 73:case 74:case 75:case 76:case 77:case 78:case 79:case 80:case 81:case 82:case 83:case 84:case 85:case 86:case 87:case 88:case 89:case 90:case 95:case 97:case 98:case 99:case 100:case 101:case 102:case 103:case 104:case 105:case 106:case 107:case 108:case 109:case 110:case 111:case 112:case 113:case 114:case 115:case 116:case 117:case 118:case 119:case 120:case 121:case 122:{
		data++;
		goto INITIAL_4;
		}break;
		default:{
				report_id(lexem_start, lexem_length);
				

			goto INITIAL;
		}break;
		}
	INITIAL_5:
		switch(*data){
		case 0:{
			if ( data == data_end ){
					report_id(lexem_start, lexem_length);
					

				goto INITIAL;
			}else{
					report_id(lexem_start, lexem_length);
					

				goto INITIAL;
			}
		}break;
		case 48:case 49:case 50:case 51:case 52:case 53:case 54:case 55:case 56:case 57:case 65:case 66:case 67:case 68:case 69:case 70:case 71:case 72:case 73:case 74:case 75:case 76:case 77:case 78:case 79:case 80:case 81:case 82:case 83:case 84:case 85:case 86:case 87:case 88:case 89:case 90:case 95:case 97:case 98:case 99:case 100:case 101:case 102:case 103:case 104:case 105:case 106:case 107:case 108:case 109:case 110:case 111:case 112:case 113:case 114:case 115:case 116:case 117:case 118:case 119:case 120:case 121:case 122:{
		data++;
		goto INITIAL_4;
		}break;
		case 39:{
		data++;
		goto INITIAL_7;
		}break;
		default:{
				report_id(lexem_start, lexem_length);
				

			goto INITIAL;
		}break;
		}
	INITIAL_6:
		switch(*data){
		case 0:{
			if ( data == data_end ){
				return;
			}else{
				data++;
				LEXX_CONSUME_UNEXPECTED;
				goto INITIAL;
			}
		}break;
		case 65:case 66:case 67:case 68:case 69:case 70:case 71:case 72:case 73:case 74:case 75:case 76:case 77:case 78:case 79:case 80:case 81:case 82:case 83:case 84:case 85:case 86:case 87:case 88:case 89:case 90:{
		data++;
		goto INITIAL_4;
		}break;
		case 97:case 98:case 99:case 100:case 101:case 102:case 103:case 104:case 106:case 107:case 108:case 109:case 110:case 111:case 112:case 113:case 114:case 115:case 116:case 117:case 118:case 119:case 120:case 121:case 122:{
		data++;
		goto INITIAL_5;
		}break;
		case 105:{
		data++;
		goto INITIAL_1;
		}break;
		default:{
			data++;
			LEXX_CONSUME_UNEXPECTED;
			goto INITIAL;
		}break;
		}
	INITIAL_7:
		switch(*data){
		case 0:{
			if ( data == data_end ){
					report_id(lexem_start, lexem_length);
					

				goto INITIAL;
			}else{
					report_id(lexem_start, lexem_length);
					

				goto INITIAL;
			}
		}break;
		default:{
				report_id(lexem_start, lexem_length);
				

			goto INITIAL;
		}break;
		}
	MATH:
	lexem_start = data;
	goto MATH_6;
	MATH_1:
		switch(*data){
		case 0:{
			if ( data == data_end ){
				LEXX_CONSUME_UNEXPECTED;
				goto MATH;
			}else{
				LEXX_CONSUME_UNEXPECTED;
				goto MATH;
			}
		}break;
		case 56:{
		data++;
		goto MATH_2;
		}break;
		case 48:case 49:case 50:case 51:case 52:case 53:case 54:case 55:case 57:{
		data++;
		goto MATH_8;
		}break;
		default:{
			LEXX_CONSUME_UNEXPECTED;
			goto MATH;
		}break;
		}
	MATH_2:
		switch(*data){
		case 0:{
			if ( data == data_end ){
					report_id(lexem_start, lexem_length);
					

				goto MATH;
			}else{
					report_id(lexem_start, lexem_length);
					

				goto MATH;
			}
		}break;
		default:{
				report_id(lexem_start, lexem_length);
				

			goto MATH;
		}break;
		}
	MATH_3:
		switch(*data){
		case 0:{
			if ( data == data_end ){
				LEXX_CONSUME_UNEXPECTED;
				goto MATH;
			}else{
				LEXX_CONSUME_UNEXPECTED;
				goto MATH;
			}
		}break;
		case 48:case 49:case 50:case 51:case 52:case 53:case 54:case 55:case 56:case 57:{
		data++;
		goto MATH_8;
		}break;
		case 110:{
		data++;
		goto MATH_4;
		}break;
		default:{
			LEXX_CONSUME_UNEXPECTED;
			goto MATH;
		}break;
		}
	MATH_4:
		switch(*data){
		case 0:{
			if ( data == data_end ){
				LEXX_CONSUME_UNEXPECTED;
				goto MATH;
			}else{
				LEXX_CONSUME_UNEXPECTED;
				goto MATH;
			}
		}break;
		case 116:{
		data++;
		goto MATH_5;
		}break;
		default:{
			LEXX_CONSUME_UNEXPECTED;
			goto MATH;
		}break;
		}
	MATH_5:
		switch(*data){
		case 0:{
			if ( data == data_end ){
					report_int_kwd();
					LEXX_GOTO(INITIAL);
					

				goto MATH;
			}else{
					report_int_kwd();
					LEXX_GOTO(INITIAL);
					

				goto MATH;
			}
		}break;
		default:{
				report_int_kwd();
				LEXX_GOTO(INITIAL);
				

			goto MATH;
		}break;
		}
	MATH_6:
		switch(*data){
		case 0:{
			if ( data == data_end ){
					report_in_math();
					LEXX_GOTO(INITIAL);
				return;
			}else{
				data++;
				LEXX_CONSUME_UNEXPECTED;
				goto MATH;
			}
		}break;
		case 97:case 98:case 99:case 100:case 102:case 103:case 104:case 106:case 107:case 108:case 109:case 110:case 111:case 112:case 113:case 114:case 115:case 116:case 117:case 118:case 119:case 120:case 121:case 122:{
		data++;
		goto MATH_7;
		}break;
		case 101:{
		data++;
		goto MATH_1;
		}break;
		case 105:{
		data++;
		goto MATH_3;
		}break;
		default:{
			data++;
			LEXX_CONSUME_UNEXPECTED;
			goto MATH;
		}break;
		}
	MATH_7:
		switch(*data){
		case 0:{
			if ( data == data_end ){
				LEXX_CONSUME_UNEXPECTED;
				goto MATH;
			}else{
				LEXX_CONSUME_UNEXPECTED;
				goto MATH;
			}
		}break;
		case 48:case 49:case 50:case 51:case 52:case 53:case 54:case 55:case 56:case 57:{
		data++;
		goto MATH_8;
		}break;
		default:{
			LEXX_CONSUME_UNEXPECTED;
			goto MATH;
		}break;
		}
	MATH_8:
		switch(*data){
		case 0:{
			if ( data == data_end ){
					report_id(lexem_start, lexem_length);
					

				goto MATH;
			}else{
					report_id(lexem_start, lexem_length);
					

				goto MATH;
			}
		}break;
		default:{
				report_id(lexem_start, lexem_length);
				

			goto MATH;
		}break;
		}
}
