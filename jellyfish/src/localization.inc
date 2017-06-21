const char* localization[][2] = {
	{"TRACE", "trace"},
	{"INFO", "info"},
	{"WARNING", "warning"},
	{"ERROR", "error"},
	{"DebugLog", "{message}"},
	{"ReferencedSymbol", "{file} {where} : {type} {identifier}"},
	{"MSVCOutput", "{file} {where}: {subsystem} {type} : {message}\n"},
	{"DiagnosticOutput", "[{type}] {subsystem} : {file} {where|} : {message}\n"},

	{"LocalizationError.ParseError", "Parse error for localization string {string_id} around {related_string?{related_string}|end of line}"},
	{"Project.Unavailable", "Can't open project file {project}"},
	{"Project.NotModified", "Project {project} is not modified since last compilation"},
	{"Project.InvalidSourcePath", "Source path {short_path} doesn't refer to a valid source location ({full_path})"},
	 
	{"ProjectSettings.UnterminatedString", "Non-terminated string literal"},
	{"ProjectSettings.InvalidEscapeSequence", "Invalid escape sequence {related_text}"},
	{"ProjectSettings.MalformedInputString", "Invalid input string format around {related_text|end of line}"},
	{"ProjectSettings.UndefinedCommand", "Undefined command {related_text}"},
	{"ProjectSettings.NoSourceGiven", "No source file given for source command"},
	{"ProjectSettings.MultipleIntermediatePaths", "Multiple intermediate paths"},
	{"ProjectSettings.IntermediatePathNotGiven", "Intermediate path is not given for intermediate command"},
	{"ProjectSettings.MultipleMainFunctions", "Multiple main functions"},
	{"ProjectSettings.MainFunctionNotGiven", "No main function given for main command"},
	{"ProjectSettings.ArchiveTargetNotGiven", "Archive target is not specified"},
	{"ProjectSettings.ArchiveSourceNotGiven", "No source files for archive"},
	{"ProjectSettings.ExtraCharactersAfterQualID", "Extra characters after qualified id: {related_text}"},
	{"ProjectSettings.MainMustBeQualified", "Main function must be fully qualified, got just {related_text}"},
	
	{"LexerError.InvalidSequence", "Invalid sequence encountered: {related_text}"},
	
	{"ParserError.UnexpectedToken", "Unexpected {token}. Expected: {expected@, }"},
	{"ParserError.MisplacedToken", "Remove {token}"},
	{"ParserError.SwapTokens", "Swap {token} and {second_token}"},
	{"ParserError.ReplaceToken", "Replace {token} with {second_token}"},
	{"ParserError.MissingToken", "Insert {second_token} before {token}"},
	
	{"Token.Identifier", "identifier"},
	{"Token.KImport", "'import'"},
	{"Token.KFunction", "'function'"},

	{"Token.OPeriod", "'.'"},
	{"Token.OLParen", "'('"},
	{"Token.ORParen", "')'"},

	{"Token.EndOfFile", "end of file"},
	
	{"Module.FileNotAccessible", "File is not accessible"},
	{"Module.NotFound", "Module not found"},

	{"CompilerError.NamespaceAlreadyContainsModule", "{namespace?Namespace {namespace}|Global namespace} already contains module {module}"},
	{"CompilerError.DuplicateEnumConstructor", "Enum constructor name {name} already used at {previous}"},
	{"CompilerError.DuplicateStructField", "Struct field name {name} already used at {previous}"},
	{"CompilerError.DuplicateClassConstructor", "Class constructor name {name} already used at {previous}"},
	{"CompilerError.InterfaceMethodDuplicateName", "Interface method name {name} already used. Conflicting definitions:\n\t{previous}\n\t{duplicate}"},
	{"CompilerError.InvalidTypeParamCount", "Type parameters count mismatch. Expected {expected}, got {actual}"},
	{"CompilerError.InvalidTypeInstance", "Name {name} doesn't refer a template type"},
	{"CompilerError.MalformedType", "Type name is too wrong to be valid"},
	{"CompilerError.NoSuchNamespace", "Name {name} doesn't refer a namespace (import something as {name})"},
	{"CompilerError.DuplicateTopLevelName", "Name {name} already used at {previous}"},
	
	{"CompilerError.UnresolvedName", "Name {name} is not resolved to something suitable to the context. {candidate?\nCandidates are:\n\t{candidate@\n\t}|}"},
	{"CompilerError.AmbigiousName", "Name {name} is ambigious. Could be{candidate?:\n\t{candidate@\n\t}| nothing}"},
	{"CompilerError.CyclicDependence", "Compiling {name} causes loop in the inheritance chain"},
	
	{"CompilerError.MethodOverride", "Method {name} overrides\n\t{previous}"},
	{"CompilerError.FieldOverride", "Field {name} overrides\n\t{previous}"},
	{"CompilerError.NoOverrideMark", "Method {name} should be 'override', because it's overrides\n\t{previous}"},
	{"CompilerError.ExtraOverrideMark", "Method {name} is marked 'override', but doesn't override anything"},
	
	{"CompilerError.UnreachableCode", "Code is unreachable"},
	{"CompilerError.UnimplemntedStmt", "Statement not implemented"},
	{"CompilerError.UnimplemntedExpr", "Expression not implemented"},
	{"CompilerError.UnimplemntedCoercion", "Type coercion not implemented"},
	
	{"CompilerError.NakedExprWithValueType", "Naked expression doesn't have a 'unit' type. {type?Actual type: {type}|}"},
	{"CompilerError.UnresolvedIdentifier", "Name {name} is unresolved"},
	{"CompilerError.NoReturnFromFunctionReturningNonUnit", "Function returning {type?{type}|non-unit type} doesn't have return statement on every path"},
	{"CompilerError.AssignLHSAndRHSCountMismatch", "Expression count on the left and on the right are not the same ({lhs} vs {rhs})"},
	{"CompilerError.NotAReferencableObject", "Expression is not a referencable object"},
	{"CompilerError.TypeInferenceFailedForStorageType", "Type inference can't find storage type"},
	{"CompilerError.NotClassField", "Class doesn't contain field named {name}"},
	{"CompilerError.FieldNotInitialized", "Class field is left uninitialized:\n{field}"},
	{"CompilerError.AlreadyConstructed", "Object already constructed. Extra constructor name specified."},
	{"CompilerError.TooDeepConstructor", "Too deep constructor string. Object of class already constructed:\n{class}"},
	{"CompilerError.ConstructedClassMismatch", "Constructor base class and constructed object base are not the same:\n{class|<empty>}\n{base|<empty>}"},
	{"CompilerError.IncompatibleOverride", "Incompatible override for method:\n{base}"},
	
	{"CompilerError.ReferenceIsNotWriteable", "Expression is not a writeable reference"},
	{"CompilerError.ParameterIsNotWriteable", "Function parameter is not writeable"},
	{"CompilerError.NoSuchField", "Object {type?of type {type}|} has no such field {name}"},
	{"CompilerError.NoClassMember", "There is no {name} in {reference}"},
	{"CompilerError.NoCoercion", "No coercion from {from} to {to}"},
	{"CompilerError.NoTypeForTyVar", "No type infered for this context"},
	{"CompilerError.NotUnification", "Unable to unify types {left?{right?{left} and {right}|}|}"},
	{"CompilerError.ArgumentsCountMismatch", "Arguments count mismatch: expected {expected}, got {actual}"},
	{"CompilerError.NoOperator", "No {operator} for type {type}"},
	{"CompilerError.NoArith", "No arith operator for type {type}"},
	{"CompilerError.NoComparison", "No comparison for types {lhs} and {rhs}"},
	{"CompilerError.EnumConstructorAsValue", "Constructor {name} has params"},
	{"CompilerError.NoSuchEnumConstructor", "No such enum constructor {name}"},
	{"CompilerError.NoInterfaceMethodImplementation", "Interface method is not implemented:\n{method}"},

	{"CompilerError.InvalidMainSignature", "Main function has invalid signature"},
	{"CompilerError.NoMainFunction", "Main function not found"},
	{"CompilerError.NoArrayMember", "Array object has no property {name}"},
	{"CompilerError.NoBytesMember", "Bytes object has no property {name}"},
	
	
	{"CompilerError.UnreachableMatchBranch", "Match branch is unreachable"},
	{"CompilerError.NotTemplateInstance", "Taking instance of non-template object"},
	{"CompilerError.TemplateArgumentCountMismatch", "Template arguments count mismatch. Expected {expected}, got {actual}."},
	{"CompilerError.TemplateTypeNotNumeric", "Template argument must be numeric. Instead got {type}"},
	{"CompilerError.TemplateTypeNotReal", "Template argument must be real number. Instead got {type}"},
			
	{"CompilerError.FailedToInferTemplateArgument", "Template argument {index} could not be infered from the context"},
			
	{"InternalError", "Internal error{message?: {message}|}"},

	{"LLVMError.TargetMachineCreationFailed", "Target machine creation failed"},
	{"LLVMError.TargetDoesntSupportFileType", "Target doesn't support file type"},
	{"LLVMJIT.CantCreateProcess", "Can't create target process"},

	{"CompilerError.NoRealConstant", "Value {value} is not a real constant"},
	{"CompilerError.NotIntConstant", "Value {value} is not an integer constant"},
	{"CompilerError.NotATypeName", "Name {name} {reference?refers\n{reference}|doesn't refer a type name.}"},
	{"CompilerError.MalformedConstructorName", "Name doesn't refer to class constructor"},
	{"CompilerError.ClassNotHaveDefaultConstructor", "Class\n{class}\ndoesn't have a default constructor (unnamed, or with name {name})"},
	{"CompilerError.ConstructorBaseIsNotBaseClass", "Constructor base\n{class}\nis not a base class"},
	{"CompilerError.ConstructorBaseIsNotClass", "Constructor base doesn't refer to class:\n{reference}"},
	{"CompilerError.NotFullConstructor", "Constructor doesn't construct complete object, because last constructor requires base class as argument:\n{class}"},
	{"CompilerError.ConstructStmtInNonConstructor", "The 'construct' statement not in a constructor"},

		
	{"Reference.Enum", "enum"},
	{"Reference.EnumConstructor", "enum constructor"},
	{"Reference.Class", "class"},
	{"Reference.Interface", "interface"},
	{"Reference.InterfaceMethod", "interface method"},
	{"Reference.Struct", "struct"},
	{"Reference.GlobalFunction", "global function"},
	{"Reference.GlobalVariable", "global variable"},
	{"Reference.ClassField", "class field"},
	{"Reference.ClassMethod", "class method"},
	{"Reference.ClassConstructor", "class constructor"},

	//Debug stuff
	{"BuildingLayout", "Building layout for {name}"},
	{"NumOfInterfaces", "Interface {name} implements {count} interfaces"},
	
};