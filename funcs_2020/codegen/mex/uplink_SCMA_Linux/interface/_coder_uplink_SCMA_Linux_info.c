/*
 * _coder_uplink_SCMA_Linux_info.c
 *
 * Code generation for function '_coder_uplink_SCMA_Linux_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "uplink_SCMA_Linux.h"
#include "_coder_uplink_SCMA_Linux_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[6] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs", "FullPath", "TimeStamp" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 6, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 9);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("uplink_SCMA_Linux"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(9.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (3.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737813.7585532408));
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.4.0.813654 (R2018a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[26] = {
    "789ced5d4b8fe3581576f7748fba85063c48c3cc8857f7804640a3ceb35e821179575255a9a42aa9670f248ee324aef22b7ea49262412d59217e008bde202124"
    "d0b0a2255864fe03b060d51b16acd8006becd8ae6a9bdc4ebaecba2927e748a51be7d8f7bb3975ee77ae8fefbd26ee148a770882f8a2fe37f8194184ff458ce4",
    "1db32048abbc4b38c5adbf6395df711ddb729fb8e7b8ee8e85f72beb98160595e9abe601c70accb6c63718593f10289eb9aca629f2ac40096a75203184cc2822"
    "d7639a234d8be5982acb335be22b0779563fe073afa82e0f0c95f139dd61e8d38ac6137247b96a2ef7ea0161d9c7901788df7f6f4afbec23ec43baf4cfb23f0e",
    "75449e09b574c35002d554421959941a623f544c56b792a950255d4cd6a2e168b8564dd5b295f564ad584e865a9a402ba3af439aa4dbf1b4363a6f8b15b4fe53"
    "feea775c20daf9f694bfe39eebd8968756f9c8f16d3c61961f59e523abfc5ac26e4f1f8137ad5ddf45b48774e9199eabf1aafeff576a1d8693461e6688dd8efa",
    "35dbe116543b6cb1f13ebb269e5d7f71029ead7f56d83ad45d4a53e41027d214677bd16e341c59a542aa2872866fe9e609716c23c4532a473542a2a484fecf62"
    "861b4db4d7b47ee42e6d79483cb03e5d6cbefbd3bf25f1e199b228785efbdd571078a44bbf5169c637fbdbdb8daaba1f6f7383cde3d2ca46e6aa1de5093893da",
    "41208e71d53f445c3fad1d9f21ea275d7a5ffbf1635ae47951a8d1460c541cbf4742b4775a3fbceb3ab6c58e0f4e3e2c27ccb29498149fa6b5e73711f8a44b4f"
    "8b4ddd12ac3ef890058a7bca2a298de5d482a00f3f1899a53dc7051bff6dd7f1557b4c4d53d41a1ce3df38631789e7d4bf813f197f4f46f60a3db10d16721b6c",
    "141c08acf1e18ffff9fb5f213edc101eaef850ea75d3c956beb75add890fe82c2f4473c75c7e7ee2c3bcdc37d411edf4d7ffa209bf7817759f425a9a264bb58d"
    "72563cff1b8f7829249e537fbd7103c3e91f42868df0f33af1cf5f0b30eebfadbcfe1e028f74e9a38528d55e2d6de458963eafa4f35939de3926e687d7a1ff3a",
    "c5e96f9ff8c6e30f5cc7c4e579a68655f45f2ab3fda0f2780e89e7d47bf103db4678e379e2f3efad038fdf561e9f767cbe4d9f1e14e41cddcaa987313ab2b394"
    "3a2aa6d681c71782c72faabee5e9df47e0912ebd2b2fa3e8a6a2e46c7b66e374af79fa0d249e53ef351f631b6a067998df7ffc13e0f9a0f37c78b71de9a91b6b",
    "a2dcee28951cd54ee50abd39cad3433f1edf7e27df172ff91ef51c605a7bbde33a265ce7d97a5611cc04b26a3cd99f5d3ec6ab7f1490784efd1b8e035a6c9f69"
    "4aa2ee1e2187a56cf7c0e91fbf3bf810f2ed41e7f9f5d8e9a0d26db35cba9a3eddeda6dad5d3bd2cf0fcc2f23c0acfbffc4c8bd5ef613a41cdcf6490784ebd17",
    "5e372d647a02f0f97ce0e1cab3f7ba4c56ead1cadae1594c14cb4a25123b9aa73c7b50e6435cf1f9e3162b2b6a8b75fe8e3aa29dbefadfcb3ab6e7a7066b19e5"
    "ac78fdb947bc0412cfa9f7c6eb4f798cffff17301fe6f6f2f9b4e3f3ca4062f9a5eeee41846d34e385e39d7231324f7998e788eb17b8dfea129e9bbccba4b841",
    "77a8d1d47bc8bb8c2f6d81713a1e3cc8bbf8537f00c7e9e78c2c2ada2cf22fc34fb18dd35b1ac71925e45fc63d5f57244a6e6942c8b012eefccbc51f80d783cf"
    "ebea7294dfcd1cac778e63e2794f2df2b962449d235e87f9314e71e6d1f77d5bb7f40d041ee9d21babb9f460566b8932278a524dec31728b13cfccb55cb35bcf",
    "3abc269e5dfff1043c5b7f4d3f318703afb11c7eff19fef91ff761de4cd0f95fd9ccf6b399f3f3f2463f1a2f46c3e99d64249c9d1ffe7f89b87e5a3b5e20ea27"
    "5dfa9bebd78f5f7f82b52816af9faecf2c4f3fa3799cacd064fa0541853ca0eb7cc8dfe3c183fcbd3ff5bf445c0ff160fcef9dce4f0bbec58349f919fd87f354",
    "7f76f9fedb9d0fb2d64b8d6c843b1f347cf1fe43b81f083affcbddb074c22af124bf5c5e11ca8dc3d8e6be9202fe07fe778a338f8497ff5901f87f12ffb30276"
    "feff13f07ff0f9bf4d1dad946207dbdd9546524d2f51a53813df99a3f5b2b09fcdf8d216a7ffc57ce3f5b71078a4a5a184c1a80cea7ccc1f21f19cfaebef83a7",
    "5b4877008c7cfe193cdf0d3e9f1bfb24b656643e9bee76f92abb21f09176658ef6277b8eb87e71fbad211ff9f65c17f6a344e139f5b01fe59be299b22878b01f"
    "a53ff53f475cbfd87cff74d6fbdc501c579293fa183ea8f3f071ad9bb60d3583f95e67d136e46782ceefabc506df3ec92f377add25a17a10ed96ce592e3d3ffc",
    "0efd787cfb9d7eb7e9dbf8feeb083cd2a577f3bda230b2ba4f716c33c31a2698d5f8deabbf945dc784eb3c5befd95f1c06c3392f67d889d681f783cefbf4127f"
    "943f89a67b67e7f16d352c27b7f6f75772c0fb8bd38f0d5983bc8ef53de475c697b6405e070f1ee475fca91ff87f7cfb9d7ef703df9ec7de47e09196a6c589a2",
    "916009eabadb3412cfa9bfee3c9bd1aa5bc34616a163f483cff73e063e0f3a9faf76574ad52e97593a4d75aa3beb15b59bc9d073349e87feeb14a7bf3d8271bc"
    "f53d8ce3c797b6c0381e0f1e8ce3fda91f78df294e7ffbb66fbcff55041ee9d28f7d1fc9537b743fbbfd16bcdeef9526e0d97aafbcffc4b4d8a5cf60e4fbdfc2",
    "fccbe0f37da3b35c3e1438b55911f9ac26e4638d6c6a638ee6d303df3b05c5f7bf44d437ad9dbe8bc0235d7af7735a49e206951185e534815659512808658ea2"
    "19eb7cbb7d92c7f67d6942fb6c7dcb6a45ad43094dfd46c0c61f7ac4ff7402beadf79cff431a14fb7aabc6174ee0b96ed0e383486d9d34286a3ddd8cad9e2887",
    "51a6782c0de668bf8521e27ae8d74e71fae1f77dcbf34f7ebf89b187a4c20435cf9f47e239f5def6d7b4ad84f3794fe2c127f05ec2c0f3fbd94141c971a7fbb9"
    "684bae70bd93d28670be3347f3358788eb81df9d829aaf7f81a82f6879a0ebf23fe481c6b71ff24078f0200fe44ffd5efb71d9754cb8ceb3f5c19ebff343acfb",
    "e4c03e69b04f9a2d8b8207fba4f953bf573e5f887558890ae469a6c4833c8d5f78a62c0a1ee469fca91ff87c7cfb9dfb581e5ff2f9cf11f54d6baf6f21f04897"
    "defdbcb627b2cda42c53831c47a92a23b0427b74deace6e960db2fcfabdf8c311ce6fdf22efedb803810f43870be918fa5f7a4437ea7516a260f5bf9629f2fcd",
    "d1fccca0c70109d1be69fdee2ea2fd0f5de79b422546c5f0eabde433da5f4792c5a6c29e33bee57370e7e971f98d6d28989f3f5f78b8f8ffb45bd94e4a854689"
    "2d48db7b9ddede6ab8ab425ee7d6f07f1dd13e5ffdeee515df5f20ea9bd65e1f22f048977edcfba68aaca029963ea8bcbf85c473ea3dafcfba3418f6e7f9fb5f",
    "56ff02bc7f4378b878ff845f4a6553839d6386ef716a9cd9cec5d634e07de07d577d3878bfcaf28c9bf76fcb7b0f03150f4686c41d0f12100f6e100fdbbef947"
    "f4566cb95c59df9236569a9962b7271e74e6687f86a0c703ac79a04423312aeb946ff101de97fe7a3c785fba573c5316050fde97ee4ffd418f0b7544fb7cf5bb",
    "e75771c0abdf7d80c0235dfa71e3f232a729f3767fb039a11db6de97fb03c380f8d785c3fdc10de2e18a03f94afef0b0122b1da8eb54e9f4a4b0596c2f9dc17c"
    "fe5b1307507e30addfbd8568bf7d7ff0c1ab5f3e6a24cc0f56f9f2f6c587bac776e07e6e0071c077bc912c0a1ec4017fea0f7a1ca823dae7abdf3da27d5b0730",
    "695f665611288198ddf3e0dbbedfd3685d976123ec7c7ef102e6ffdc5e3e7f0f8147baf4dda456e2e383c37878578e6ae908b3d6e3b789f9e173e8bf4eb9a9fd"
    "39615f66149e530ffb32bf299e298b8207fb32fb533fb6753c7a67ee883c136a89824a0954530965645132fab0d5b32be962b2160d47c3b56aaa96adac276bc5",
    "723264ec0ba98cbe0e6912c70aa7b5d1795baca0f531afe3d125e65b1cb8e6fb15058de3928ac2b6059e11546276cf79bddeff955dc76e3c5bef350e380d8675"
    "5f0fe6dfbf80e7ba41e7ffdc5a648fde3fe695b348f48c399797964f329b73f45c7788b87e5a3bd611f5932ebddffdf871cfd8aa8752991a2b489a3a319fedaf",
    "1f96607f8729f1607f07bff04c59143cd8dfc19ffa8788eba7b5e311a27ed2a5f79ddf058dafa9b2e6de8fbe8e68afaf7e58f76fbe3fcce77c3d1ecce7f48a67"
    "caa2e0c17c4e7fea1f22ae9fd68e3544fda44bef7b5c68321ca38ffa6991d3784199cdbcfff059c2fcf20ce284550eaf89077102179e298b820771c25bfdff03",
    "7ec1c795", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 61256U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_uplink_SCMA_Linux_info.c) */
