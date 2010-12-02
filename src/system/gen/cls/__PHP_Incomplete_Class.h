/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls___PHP_Incomplete_Class_h914d7894__
#define __GENERATED_cls___PHP_Incomplete_Class_h914d7894__


namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/stdclass.php line 8 */
class c___PHP_Incomplete_Class : public ExtObjectData {
  public:

  // Properties

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON(__PHP_Incomplete_Class, __PHP_Incomplete_Class)
  DECLARE_INVOKE_EX(__PHP_Incomplete_Class, __PHP_Incomplete_Class, ObjectData)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT___PHP_Incomplete_Class 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET___PHP_Incomplete_Class 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL___PHP_Incomplete_Class 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT___PHP_Incomplete_Class 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_GETARRAY___PHP_Incomplete_Class 1
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY___PHP_Incomplete_Class 1
  #define OMIT_JUMP_TABLE_CLASS_realProp___PHP_Incomplete_Class 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE___PHP_Incomplete_Class 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC___PHP_Incomplete_Class 1

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE___PHP_Incomplete_Class 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
};
extern struct ObjectStaticCallbacks cw___PHP_Incomplete_Class;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls___PHP_Incomplete_Class_h914d7894__
