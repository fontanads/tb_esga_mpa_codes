/*
 * _coder_modulation_pmf_update_info.c
 *
 * Code generation for function '_coder_modulation_pmf_update_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "modulation_pmf_update.h"
#include "_coder_modulation_pmf_update_info.h"

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
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString(
    "modulation_pmf_update"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737813.497048611));
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
  const char * data[62] = {
    "789ced5d5d8c2bc955ee6cb2c92e518895bfdd8825b97737ba4a36d1f5cffc78bc10d6ff1ecf8cffc6f6d83377773d6dbb6df74cffb9bbfd3780340f80102cd1"
    "0a09f182225e904224c20621659584c84b78e0310f04215e9207224184421e201204246cb77bee746fd74edfeb7279ba7d4adaf4ed39eefaaa4e4e9d5375ead4",
    "29ea3de9cc7b288afac5c97f4f4cfea3be39fb5fea4394563cf3e71394b198e9ef993f55d3bb5e9ea4de67f84ea7ffc9fcd910059519cebfe65881c9f6f83a23"
    "4f5e049a67aeaa698a3c2bd0825a1a490c25338ac8f599e68cd26239a6c4f2cc8178ed65979dbcf0c96ba4ab972969faef5887699c177b3c25779487cde5aebf",
    "50d7f8f3f788febfcf267f1a08fe784cf4078957632f79cb0a232bdea8dc13c43bc909876881f6c6c5468f670455f16622a58348d45b8c6522b5802fe0ab95a2"
    "b5443115a965f2116fab273494d99fbdbcd8ec71b4ca8a424de25bb59ed4a455e63e6fe8d729a2ddefb7d92ff3532f4f534f5d7bbb13be09cf2e1fdf6f7aa7ae",
    "7ea75178491c4cc587145e53ecd539e621de5716c4db45e219e90fd207d599a8e465b12dd3fc9da94c5f89c661c0e7dfa1bdaa28727571e86578cecbb1752f4f"
    "ab1c5df78a92e2d5f8749f27270797bffedb817f8c90953bd272be3abc21a23ebb72f709049ec744ef0aa16cf150144783fc4e8af69f0871b1ce241eb6237f03",
    "ce4deda010efa4ea77eaf89510edb22b6f4f98def5f2b4e9f75af185b567e04aaf5f22eab7cbb74f23f03d267a436c4ebacd4e260db24073f75925da6339352d"
    "4ca60d8ccc3656a6f7df5a10af8ac433d21f596ea6ff7d7ec635efe775b679cd6c236a07bef15ffffc7db0034bc223650772fd6e2cd2daedef940a9ba3468217",
    "02c9136e17ecc0aaedc029a25d78e5ed656cf3f9a74cefd4d5ef340aab4c3a2bb3c355e9f53717c43b40e219e98bc801c34dfee1d539a52df0c8c943f8ed1753"
    "30af77ba3ecf36ce2b6939d96825d5ea46c35fd88a1e67a229d0e7eba1cfe3d8f4f993083ccf9c3277cf38d63f9342e219e98bcac15c0c08ea9dcbd7bfbf0d7a",
    "dce97abcd23962b68b85e2d661a9d0abc6f74f8ec46239067a7cd5e397ac7fe6f9b0f6bc07fe190afc33d7db0dfe99d5e2817f064ffd8baecbf3a677caf43b9d"
    "8ec90edc6d71eaec9f44e5ee3213c62577cf20f03c26ba49ff2b0d9aa3e5447b657affd6ca89a5ded7d94554df7fedde6b30ef77babef71db6fd7d752f24caed",
    "8e524cd2ed6832dd8f83be5f9f714c19f43d6abd61975f1f32bd53a6dfe9745611b429aa3a8dcc5a9d5f6751f9c821f18cf4c79a0fb4d821d394c48978780dfc"
    "22eadfa1fea2f24998d73b5dcfa736ce47c56e9be562a5d8f96137da2e9d9713a0e7d756cfa3f0f0edbfb6d8c972a6e354bdbe87c433d217d7eb1a9fe6e1b5a0",
    "d75d82b7a85eff3802cf63a2f7bb4c42ea37945075b0218a79a5e8df383ea1dca3d79de57f7da8d7efb65859515b2c51f91b9f62f3db7f0a81e731d1276ca84d"
    "ba5f6b8932278a524dec33728b1307b5c6f49cc4e2f37a7341b5472f3adef831f1f4fa4f4def663c9dbe50fc8d2646efc23f92f383f1b77ff424f8736eab3db0",
    "3bcf57f613c344fce222bf370c6c6602be5821e2f7b928cefe5f11dfdbe5e3ef20eaf798e8cb1ed777dffd07b50ec34976ce23e195d714b6f5c1fb4cefd4d5ef"
    "34ca74de3b7dae789f81159acc302da8d8e2049237b443a7e358374cd70c04e5e32dd8df75be7d288e2496dfea1e56fc6cbdb9993e29e4337e37f9fb61fc1a8b",
    "51de7caef1f3df645f1a1d7a1a2e0a7e7ec4532fe00f2283077e7e3cf5c3fcdfd85ebcf29a26966f61d2759e1e3ad71e2c757fc0783e6bc629f2fb03e3b79e79"
    "1afc414eb70772d7279db1ca6684dfce07857cbdbab17fa444c11e803db0eeb771bf98ac3d6005b007f6ec012bacc01e7c0bec81f3ed419b3e0ee6362ad96eb0",
    "1e51635b746e93d92cb8e8bc2eec175b3ff56290bf1f9e62d3ef8feaef5f148ff4f95d17fb05c1afbf443cf0ebe3a9dfb17afd829145a5b79a7c6be157c3b3e7"
    "f815627abed5e3b8e913e23ed1f37845a2e5564ff04e79457e1e7ff975f0f33b5fdfabdb01fe305e49754e36c48bbe9ae19319bfea227dbfe838ce9bde29d3ef",
    "74baa3cfe9520fe3f97f17519f5d7e7d1681e731d14df133b42471a3282bd0f2a838b379c99ed098668ec6b5cffce11bdaa5d35b73dc5a87169a1383a0e32f9a"
    "7f9bbe015fa7e3993720d9a99b099276e2affe5c067f8fd3ed44a11053cff367be60fd24bb9fad97e89d5c4649bac74ec0f8b6ee973d790c62b31f2f20f03c26",
    "bad97ef445b61991657a94e4685565045668cf7ee7d47303afdc80a7d331c99305fb48e7f1a42e7f56073be1743b71b1b7bb112b4b55be50cf3523d5d66e66c8"
    "e75c94f7678cf8de2e1f4f10f57b4c745ceb09cd83546b7122add6f4e4971461391c9f401ea005f196b60ebd35e7ca210fd032f1200f109efa17dd3fa820eaf7",
    "98e8b8f4bf20aa593a9b93d393a1dd9e287fb2713f156cfb0537e5756615811628e7ee17a49178463a8e3cfd134eadc20f04fbc34bc4239527a21be9e5f8cd51"
    "75d37728077a313f13eaf359ca3dfa1dc6b175fb8d72f7196cf92120af330acf4887bcce8f8aa79575c183bcce78ea87f9bdf5532fa8f9fd25a23ebb7cfb2504",
    "9ec744b7f4ebdc6f71a2a839b69c6a07ca483c231d8f1df8bcc637ef8c6fb33904413bf055881b72be1da877b6f35581539b45914ff484dd8d7a22bae7a2f8ff"
    "5bebafbd4d714397596c7efd8f21f03c26ba49ff33b22c1ace5f9d2ed88e473def752be7ffcaa4914cd3ab69fdb9ee379b8019e788ceffbfb37f0cfe7da7ebfd",
    "a150185c64243e9aeac693ca4e6cafdb177d2ef2ef2f1a07d440d4ef31d11fcc0673596164c51b957b827827290a2a2dd0deb8d8982cce05f56a70176399482d"
    "e00bf86aa5682d514c456a997cc43b0d5454667ff6f262b3c7d1b3a845896fd57a52935699b96788ac3c7e019bbfff03083ccf9ca2747b0c73c1ac6cbebfe8fc",
    "601f8967a42fee279c738abc3c7c38db077d7f5bf5bd5d7fbfb42f0463a15229d30cc54ff8d2f659aebd13a2dca3ef611c5bb71fa5d72f11f5413ee877c7d3eb"
    "3f35bd9bf1743ae4837e5c3cadac0b1ee483c6533fd801ebf61be5ce4f309e47160714c4f3d8890398706a057100e19fff04f6731dafd78307c14024544d9e0c",
    "d4ac2fd6edaac34ec04d797c601c5bb71f15cf83c2c3779fd7a4af323b74aa5e3f40e219e938e441e314e97358e1b75f4cc17cdde97a3ddb38afa4e564a39554"
    "ab1b0d7f612b7a9c89825e5fb3f9facbc4fcf132a3746809fcf137cbc39c53c4e521ccfce79740af3b5daf57f7fcfd0a7f182a4b6772bf143ad855b2e751f0c3",
    "acd1389e9687fef845e5ee59049ec74437c5dd08b4dc668546e7dca97ef8a5e457b0137773c539d2f3facb8fbe74f80fa0ff9784474aff8f868374884eb6da5b"
    "be462e2116cf92bde0c045fa7f8cf8dea9e31a251776e5f0bd88fee8793a9f35fcf5f9b0f6bc377fe28bc7b9c95faf47e03b75fe4fc6cf37cbd67915733f2d04",
    "f5d5dbe57be0af77bafedfe90673a52e17df3a8f764a855451edc6e30d17e56183716cdd7ea3dcdd81f3b7d42d8ebf87f3b757655df0e0fc2d9efa41ff5bb77f"
    "59f9176ecbb95b73b1eb078273b7d64fbdc0b95b327870ee164ffda0ffaddb8fd2ff6f20eab3cbafcf21f03c26ba55be7e63eae9b490e7e80633ffbdde3e69c1",
    "f6ad3a6f7ffd067c9d8e31afb7255b57704f63fd8367b05fec747b21d20767759a4ec59a1b3b674a35c0644ea4119cd7bdf5e31ba5379772bf17f585b0f6dc22"
    "18073abdbd4a619cba5f9045e219e938eef7d27945f63ec7f0535f847ccc8ed7ff834a5a4972e747c9404b2e72fdb3dc9e70518881febfedfaff14d16ebcf278",
    "df757ea455ed23801f6959785a59173cf023e1a97f8cf8de2e1f1f20eaf798e818e348eff6697916445413185e524786fe9c22da8b550eefd090e781c2233fa7"
    "a677339e4e873c0f8f8ba79575c1833c0f78ea1f23bebfcd76a121f2524f65e22cafc4699536f4e714d15eac72187e00768102bb60d51fb00babc503bb80a7fe",
    "31e27bb00bc662ccfffcca955d58f4dedfbb083c8f896ede87561446568f688e6d16d90b2622b7e7bfc3353e1ef3be49566832c3b4a06293afa5dd1b6aeda77c"
    "075b57b0fffc446c0076c3e976231038bf08c593d174fb60583cb9d8adef860e55b01b6b3cae27e532bcb27de6db620fde5cb01db0ff8c1b4f2beb8207fbcf78",
    "ea1f23be07fd6f2c46fd1fb9b5e7d76e8b7d80736dd64fbdc0b936327870ae0d4ffd8bc62931a677caf43b9dbe3c3b71975558a12ef684a6421196c771019bbd"
    "f865049ec7447f87bd985fb019e326bca1f0c52991be6fec088967a4e3b20bd7d94678fdf0fa279e86f583d3ed425238c8472395ec05cb0f73675293cfa9d991",
    "8bd60f6017acfb65cf2e94b1f9916e8a179db080a787abd3fb8bfa8bf69078463a86bcd5334ead60bfe0ad6740df3b5edfcb5d9f74c62a9b117e3b1f14f2f5ea"
    "c6fe9112057d0ffa7e5a8e88ea7b56007d6f4fdfb3c20af4fdb740df3b5fdfb7e9e3606ea392ed06eb1135b645e736994d37dd3f33467c0ffb03c662dc1f3800",
    "3d6f130ff43c6e3cadac0b1ee8793cf58f11df3b55cf4b88f62e25ffc46536acfd2303fe1c9b78e0cfc18da79575c1037f0e9efac788efe1dc80b118fdf60fcf"
    "0d5c22eab3cbbf4f22f03c26ba55bc4d89e519654e775bfccfe10dedd0e998f679afd849de4e848f3ea2c2bd364eb713fc71e360633b5f4c1d487bc1663cd3ed",
    "8b950edc6b7055dfaaef3523ba1ea02261edb907e78e2938776cd51f1beb073877bc443c38778ca77ea7db855344fbf0cadd7e1897dc7d0c81e731d14df37346"
    "964583ffe674c176908efb5cca79003bf7e2cd3847f43cc077f68f41ef3b5def0f85c2e02223f1d154379e5476627b930581cf4579abc788efedf2f11851bfc7",
    "445f4a7e3a49169ba6fe9c22da8b550effb409eb010ad60356fd81f5c06af1603d80a7fe45e3431b88fa3d26fa83d9a02e2b8cac78a3724f10ef244541a505da"
    "1b171b3d9e11d4ab415e8c6522b5802fe0ab95a2b5443115a965f211eff4c21565f6672f2f367b1c3dbb7d45e25bb59ed4a4d5d5fa8f7c61edf932b6fde4f722",
    "f03d730a33d47a486affda9cbffa2b0be2a5907846fae2f7264d3835910d827a0aee3d5e221eb17bef7d956a861de4f6b60f4476900eec6c96477e17c50fc1f8"
    "3516a3bc3dbfeafde2f93d05ba965fddbc7f513f50f1063c9d8ef79e024d66aef7e314d14e8cf3fddffabfbf05bdef74bd9f6eedb5fcbb07ea4e85f6778f1a59",
    "1f5dddedb8c80f047adf58507aff0d447d70cf259e7563fd067c9deebe7b90e09ecb65e2c13d9778ea87f16ddd2f7bf2b871654716cd53fd0202cf63a29bed48"
    "5f649b1159a647498e56554660052d53b553f70f5eb9014fa76392270bf6699244508e2e7f56073be1743b71b1b7bb112b4b55be50cf3523d5d66e66c8e720cf",
    "1cd889590962f3333d669eb99ec2e469b925ca31515054cab9f14664f3cc19d94636cfdc65f1c136d805a7db8551979742d5d01eb779c4760a4c7477d8ef1fbb"
    "68fd00e3d9faa917a3fced60b3038f792ff2e47532c54d8a722aafdd1cecd4fd86d20d783a1d8fdc5c671bf1f5c1fd4c11ec80d3ed4070abb95f3a60e57aacdd",
    "daafd2033672b1730cf145b03e989597b1d905883f7d773c9d0ef1a78f8ba79575c183f8533cf5837db0ee973d790c63b30fb7254e49c77fd478548853b27eea"
    "05e294c8e0419c129efadd7a2ee114d16ebcf2e8c3760ee103083ccf9c2237d93edb6456a6f7df5c102f8dc433d21759178892e29df3499f2690dc2ff8f11baf",
    "c03ac0e9fa7ea3d21713858a3fcf2568a571a8cab9f83e13758fbe77fa38d6e7bf8f2b778f76deecf9b0f6bc876dfe8ffb5ecbd305db437afe0ff7572e0b4f2b"
    "eb8207f757e2a9dfe9f6e014d13ebc72f72236fd7f0781e731d12dfc3fcc508a89bc3459f84c34f2aaf4ff7841bca5e537b1d4ffef60db0ae427fcdadf7d14d6",
    "054eb7039da6249f542f128d76307e101c6df4e84861c745eb8231e27b18d7c66294c32f10f3ffb00ad3edd19c63fd3fe4f219ce3945dc1f78f916ccf79dafe7"
    "8be56e4fcda68f8eca87c5c2b6dc8dec6e31b48bf43c8c63ebf61be5eece955e47f99becf20bf5ff8fc7f49cc5b3683dae3544d9b1f3fb57917846fa543ef28b",
    "098824b37d5a65bc66d6cd2486e0fc3ef85d0ee6f74ed7fba166848e07d9d0a0503a6a9cf9774f06f554d745f13f63c4f730ae8dc528879f0de392c36711781e"
    "13dde4f7116689591b9d73a7c6832ee53cb19dfcd4579c237d5ee0f2a32f1dc2bd354eb707a3e1201da293adf696af914b88c5b3642f3870913df81ee27bbb7c",
    "e410f57b4cf4a5da83bb757632cc47fa5faff7ef14d17ebcf79d95b1f97f9e32bd5357bfd328aca248b4acac6c5db0e8ba318bc433d21759374e3934cd68a5f3"
    "8aecf9c2f0535f7c0dd6014ed7fb834a5a4972e747c9404b2e72fdb3dc9e70518881de07bd7f5d2e2b9077685e6ef53a01f20edd1afd4d1a0ff20ee1a9df1df6",
    "427fd58e035defdf29a2fd58e5f2874d6ceb842711789e398555045aa056773e6cd175028978327d7f69c2a9559c13807de225e22daaf73f8ec0f398e8dd482f"
    "c76f8eaa9bbe4339d08bf999509fcf52eed1fb4e18c7ab8f0bfd556cfb031f41e0794c74d33a60d27bedef4ed5f74b8b27b09cf74fd8453c9e20fcdc7f37619e",
    "7f5bf5bddd797e3b78c2e40b9d7eb39b3e8b95a44a222b550417ed07b8f51cb08468f772ce8bbd14d69ee4ee27e3443c7e9fc7d5ffceb9e762c229b89fcc3578"
    "a4f47e3c1d0d342b9d88581d04f391f6c8b7239e55e07eb27518bfd4f5f89f4b447d76f9f41c02cf63a2bfe3dc6f5ce469564898efa947d93552f7d22c7a0eb8",
    "7c03be4ec7750ef81a1b09c7915d7ef3dfc1cfef783bc065f8267f2e331929565177c45eb375dc635d742e00c6b3f5532f46f9db86b81f9b7810f7831b4f2beb"
    "8207713f78ea07fd6efdd48b51febe08f13df302f13dd6fdb1214710dfb3443c88efc1533ff87f8c0595f7675179fb1802cf63a29bec0063f6fb9c2ed80ed2f7",
    "852d25df9b9df35f8c367520e8e7f9cefe31e87ba7ebfba150185c64243e9aeac693ca4e6cafdb177d2ecaf70cfade5850f99c2f11f591c9f3afefeaae6ebeef"
    "cc3cff9acc5cefc729a29d18fd3fbff1d77740ef3b5def870a74c8c7f4f6b3ddc3f2eece403a17f8ce06e8fdb5d3fb6f20eab3cba7cf21f03c26bad9df83bcf0",
    "66fefbdbb2ef0bf70859f7eb66391bd73f780676c2e97642a40fceea349d8a353776ce946a80c99c482317d909b78e6f94de5c4e1c6838ac3defbb6e3da1e3af"
    "c7bd61b09e701b1eac27f0d40fe3d9faa917a3fc3d872d5ee8c67bc2189ae3e9e1caf60bde5c108f5c7ed939a7c8df0bf90bcf3e0dfadde9fafd2275b417e8c4",
    "374bbd827f10604799f2d641c745f1a0308eaddb6f94bb97c237ad2fecf2eb83083c8f893e4d6ea1ebf86959877d618c7941ae8485e07cfe2f2b9f8473604ed7"
    "f75c31dbf61d1f6ef84b5b4717fd666e6fa7351092eed1f7309ead9f7a41dd0f7089a86fc97e9d1627d26a66f2373d7f9253edc02112cf48c7b30e7cc8b615f8",
    "ffbf0a76c0f976a0bfb3b11964f6f673ad78483d09d28707319677513c28f875ac9f7a59965fe7a67360fc3cd19153cf81ed21f18cf445f341e97cba3f5f9011"
    "8cfffcd2e8cbaef6eb7c7d95f68b545eb7e1f1c949a21d61e5ee669f4f6c958e2385339a728f7e87716cdd7ea3dcfdf46562fe7aad9b2bdb975d541edc9fe7ef",
    "f2c76fbce26abdbe523c52f3f68d4a5f4c142afe3c97a095c6a12ae7e2fb8c8bfcf590bfcdba5f8f16b7433e7f9bd2b3b76e5967fd3f110b7a1a193ce1d50af4"
    "fff8e30f9ae0b7b9adfadfeebc3e53649bd5eec9b07570a1b45bc3cc59ba237429f7e87f18c7d6ed47f9ede13ec747c3d3eb87fb1c978da79575c183fb1cf1d4",
    "0ffadfbafd46b97b9e581ce6a48f922c361dbb2f7b84c433d217dacfd70542dfd19f338d70feb6f7ff0be46f73bc7e6f6cf6c5e383ea56713bd549ef0c3bec21"
    "230e5c94a719c6b3f5532f46f9bb07f3fcc7c48379fe7ae865d27830cfc7533fd801eba75e8cf217c016a7f969049ec7447f47fefe688fe5d4b490edf18ccc36",
    "1c7bfe762979dcde25ffab916d44f3b87d03ee6774be1dc8f5bbb1486bb7bf532a6c8e1a095e08244f3888d35c533bb0856d3d6057fe26fd6c308a529b77b9c6"
    "0a524f555617a7bf687c00637aa74cbfd3e958e5c59a89a4f381ffdb9f09e01f72ba3d60e4b32e9d0c6da5ab6ca01e4c1e8758d95f77513e0618dfd6fd7ad475",
    "02f88b1e0d0ffc45eba1a749e381bf084ffd6017acfb654f1e7fe5ca2eace81e988628286a56148aacd0e6185514e2ec4ccdadcc8f345e108fec3d3056ec237e"
    "0f8cf28332ac1f9c6e27f65a07bd40748b1e65f90be55c56db47a18ecf45f7838d11dfc3b83616a31cee103bff0bf740c23d90463cadac0b1edc0389a77e580f",
    "58f7cb9e3c26b1f9899e41e0794c74cb7cce89b663cf8be54def94e9773a1dcf3c416717d1fde3afdd033be0783be03b6cfbfbea5e4894db1da598a4dbd164ba"
    "efa2fd02d83fb67eeac5287ffbc4ce0db00ad3edd19c63f53bb9bcaf734e11cffb74f916c407395fbf17cbdd9e9a4d1f1d950f8b856db91bd9dd62e828e8f7f5",
    "d4ef796cf37abbe7d11b225f6705e68869a8a29ce09859e60ceae6bc174eb9e7ab7903be4ec72a3f964c25ed171c5ffce16fc2fcdfe9f6810e1e8752bdad1d66"
    "2756bf60f68ec448255774d1fc1fc6b775bf6cc9e3e5decad603abb60bb03eb06e3fac0fc8e0c1fa004ffd308eaddb8fca17b4a8de45fdffe3313da7971acc7b",
    "5c6b8832735bf4fe7841fc576fc0d7e998ef87b8ce4ac2fb45e1e07739580738dd0e849a113a1e64438342e9a871e6df3d19d4535d880f8575c0b48c8bab8e0f"
    "a5fb22db8cc8323d4a72b4aa32022b6837fdc239025bf7475bb08fb81c5dfeac0e76c2e976e2626f77235696aa7ca19e6b46aaadddcc90cfb9e8bcb15bed046a",
    "5ebd94fcd297e5f0ec397e0de2466de241dc286e3cadac0b1ec48de2a9ff9f10dfdbe5630f51bfc74427a1ffef36442e439f89f274d2979e4c05a915d9837123"
    "acfda3b9eab8d2e9b6bbc25e38f71e9abce99d32fd4ea7e35937e8ec82bc446ec1236527cebbc56c444ad7736c5aca963bfdf28eafabba685f615decc429a21f",
    "58e5f34ee7ca2e5c22eab3cbd74f21f03c26facc692ea8b5962873a228d5c43e23b73871506b7498c6b973fd4aa7a677339e4e5f68bf4a3317efc23f92f662fc"
    "ed1f3d09eb0aa7db0b653f314cc42f2ef27bc3c06626e08b15227e1fec3f5cd5775bef2d3b45b41baf3cfe1a363fd24df794f1b426f14e5d1f90bcdf62c2ab15",
    "dc6f11fee9d30d581f385ddf277a9b59b915ca0b7c2c516a8446b18de159c645eb0318c7d6ed877bcab472abf791211fddadd1c7a4f1201f1d9efa41ff5bb7df"
    "28772fae7a3f8067859c9c99ccf971cdf71f355fb5b3f603747611dd0f78e17fff00fc3b4ed7f7729b570fd4c67eb7c3e646cd0b3ebed1dc2bb8286e08c6b175",
    "fb97a5ef61be6f8d07f3fd45f1b4b22e7830dfc753ffa2fefd16a27e8f898e5bffdfed4d06f6282747d9e933ce2a12ad363aa4e5f125b00b8f890776613df434"
    "693cb00b78ea07bb60dd2f7bf218c71617f41c02cf63a29becc28c0b19dd4944e1db17267dcf7d198967a4e3912303db089f471edff98f3f027f91d3edc27634",
    "1d882682ed6169f350142bcd7dbf3f954dbac72ec078b67eea05fc465a81f581757f607db05a3c581fe0a91fec80f5532fa8fb8de19eb25b6c176ef77d46704f"
    "d912f1e09e323cf5835db07eeac598a77477d57144705f0ddc5763c2d3cabae0c17d3578ea07bd6ffdd48b51efa7b19d0b7b1281e7995358451607149c0bb393",
    "c776c2a9559c0bfbf94f206f84e3f57bf020188884aac993819af5c5ba5d75d8091452a0dfd753bfe3bb7fe0e6fc710d91ebf18253f5fb0112cf48c7a1df354e"
    "11bf6fe67f40bfdf5efd6ef73ea822373a3fcfb2c9cca0e417cea3a9dd32dded51eed1ef308eaddb6f94bbcf10d4eb93becaec10f4facdf2a0718ab43c84df7e",
    "31057e99dbaad7edcedbb38df34a5a4e365a49b5bad1f017b6a2c79928ccdbd773de3e3e21a8df21ef33e47dbe3dfa96341ee47dc6533fe877eba75e8cf2f700"
    "5b5cfea711781e135ddb6f6d4bbd877baeac92927a09819ee8e3e6c27e797341b5472fb8ce77d8ceeb97c612963961e03531bacec1fb92a15fa7887663b40b14",
    "f365b00b4eb70ba552b9ae1c6e260e765ac7d5eed9504a14e51317e575f81ee27bbb7c1410f57b4cf4a5d885bb5a9c455968322d56609a4734d7630ed87386b0"
    "5cfef0756cf1391f41e0794cf477c4efcf19bdaaf35b8bae1396760fa9a51c4dd8453ecfeb1fffcd0fc0bfef747b7072c46d378bf5e34e227870962f33d5b3c0",
    "f9a18bce6d2d6a0f7844fd1e137d39f6403fdf7bc8d05c92136955bb0a80222d97bf47306e4753fd4ef50f918cdb79a8f5899ed3827be49788476a5fb71be9e5"
    "f8cd5175d37728077a313f13eaf359ca3d7a7f8cf8de2e1f5f43d4ef31d197a3f759252b0a593a4b580eeffc3ee8799b78a0e771e369655df040cfe3a97f8cf8",
    "de2e1f6b88fa3d26fa72f47c8b159a49565654b272f8d3877afe12511fdcdff5ee787afda7a677339e4e87fbbb1e174f2beb8207f777e1a97fd1fb1e1544fd1e"
    "139da8df677ff26b8633f4f314d10facf229bd0ef682027b61d51fb017abc5037bb158fdff0f07820247",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 178712U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_modulation_pmf_update_info.c) */