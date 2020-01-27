/*
 * _coder_uplink_SCMA_info.c
 *
 * Code generation for function '_coder_uplink_SCMA_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "uplink_SCMA.h"
#include "_coder_uplink_SCMA_info.h"

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
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("uplink_SCMA"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(9.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (3.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\uplink_SCMA.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737813.5422222222));
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
    "789ced5dcb6f234919ef19665633420bbd48cbee8a5766412b6050fccc0b58c98fd88993f891d8499ccc82dd6eb7ed4efae57e380f2e39214e883f800317a415"
    "12683931121cbcb7fd038003a7b920c18d0370c6ed7665d28d6bdc1397db69fb2b29aa94bfeefa557ffaeaf7557ff568ea5e267b8fa2a82f5056faf85f56fee6",
    "a04c0ff2fb943d39e5f706f9b71d65941e520f6cf721f92f07392b4b3a77ae5b058197b89c21d638b557901891bbaea62e8bbcc4487ae942e12895d364a1c3d5"
    "fb92062f70255ee476e41b854dbe5710d33744d7055364fe9f6c71ec69d11029b5a5bd6cae70b340ddd04f17f3fc0f5ceae708a31fda217f96fa51f2fb817d8d",
    "53b5404235247921ddd310233181759935444ed2b540365eda892702c564365e0907c3c14a2951491537e2956c211e681812abf57f0e184a4fa1a715f3ba45d1"
    "f13c5798f6bee1f2791e38ca283d1ee40bb65fbf1a1bfc3ac8df1fe4d1186acf3906cfad7edfc2b48776c83951a8887acf0eb44a8b1394bea59909b5a37acb76",
    "3813ae1d2821bce7b7c443f51747e021f9b3cc4eb96f5a05556eaa8cb860f6816b53da0b0743ab4c409765a1269f077a4a0a087c2d2032bac0d402b2a205fe4f"
    "6f038b1aa537b7f6e4cc517a4c3d1afc77b5fdd64ffe1af70ecf4af382376efffb32068f76c8b78af5e8f6792e572be907d1a670b17d9c5fd95a7fd98ec2089c",
    "51eda03065afeaff0c73bf5b3d3298fa69877c02fdf9092b8ba22c5558d3332237889e4bc1b4dbad3dde77945142fec2ce8ff998951762a3fc955bbd7e03834f"
    "3be4ac5cefe982ef0d4a54891116792d61f0829e917ac3124ee5d9b1fd04c27fc3517ed91e4b52978d9ac091f313652c9e5dfeda7665fe3ded6b2df014a92de0",
    "54dba2e8a19ff8c37ffef617f01313c2f3ca4fe43bed64bcb1d9592ded462fd8942885d3c7c2e6ecf8892ee67ebfbe4f5431ed256b87e11829fec5bdbfd00349"
    "9d679a663e2dbeff784cbc4d2c9e5d3ece3882137aff044c4d79c9efd43f7f2dc17bc05de5f7b73178b4431ece8499e66a7e2bcdf3ec6531b99952a3ad636a76",
    "f81dfaaf3dd9eded43623cfec851a6aeafb324bcd67b46953f9f168f7f3226de0e16cf2e1fdf0e90a62cd7ee9d3dc43efdee06f0f95de573b7e3f51c7b7a9851"
    "d36c23ad97236c68772971944d6c009fcf059f5f9588c5f1dfc1e0d10eb9234ea3b18cc0a8a9e6d4c6ebe3f27cc151a61cd7213999f80c5297a77199df7df063",
    "e079bff37c70af19eae85b6bb2da6c69c534d34ca4339d198adf433f1ede7e3bdf67aff95ec1d4e7565f6f3aca94e33a24e735c90a25ebe60a80e9c565c6b58f"
    "3c16cf2ebfd538a0c19f737545ee9947c0a6afde90de43fbf8ede17b107ff73bcf6f444e2f8aed262f244bc9d3bd76a2593add4f01cfcf2dcfe3f0c8c5691a7c",
    "efeda5e5575edfc2e2d9e5e3f3baa527340103bc3e1b785ec5dd3b6d2ea574586dad7c1691e582560c458e6629eeeeaf75122f79fd49835735bdc17b6a7f2faa"
    "9ecda79abc65e67e9d4f4d63f1ec7212fc6e72bb8776f01cd6cbdc5d5e773b5e2f5e28bcb8d4de3b0cf1b57a3473bc5bc88666292e03fdd79eecf6169c9978cc",
    "283fc2b698fe927d88c70ccf518271bb3778108f2153bf6fc7ed979c2a6b86b77199ee479e8ddb1b86209839c465f0f3ee9ac2a80d430a98baf23e2e73f57be0"
    "77fff3bbbe1c16f7d60f375ac711f9b2a367c57436a4cf10bfc3fa197bb2c7d90f88ed73fa3a068f76c8cdfd5f3d775669c8aa20cb4a45ee706a4390cfacdd5f",
    "d3db0fdbbd251eaabf3a020fc9c7b2136b58f00afd79693fdd3ffdfd21acabf13bff6bdba9f3d4fae56561eb3c1ccd8683c9dd7828989a1dfeff07e67eb77afc"
    "29a67eda219f74bf7ef2ea0bae0f15f0d65e37a616c79fd27a4f5eaa73e7194987f820a6dd10dff7060fe2fb64ea07ff606f2f597bcd10f30fa3e237bd471799",
    "73ffce0778112f1aecb7ea6bcafb7851f7f93b8fe17dc1effe406d0795135e8bc6c5e5c28a54a89523db075a02fc01f883e1cf6d8f3779eb0f7809fc813b7fc0"
    "4b53f0077f047fe07f7fd0648e56f291c35c7ba516d7934b4c3eca45776768ff6d17733f9c97634f763b8c10e3f9cf61f0e88184912efab95fd777a6b07876f9",
    "b8e7eef5f4d4b7050ff9fd13981ff63fbf9b273336565431956cb7c512bf2589a1667186ce4383fe6b4f767b7b9fd8fc309c8389c3b3cbe11cccd7c5b3d2bce0"
    "c1399864ea07deb727bbbd2d4efb5c1d4610f26abc37b6f76bfca6e028538eeb909c0cdf237579ba7eec2cdc84f88ddf797e355b139b279bcbb54e7b492a1d86",
    "dbf94b5e48ce0ecf433f1ede7ebbdd6d131be77f0d83473be44ebed7344ed50f1881afaff36efcdd5d1de71f60f1ec7242f662539bb7eb7bbaad7015f8dfeffc"
    "cf2e89479b27e164e7ec329ad3836a7ce7e060253d3bfc0ffd79788e92ddfed620de33f81de23dc3739420dee30d1ec47bc8d40f7e60788e92ddfe7e406cfef6",
    "21068f1e481a822c9b8117bfeef3cd60f1ecf2f1d6e9f477f99a9a9ac67cfea7fb1f00bffb9ddf57db2bf9525b585f3a4db44abb1b45bdbdbececed0381ffaf1"
    "f0f6dbed6e01c6f783df617c3f3c4709c6f7dee0c1f89e4cfdc0ffc3db6fb7bb6f11e3ffaf60f068877ce8f75216d1a87f7ae73d8ccbfffb23f0909c0cff3fb5",
    "f476c3763ce4ffdfc03a4efff37fadb55c284b825e2fca62ca903623b554626b86d6e903ff0f6f3f8eff7f81a9cfadbebe83c1a31d72e73cafa20817c53e99a5"
    "0d89d57959ca48058161b9c1f5a87dca98edfbe288f6217963d08a4a8b91eabd170484ffd998f8b511f8484e285e8855eb14f675d53e7f02f3c27ef71732b373",
    "5263988d643db27aa295c35cf658b998a1731fa07f0f7f2e77f6f83d62f303a3bfcf629e72a9717e9d1fc861f1ec7212e780225d793b5f147bf4217c5fd1f77c"
    "7f7698d1d2c2e9413adc508b42e724bf255deeced03a50e0fbe1cfe5ce1e17672e6e34ad7903881b4d0acf4af38207712332f5c3baa0e1394a76fbfba1a7e7f7",
    "c0796e709edb5de15baff1e03c3732f58fdb8f0b8e32e5b80ec97dbdff2b5684788e4b3c88e790c6b3d2bce0413c874cfdc0ebc3db6f3f6ff3f89ad77f86a9cf"
    "adbebe89c1a31d72e77c6f47e6eb7155652ed202a3eb9cc44bcdfe75d35af7d3bd251eaaffa31178484ec86e86a8cf1ae97b684757ffad813ff0bb3fb8dcda8c",
    "24f795b2b85bcbd7e3e5c666f65cccc3facf3be30f144cfbdcdadd7d4cfb1f3baeefa76e3566fdc34cfb9c1f4595eb1a7fc9118bf378fd3ee0addd2075c1faff"
    "59c1f38aff4fdbc55c5cc9d4f27c46c9edb73afbabc1b60e719e3bc3ff554cfb88dadd8b2ab179dcf73078b4433eecfb59595e32b481dcaff3b87b583cbb9cd0",
    "feaf6bb54d61feffe04bfa9f81ff2784e715ff9f884b8954e262f798133b821ee572e9c89a01fc0ffcefa8cf0bfe2ff122e7e4ffbbf23d471ffa85be3abdf70b"
    "31f00b13c4f3ec7cff237627b25c286eec285b2bf5f56cbb231fb6e05c883be3173c8d0b5599583f8fd588f909f82efcabf1901cbe0b7f5b3c2bcd0b1e7c179e",
    "4cfd7ef70b554cfb88daddafc8cd0fbc8bc1a31df261e3f3826068b3f69eb03ba21d484ef03dc154e334f69dc37bc204f1bcf2079bc5cd72b918c91fea1b4cfe"
    "f424b39d6d2e9dcdd03e00bffb039c1db8b53bdc7716d17bc2bb377f7c31784fa06a56be50bb737ea23a663bbc9e4f007f3031bc7e9a173cf00764eaf7bb3fa8",
    "62da47d4ee165862fb06469d13cd6b122351d39b2f1ed71ebc395faabf1fccd4d41478fdea39ac13babbbcfe36068f76c8db71232f462fcad1e09e1a3692216e"
    "ad23e628e0f5f9e9c76622774e289c138dc3b3cbe19ce8d7c5b3d2bce0c139d164eaef62ee77abc7234cfdb443feacdf99f7354ed50209d590e485b42ce98cc4",
    "04d665b6d73925fdba731793d978251c0c072ba5442555dc8857b28578c03c9852ebff1c301481974e2be67553f2071162fee096df87940c41886b1adf944cd5"
    "51d39b0ff6d7792176b5797c5e08f7ef9fc33cb0dffd417a2db4cf1e1c8bda59287cc65daa4bcb27ebdb33340f3ceeb9700d4cfdb4433e99fefca4631e05c4e8",
    "5c85971443d7bcb6c73c9c1be1122f87c5b3cbe1dc08b778569a173c3837824cfd5dccfd6ef558c1d44f3be413e27bc9102bba6a8cde2f4bd40eabe4f60dc07a"
    "d057e32139ac07bd2d9e95e6050fd68392a97fdcf700ce51a61cd721f984fc429d13b8de5b002b0b862869379e4bc1b47b22fb07e8b3583f0f9e81bf18e4dd5b",
    "e281bff00acf4af38207fe62bcfaff07d5025825", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 61632U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_uplink_SCMA_info.c) */
