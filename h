* [33me3a49ee2[m[33m ([m[1;36mHEAD -> [m[1;32mmaster[m[33m)[m 1. 停止服务服务下线，服务实例清除，已经服务多级缓存清除失效，重新同步注册表原理剖析
* [33m78008303[m 1. DiscoveryClient 实例化工程中好 TimerTask HeartbeatThread 30秒定时进行续约 2. EurekaService 注册表中查找出此次需要需要的 Lease，更新 lastUpdateTimestamp = System.currentTimeMillis() + duration;
* [33m6bb5bbcd[m 1. DiscoveryClient 定时任务30秒拉取来拉取一次 2. EurekaServer 获取增量数据也是走的多级缓存，不过有个差异时 CacheKey, ALL_APPS_DELTA 会走getApplicationDeltasFromMultipleRegions，recentlyChangedQueue ，ConcurrentLinkedQueue 结构来存储最三分钟增量的InstanceInfo，30 秒回去调度一次来刷新增量数据 3. EurekaClient 会添加增量的数据到本地缓存中，如何同步完后的应用 hashCode 和eureka该应用存储的hasoCode值不同，表示由于一些原因导致数据同步不一致，则重新拉取一份完整的注册表信息
* [33maf688c1c[m[33m ([m[1;31morigin/master[m[33m)[m readWriteCacheMap 多种过期形式 1. 主动过期(服务注册，下线) 2. 定时过期，180s缓存key进行过期 3. 被动过期，readOnlyCacheMap 30秒进行 readWriteCacheMap 的数据同步
* [33m9d20e7ad[m ApplicationsResource#getContainers 暴露获取注册应用信息接口 ResponseCacheImpl 提供多级缓冲来获取应用信息
* [33m03cd7640[m DiscoveryClient 实例化过程中会全量抓取注册表
* [33m351734e2[m 构建Url distributionUrl=https\://services.gradle.org/distributions/gradle-6.8.3-bin.zip
* [33med0da19c[m Enable Gradle caching, file watch and parallel build (#1433)
* [33m7bd463f1[m Update the badge to use Actions
* [33m4d36f048[m[33m ([m[1;33mtag: v1.10.17[m[33m)[m Remove redundant metadata synchronization (#1424) (#1426)
* [33m62fb60ea[m Update xstream to 1.4.18 (#1421)
*   [33m5e19beec[m Merge pull request #1418 from Netflix/use-github-actions
[32m|[m[33m\[m  
[32m|[m * [33mc8d57026[m Remove TravisCI and use Github Actions
[32m|[m[32m/[m  
* [33m6b0c7caf[m rotate TravisCI secrets
* [33m8d54b3a0[m Update README
* [33mfc4e05a3[m[33m ([m[1;33mtag: v1.10.16[m[33m)[m Enable overriding the client in DiscoveryManager (#1417)
* [33m9091ffdd[m Refactor: use diamond operator (#1412)
* [33m27a635b6[m Refactor: use diamond operator (#1405)
* [33mdc65995e[m Allow null values for healthcheck (#1402)
* [33m17ea7ca3[m[33m ([m[1;33mtag: v1.10.15[m[33m)[m Do not log double the URL slash in AbstractJerseyEurekaHttpClient.java (#1401)
* [33mc111d08a[m Upgrade xstream to 1.4.17 due to CVE-2021-29505 (#1397)
* [33m4d1cc807[m[33m ([m[1;33mtag: v1.10.14[m[33m)[m Update Jackson to 2.10 branch (#1393)
* [33m0550922e[m Rotate publishing credentials
* [33mebb98c5c[m Update ResolverUtils::randomize (#1383)
* [33m50db5d24[m Upgrade xstream to 1.4.16 for CVE-2021-213{41-51} (#1386)
* [33m04ee3177[m Replace jcenter with maven central (#1381)
* [33mc43d873b[m[33m ([m[1;33mtag: v1.10.13[m[33m)[m Upgrade nebula.netflixoss to replace bintray publication and update TravisCI secrets (#1380)
* [33m0762c4a7[m Updates xstream to 1.4.15 (#1377)
*   [33m51188cea[m[33m ([m[1;33mtag: v1.10.12[m[33m)[m Merge pull request #1376 from fiibbb/lingy/export-config-ns
[34m|[m[35m\[m  
[34m|[m * [33mdda7f4c3[m Make eureka instance config namespace configurable
* [35m|[m [33m1749af98[m[33m ([m[1;33mtag: v1.10.11[m[33m)[m Fix #1367 (update xstream) (#1370)
* [35m|[m [33m953810ac[m Fix GzipEncodingEnforcingFilter getHeaders appending a const header name (#1363)
* [35m|[m [33m336ee2bc[m[33m ([m[1;33mtag: v1.10.10[m[33m)[m Revert log level of 'Saw local status' error
[35m|[m[35m/[m  
*   [33m26f9b8cd[m[33m ([m[1;33mtag: v1.10.9[m[33m)[m Merge pull request #1365 from fiibbb/lingy/fix-discovery-manager
[36m|[m[1;31m\[m  
[36m|[m * [33m7a9e25ce[m Fix DiscoveryManager for DI tests
[36m|[m[36m/[m  
* [33m4dfa8f95[m Update the build instructions (#1263)
*   [33mc56bfb29[m[33m ([m[1;33mtag: v1.10.8[m[33m)[m Merge pull request #1361 from fiibbb/lingy/enable-custom-amazon-info-provider-factory
[1;32m|[m[1;33m\[m  
[1;32m|[m * [33m5d2db6d1[m Make instance config factory support custom amazon info provider
[1;32m|[m[1;32m/[m  
* [33m360d5360[m Update Build Status Location (#1359)
* [33mf92ee228[m Update vulnerable deps #1357 #1351 (#1358)
*   [33m16ab5e44[m[33m ([m[1;33mtag: v1.10.7[m[33m)[m Merge pull request #1356 from fiibbb/lingy/bump-client-side-idle-connection-timeout
[1;34m|[m[1;35m\[m  
[1;34m|[m * [33ma19a0951[m Bump default connection idle timeout
* [1;35m|[m   [33mb84b5c0d[m[33m ([m[1;33mtag: v1.10.6[m[33m)[m Merge pull request #1352 from philrud/dc-ipv6
[1;36m|[m[31m\[m [1;35m\[m  
[1;36m|[m * [1;35m|[m [33mf4313959[m Add IPv6 address to the datacenter metadata keys
* [31m|[m [1;35m|[m [33m38b99a42[m[33m ([m[1;33mtag: v1.10.5[m[33m)[m Add a metric to report selfPreservationMode
[31m|[m[31m/[m [1;35m/[m  
* [1;35m/[m [33m821beb4b[m Fix #1336 resource needs to be closed (#1350)
[1;35m|[m[1;35m/[m  
* [33m2607f30a[m[33m ([m[1;33mtag: v1.10.4[m[33m, [m[1;33mtag: v1.10.3[m[33m, [m[1;33mtag: v1.10.2[m[33m)[m Register RemoteRegionRegistry with the servo monitors
* [33m3e192528[m[33m ([m[1;33mtag: v1.10.1[m[33m)[m Record fetch mismatches and success counts
* [33m00e827eb[m[33m ([m[1;33mtag: v1.10.0[m[33m)[m Add secondsSinceLastSuccessfulRemoteFetch metric
* [33m2d61f5fe[m Add a couple of minor metrics
* [33m5327c056[m Upgrade xstream to fix illegal reflection access reported by tomcat
* [33mded5e596[m Fix log line which was generating a compiler warning
* [33m85cd7518[m Add jaxb-runtime, which is required for Java >=11
* [33m5c469f90[m[33m ([m[1;33mtag: v1.9.26[m[33m)[m Bump jackson-databind do 2.9.10.6 (#1333)
*   [33m21b4529a[m Merge pull request #1335 from Netflix/fix-incorrect-logging-overriddenstatus
[32m|[m[33m\[m  
[32m|[m * [33mf2f8e086[m Update AbstractInstanceRegistry.java
* [33m|[m [33mf9fc2e88[m Change runtime scopes to runtimeOnly (#1334)
[33m|[m[33m/[m  
* [33m50eecc26[m Log status transitions to DOWN at error level, instead of warn
*   [33m25996d03[m Merge pull request #1327 from jamesmulcahy/sn-131-downgrade-error
[34m|[m[35m\[m  
[34m|[m * [33m04e1f13e[m Downgrade log level of noisy log messages
[34m|[m[34m/[m  
* [33mff8d941c[m Cleanup Issues Found by Muse (#1321)
* [33mf84299ea[m Update Travis CI to use Xenial/OpenJDK8 (#1304)
* [33mc0eebd38[m Replace valueOf with parseLong where primitive type is expected (#1313)
* [33m047549fe[m Fix typos in AbstractInstanceRegistry and EurekaMonitors (#1314)
* [33mef87b44d[m[33m ([m[1;33mtag: v1.9.25[m[33m)[m Unbreak EurekaClientConfig interface compat (#1317)
* [33m5e266be6[m[33m ([m[1;33mtag: v1.9.24[m[33m)[m Update jackson-databind to 2.9.10.4 (#1311)
* [33m6baa691f[m Fix a typo (#1308)
*   [33m6438fba6[m[33m ([m[1;33mtag: v1.9.23[m[33m)[m Merge pull request #1307 from yobennett/feature/add-should-enforce-fetch-registry-at-init
[36m|[m[1;31m\[m  
[36m|[m * [33m2b8c0186[m Add shouldEnforceFetchRegistryAtInit config
[36m|[m[36m/[m  
* [33m6d7a1e12[m Resolve spinlock issue in AcceptorExecutor thread (#1303)
* [33mf67ee5fc[m Improve map iteration in JerseyApplicationClient.java (resubmitted) (#1301)
* [33m3410a72e[m Revert "Improve map iteration in JerseyApplicationClient (#1299)" (#1300)
* [33mdad07710[m Improve map iteration in JerseyApplicationClient (#1299)
* [33m866ea505[m Resolve the zone from metadata for non-AWS code path (#1287)
* [33m2596a054[m Update Compactmap library to 2.0 (#1296)
* [33m9685296a[m[33m ([m[1;33mtag: v1.9.22[m[33m)[m Remove sudo configuration (#1295)
* [33m0bf85792[m Remove uses of 'provided' in the eureka client (#1293)
* [33m80bf99f3[m[33m ([m[1;33mtag: v1.9.21[m[33m)[m Check for existence of ConfigurationManager (#1288)
* [33mbf424b77[m Update to latest gradle wrapper (#1289)
* [33md45c537f[m[33m ([m[1;33mtag: v1.9.20[m[33m)[m Upgrade Jackson to 2.9.10 (#1284)
* [33mcac06f4b[m[33m ([m[1;33mtag: v1.9.19[m[33m)[m Add stats for DiscoveryClient (#1282)
* [33mf139fc32[m Update unit tests (#1283)
* [33m615448d1[m[33m ([m[1;33mtag: v1.9.18[m[33m)[m Allow to use the public IPv4 address as the primary if enabled (#1275)
* [33mcefadab1[m[33m ([m[1;33mtag: v1.9.17[m[33m)[m Decrement expectedNumberOfClientsSendingRenews for expired leases (#1271)
* [33m1ef3c55f[m[33m ([m[1;33mtag: v1.9.16[m[33m)[m Disable jersey2 json auto discovery (#1262)
* [33mc4d212bf[m[33m ([m[1;33mtag: v1.9.15[m[33m)[m Gracefully handle HTML errors from Eureka server (#1265)
* [33m689b6fa5[m[33m ([m[1;33mtag: v1.9.14[m[33m)[m Cleanup resources on web-app shutdown (#1207) (#1251)
* [33m743af8be[m addres cache bug with value supplier (#1245)
* [33md744f4c9[m Optimize CircularQueue by utilizing ArrayBlockingQueue #1237
* [33m9d07ac4a[m[33m ([m[1;33mtag: v1.9.13[m[33m)[m Use HashMap if CompactHashMap is not available on classpath (#1235)
* [33m7671fda6[m Make AmazonInfo deserializer more robust (#1224)
* [33m9fa84376[m Add unit tests for com.netflix.discovery.util.EurekaEntityFunctions (#1214)
* [33m18e9f4a4[m Upgrade xstream to 1.4.11.1 (#1223)
*   [33m020df823[m[33m ([m[1;33mtag: v1.9.12[m[33m)[m Merge pull request #1218 from elandau/bugfix/discovery_client_constructor
[1;32m|[m[1;33m\[m  
[1;32m|[m * [33mfa78ddeb[m Put back deprecated constructor
[1;32m|[m[1;32m/[m  
* [33ma6be5734[m[33m ([m[1;33mtag: v1.9.11[m[33m)[m Update woodstox to 5.x (#1216)
*   [33me71be8ce[m[33m ([m[1;33mtag: v1.9.10[m[33m)[m Merge pull request #1212 from LittleBaiBai/add-filter-to-replication-client
[1;34m|[m[1;35m\[m  
[1;34m|[m * [33m8325086b[m remove addReplicationClientFilter method from the interface
[1;34m|[m * [33m34949b66[m add ClientFilter to HttpReplicationClient
[1;34m|[m[1;34m/[m  
* [33mc416de53[m EUREKA-1149 Add injectable customizable EndpointRandomizer (#1194)
*   [33m36f66633[m update the comment (#1172)
[1;36m|[m[31m\[m  
[1;36m|[m * [33m130d093a[m update the comment
* [31m|[m [33m68c65728[m Remove unused javax.mail dependency (#1177)
[31m|[m[31m/[m  
*   [33m48446d95[m[33m ([m[1;33mtag: v1.9.9[m[33m)[m Merge pull request #1170 from Netflix/qiangdavidliu-patch-4
[32m|[m[33m\[m  
[32m|[m * [33m6724f475[m Update EurekaConfigBasedInstanceInfoProvider.java
[32m|[m * [33m23927052[m sanitize metadata map for empty values
[32m|[m[32m/[m  
*   [33m1b60b497[m Merge pull request #1157 from krutsko/Issue_DNS_Server_Change
[34m|[m[35m\[m  
[34m|[m * [33md6ba8c15[m revert to static DNSResolver
[34m|[m * [33m755d5a86[m fix exception handling
[34m|[m * [33m4b110406[m initialize DirContext on each request to DNS (make DirContext non-static)
* [35m|[m   [33maaa00c1b[m Merge pull request #1135 from jawitthuhn/master
[36m|[m[1;31m\[m [35m\[m  
[36m|[m * [35m|[m [33m60306dc8[m adding test case, fixing a missed line
[36m|[m * [35m|[m [33m9fbbc549[m clarifying this code chunk per feedback on PR
[36m|[m * [35m|[m [33m8d6dfdb1[m fix for StringIndexOutOfBoundsException
* [1;31m|[m [35m|[m   [33mcb21514c[m Merge pull request #1163 from phantasmicmeans/detailed-info-instanceInfo
[1;32m|[m[1;33m\[m [1;31m\[m [35m\[m  
[1;32m|[m * [1;31m|[m [35m|[m [33m3b93a024[m add @Override toString() in InstanceInfo
[1;32m|[m[1;32m/[m [1;31m/[m [35m/[m  
* [1;31m|[m [35m|[m   [33m0f960da8[m[33m ([m[1;33mtag: v1.9.8[m[33m)[m Merge pull request #1155 from mgtriffid/eureka-1154
[1;34m|[m[1;35m\[m [1;31m\[m [35m\[m  
[1;34m|[m * [1;31m|[m [35m|[m [33ma7606649[m EUREKA-1154 Return 404 if instance is not found when trying to update metadata via REST API
[1;34m|[m [35m|[m [1;31m|[m[35m/[m  
[1;34m|[m [35m|[m[35m/[m[1;31m|[m   
* [35m|[m [1;31m|[m   [33m41bc0a1b[m Merge pull request #1153 from elandau/ignore_staleness
[35m|[m[31m\[m [35m\[m [1;31m\[m  
[35m|[m [31m|[m[35m/[m [1;31m/[m  
[35m|[m[35m/[m[31m|[m [1;31m|[m   
[35m|[m * [1;31m|[m [33m3115ee45[m Simplify code
[35m|[m * [1;31m|[m [33m5ecbbf21[m Return 0 for staleness when the client is shutdown or when refreshes not enabled.  Otherwise the metric can be misleading.
* [31m|[m [1;31m|[m   [33m44bf4cab[m[33m ([m[1;33mtag: v1.9.7[m[33m)[m Merge pull request #1152 from elandau/improve_logging
[31m|[m[33m\[m [31m\[m [1;31m\[m  
[31m|[m [33m|[m[31m/[m [1;31m/[m  
[31m|[m[31m/[m[33m|[m [1;31m|[m   
[31m|[m * [1;31m|[m [33m65567e4e[m Add success counter to TimeSupervisorTask to help identify situations where the supervisor has stalled
[31m|[m[31m/[m [1;31m/[m  
* [1;31m|[m   [33m12712a98[m[33m ([m[1;33mtag: v1.9.6[m[33m)[m Merge pull request #1140 from Netflix/qiangdavidliu-patch-3
[34m|[m[35m\[m [1;31m\[m  
[34m|[m * [1;31m|[m [33me8af9393[m update default server's eureka-client property
[34m|[m[34m/[m [1;31m/[m  
* [1;31m|[m   [33m08cea61a[m Merge pull request #1138 from mgtriffid/eureka-1137
[36m|[m[1;31m\[m [1;31m\[m  
[36m|[m * [1;31m|[m [33md31e80eb[m EUREKA-1137 Add counter for congestion issues
[36m|[m [1;31m|[m[1;31m/[m  
* [1;31m|[m   [33ma1e563a0[m Merge pull request #1132 from krutsko/eureka-1131
[1;31m|[m[1;33m\[m [1;31m\[m  
[1;31m|[m [1;33m|[m[1;31m/[m  
[1;31m|[m[1;31m/[m[1;33m|[m   
[1;31m|[m * [33m309be797[m rename spotTerminationTime
[1;31m|[m * [33m6444a1b8[m fix comments
[1;31m|[m * [33mf8439886[m handle spot instance termination
* [1;33m|[m   [33m67c28d40[m Merge pull request #1126 from mgtriffid/eureka-1120
[1;33m|[m[1;35m\[m [1;33m\[m  
[1;33m|[m [1;35m|[m[1;33m/[m  
[1;33m|[m[1;33m/[m[1;35m|[m   
[1;33m|[m * [33ma687b491[m EUREKA-1120 Call copying constructor for InstanceInfo to be returned to apps/delta request
[1;33m|[m * [33m3871daf1[m Revert "EUREKA-1120 Move write.lock higher in stack so that payload serialization is performed while locked"
[1;33m|[m * [33mb0b011db[m EUREKA-1120 Move write.lock higher in stack so that payload serialization is performed while locked
* [1;35m|[m   [33mb2c5ea68[m Merge pull request #1125 from krutsko/ISSUE-1124
[1;35m|[m[31m\[m [1;35m\[m  
[1;35m|[m [31m|[m[1;35m/[m  
[1;35m|[m[1;35m/[m[31m|[m   
[1;35m|[m * [33m923f603a[m ISSUE-1124 register additionalFilters into clientConfig
[1;35m|[m[1;35m/[m  
* [33mec2649e3[m[33m ([m[1;33mtag: v1.9.5[m[33m)[m Add User-Agent when requesting information from AWS Metadata service (#1122)
*   [33mcea84e31[m Merge pull request #1119 from ileler/patch-1
[32m|[m[33m\[m  
[32m|[m * [33m558b8ec2[m add test case
[32m|[m * [33m327327e9[m defaultZone separator support container space
[32m|[m[32m/[m  
*   [33mf660f788[m[33m ([m[1;33mtag: v1.9.4[m[33m)[m Merge pull request #1108 from PropertyOfTuckerSystems/pts/aws-asg-interface
[34m|[m[35m\[m  
[34m|[m * [33me4dd6a7d[m Address review feedback
[34m|[m * [33m0188bbee[m Add an interface for AwsAsgUtil
* [35m|[m   [33m7935f2c3[m Merge pull request #1107 from mgtriffid/eureka-1087-new-config-param
[36m|[m[1;31m\[m [35m\[m  
[36m|[m * [35m|[m [33m01de9e50[m EUREKA-1087 Add config parameter eureka.myUrl to specify URL Eureka should treat as its own (for cases when each Eureka node is behind LB and does not simply check replica URLs against own IP/host)
[36m|[m [35m|[m[35m/[m  
* [35m|[m   [33m6c7596fb[m Merge pull request #1100 from holy12345/fix-1098
[35m|[m[1;33m\[m [35m\[m  
[35m|[m [1;33m|[m[35m/[m  
[35m|[m[35m/[m[1;33m|[m   
[35m|[m * [33me0c3ee2c[m Add test case
[35m|[m * [33mc53342dc[m modify comment
[35m|[m * [33m15ddfe68[m fix 1098
* [1;33m|[m   [33me68bde71[m Merge pull request #1093 from mgtriffid/spring-cloud-373
[1;33m|[m[1;35m\[m [1;33m\[m  
[1;33m|[m [1;35m|[m[1;33m/[m  
[1;33m|[m[1;33m/[m[1;35m|[m   
[1;33m|[m * [33mfbe2466a[m Check that expectedClientRenewalIntervalSeconds is > 0
[1;33m|[m * [33m68706690[m Extract calculation of renews threshold to separate method
[1;33m|[m * [33mdc0852b3[m Add possibility to configure expected interval between clients' renews and not break self-preservation
* [1;35m|[m   [33mada9f991[m Merge pull request #1096 from holy12345/responseCache-config
[1;36m|[m[31m\[m [1;35m\[m  
[1;36m|[m * [1;35m|[m [33m47c528fd[m Cache capacity configurable
[1;36m|[m [1;35m|[m[1;35m/[m  
* [1;35m|[m   [33mb7d1c6dd[m Merge pull request #1097 from holy12345/magic-number
[1;35m|[m[33m\[m [1;35m\[m  
[1;35m|[m [33m|[m[1;35m/[m  
[1;35m|[m[1;35m/[m[33m|[m   
[1;35m|[m * [33m6c12040f[m Use Status replace magic number
[1;35m|[m[1;35m/[m  
*   [33mac6bd9b0[m[33m ([m[1;33mtag: v1.9.3[m[33m)[m Merge pull request #1088 from tdanylchuk/fix-healthcheck-handler-concurrent-register
[34m|[m[35m\[m  
[34m|[m * [33m2402d258[m Some clients try to register their health checks and fail since there is possibility to rewrite healthcheck handler by default one.
* [35m|[m   [33m07876a70[m Merge pull request #1071 from neoremind/master
[35m|[m[1;31m\[m [35m\[m  
[35m|[m [1;31m|[m[35m/[m  
[35m|[m[35m/[m[1;31m|[m   
[35m|[m * [33m6c2db95a[m Update comments.
[35m|[m * [33mb3575449[m Modify testcase for validate update renewal threshold.
[35m|[m * [33mdec9355b[m Add testcases for update renew threshold.
[35m|[m * [33ma4dd6b22[m Fix the inconsistency logic because it does not reflect the expected intention based on the comment in the method of updateRenewalThreshold().
* [1;31m|[m   [33mb9888502[m[33m ([m[1;33mtag: v1.9.2[m[33m)[m Merge pull request #1080 from qiangdavidliu/master
[1;32m|[m[1;33m\[m [1;31m\[m  
[1;32m|[m * [1;31m|[m [33m2075f184[m one more change to relax parsing compatibility due to overiddenstatus casing change
* [1;33m|[m [1;31m|[m [33m72fcd281[m[33m ([m[1;33mtag: v1.9.1[m[33m)[m Merge pull request #1079 from qiangdavidliu/master
[1;31m|[m[1;33m\[m[1;33m|[m [1;31m|[m 
[1;31m|[m [1;33m|[m[1;31m/[m  
[1;31m|[m[1;31m/[m[1;33m|[m   
[1;31m|[m * [33m9e874fba[m - change overriddenstatus field name in pojo to allow for better serialization compatibility - futher relax deser behaviour on overriddenstatus field to allow for both lower and camel case
* [1;35m|[m [33m80093559[m[33m ([m[1;33mtag: v1.9.0[m[33m)[m Merge pull request #1060 from qiangdavidliu/master
[1;36m|[m[1;35m\[m[1;35m|[m 
[1;36m|[m * [33m4eb852e8[m address dangling PR comments for PRs #976 and #1003
[1;36m|[m *   [33m26b422e6[m Merge remote-tracking branch 'upstream/master'
[1;36m|[m [32m|[m[1;36m\[m  
[1;36m|[m [32m|[m[1;36m/[m  
[1;36m|[m[1;36m/[m[32m|[m   
* [32m|[m   [33m935f627f[m Merge pull request #1003 from encyphered/null-server-url-context
[34m|[m[35m\[m [32m\[m  
[34m|[m * [32m|[m [33m2e48ebfb[m Append slash when eureka server context is null
[34m|[m * [32m|[m [33m66d4dc2c[m Prevent "null" url server url prefix
* [35m|[m [32m|[m   [33m27b94c6c[m Merge pull request #976 from mulderbaba/975-Remove-checked-exceptions-from-@PostConstruct-methods
[36m|[m[1;31m\[m [35m\[m [32m\[m  
[36m|[m * [35m|[m [32m|[m [33mb96d5a12[m 975-Remove-checked-exceptions-from-@PostConstruct-methods
* [1;31m|[m [35m|[m [32m|[m   [33mb43d9794[m Merge pull request #1059 from qiangdavidliu/master
[1;32m|[m[1;33m\[m [1;31m\[m [35m\[m [32m\[m  
[1;32m|[m [1;33m|[m [1;31m|[m [35m|[m * [33m8327b071[m 975-Remove-checked-exceptions-from-@PostConstruct-methods
[1;32m|[m [1;33m|[m [1;31m|[m [35m|[m * [33m2b83821c[m Append slash when eureka server context is null
[1;32m|[m [1;33m|[m [1;31m|[m [35m|[m * [33mfa5ffd77[m Prevent "null" url server url prefix
[1;32m|[m [1;33m|[m [1;31m|[m[1;33m_[m[35m|[m[1;33m/[m  
[1;32m|[m [1;33m|[m[1;33m/[m[1;31m|[m [35m|[m   
[1;32m|[m * [1;31m|[m [35m|[m [33m1980efc0[m update dependencies
[1;32m|[m[1;32m/[m [1;31m/[m [35m/[m  
* [1;31m|[m [35m|[m   [33m953dc0a4[m Merge pull request #1058 from qiangdavidliu/master
[1;34m|[m[1;35m\[m [1;31m\[m [35m\[m  
[1;34m|[m * [1;31m|[m [35m|[m [33md2dc348a[m Fix issue #1041
* [1;35m|[m [1;31m|[m [35m|[m   [33m69608c67[m Merge pull request #1054 from moxnet/master
[1;36m|[m[31m\[m [1;35m\[m [1;31m\[m [35m\[m  
[1;36m|[m * [1;35m|[m [1;31m|[m [35m|[m [33mdd41a6e1[m update: compatible txt value format: "host1 host2 host3"
* [31m|[m [1;35m|[m [1;31m|[m [35m|[m   [33maf895023[m Merge pull request #1057 from LuanLouis/proxyBug
[31m|[m[33m\[m [31m\[m [1;35m\[m [1;31m\[m [35m\[m  
[31m|[m [33m|[m[31m/[m [1;35m/[m [1;31m/[m [35m/[m  
[31m|[m[31m/[m[33m|[m [1;35m|[m [1;31m|[m [35m|[m   
[31m|[m * [1;35m|[m [1;31m|[m [35m|[m [33m630d203c[m bugfixing: Eureka Proxy Setting is not working    Eureka proxy settings is not working because of EurekaJerseyClientBuilder instance have no chance to set proxy settings during it's lifecycle.
[31m|[m[31m/[m [1;35m/[m [1;31m/[m [35m/[m  
* [1;35m|[m [1;31m|[m [35m|[m [33mc7de8dae[m[33m ([m[1;33mtag: v1.8.8[m[33m)[m Merge pull request #1052 from qiangdavidliu/master
[34m|[m[1;35m\[m[1;35m|[m [1;31m|[m [35m|[m 
[34m|[m * [1;31m|[m [35m|[m [33m98231e60[m fix for issue #1051
[34m|[m[34m/[m [1;31m/[m [35m/[m  
* [1;31m|[m [35m|[m [33mccd8fbd4[m Update README.md
* [1;31m|[m [35m|[m   [33m5491428e[m[33m ([m[1;33mtag: v1.8.7[m[33m)[m Merge pull request #1033 from qiangdavidliu/NPE_fix
[36m|[m[1;31m\[m [1;31m\[m [35m\[m  
[36m|[m * [1;31m|[m [35m|[m [33mc331e539[m fix potential NPE for issue #1014
[36m|[m[36m/[m [1;31m/[m [35m/[m  
* [1;31m|[m [35m|[m   [33md4756142[m Merge pull request #1031 from skyesx/master
[1;31m|[m[1;33m\[m [1;31m\[m [35m\[m  
[1;31m|[m [1;33m|[m[1;31m/[m [35m/[m  
[1;31m|[m[1;31m/[m[1;33m|[m [35m|[m   
[1;31m|[m * [35m|[m [33m9c375edb[m correct counter for read time out
[1;31m|[m * [35m|[m [33m82a9e04d[m prevent replication flood caused by socket readtime out
[1;31m|[m[1;31m/[m [35m/[m  
* [35m|[m   [33mafa4049e[m Merge pull request #1026 from Panmax/master
[1;34m|[m[1;35m\[m [35m\[m  
[1;34m|[m * [35m|[m [33md67f414e[m get dataCenterInfo when need it
[1;34m|[m * [35m|[m [33mf275b3c0[m fix typo
* [1;35m|[m [35m|[m   [33m859747af[m Merge pull request #1029 from ebjwc/gh-1025
[1;35m|[m[31m\[m [1;35m\[m [35m\[m  
[1;35m|[m [31m|[m[1;35m/[m [35m/[m  
[1;35m|[m[1;35m/[m[31m|[m [35m|[m   
[1;35m|[m * [35m|[m [33m45ba5bca[m Verify is scheduler is active before submit
* [31m|[m [35m|[m   [33m5e259c5a[m Merge pull request #1021 from holy12345/master
[32m|[m[33m\[m [31m\[m [35m\[m  
[32m|[m * [31m|[m [35m|[m [33m9b414f14[m Judge more elegant
[32m|[m * [31m|[m [35m|[m [33mb3d3282a[m Judge more elegant
[32m|[m * [31m|[m [35m|[m [33m86df31f2[m elegant way to judge
[32m|[m * [31m|[m [35m|[m [33m9173d440[m Use a more elegant way to judge
* [33m|[m [31m|[m [35m|[m   [33m05d5783d[m Merge pull request #1023 from abracadv8/master
[34m|[m[35m\[m [33m\[m [31m\[m [35m\[m  
[34m|[m * [33m|[m [31m|[m [35m|[m [33mef4f5133[m code cleanup from PR #974
[34m|[m * [33m|[m [31m|[m [35m|[m [33m19844d46[m Two phase shutdown
[34m|[m * [33m|[m [31m|[m [35m|[m [33m6fa935c6[m Two phase shutdown
[34m|[m * [33m|[m [31m|[m [35m|[m [33m7c611d15[m Avoid scheduling when DiscoveryClient.shutdown called
* [35m|[m [33m|[m [31m|[m [35m|[m   [33m22e33454[m Merge pull request #1022 from qiangdavidliu/master
[33m|[m[1;31m\[m [35m\[m [33m\[m [31m\[m [35m\[m  
[33m|[m [1;31m|[m[33m_[m[35m|[m[33m/[m [31m/[m [35m/[m  
[33m|[m[33m/[m[1;31m|[m [35m|[m [31m|[m [35m|[m   
[33m|[m * [35m|[m [31m|[m [35m|[m [33m22f33665[m Set up stream security framework
[33m|[m[33m/[m [35m/[m [31m/[m [35m/[m  
* [35m|[m [31m|[m [35m|[m   [33mdbb98abe[m Merge pull request #1017 from holy12345/master
[1;32m|[m[1;33m\[m [35m\[m [31m\[m [35m\[m  
[1;32m|[m * [35m|[m [31m|[m [35m|[m [33mf075b422[m Increase the catch exception code
* [1;33m|[m [35m|[m [31m|[m [35m|[m   [33md9ad6d58[m Merge pull request #1013 from holy12345/master
[1;33m|[m[1;35m\[m [1;33m\[m [35m\[m [31m\[m [35m\[m  
[1;33m|[m [1;35m|[m[1;33m/[m [35m/[m [31m/[m [35m/[m  
[1;33m|[m[1;33m/[m[1;35m|[m [35m|[m [31m|[m [35m|[m   
[1;33m|[m * [35m|[m [31m|[m [35m|[m [33m82a00598[m The getHostCandidates method improves
[1;33m|[m[1;33m/[m [35m/[m [31m/[m [35m/[m  
* [35m|[m [31m|[m [35m|[m   [33m47789f47[m[33m ([m[1;33mtag: v1.8.6[m[33m)[m Merge pull request #969 from dtrebbien/misc-fixes
[1;36m|[m[31m\[m [35m\[m [31m\[m [35m\[m  
[1;36m|[m * [35m|[m [31m|[m [35m|[m [33m2e0c8d63[m Restore is*Enabled() checks that guard against any computation being performed unnecessarily
[1;36m|[m * [35m|[m [31m|[m [35m|[m [33md66bdc01[m Fix a typo
[1;36m|[m * [35m|[m [31m|[m [35m|[m [33m15e3d187[m Remove calls to Arrays.toString() that are passed to a logger call
[1;36m|[m * [35m|[m [31m|[m [35m|[m [33m6dfe4ab9[m Remove redundant calls to is*Enabled()
[1;36m|[m * [35m|[m [31m|[m [35m|[m [33m6b6a9201[m Move the concatenation of constant variable PREFIX into the format string
[1;36m|[m * [35m|[m [31m|[m [35m|[m [33m7d0271cb[m Fix an incorrect SLF4J logger call
[1;36m|[m * [35m|[m [31m|[m [35m|[m [33mf6b924cd[m Fix an incorrect SLF4J logger call
[1;36m|[m * [35m|[m [31m|[m [35m|[m [33m9cc90a8c[m Remove a redundant isDebugEnabled() check
[1;36m|[m * [35m|[m [31m|[m [35m|[m [33md03299d7[m Check that logging is enabled before invoking Arrays.toString()
[1;36m|[m * [35m|[m [31m|[m [35m|[m [33m5f3c0b18[m Utilize varargs syntax in calling debug()
[1;36m|[m * [35m|[m [31m|[m [35m|[m [33mad81a114[m Utilize parameterized logging
[1;36m|[m * [35m|[m [31m|[m [35m|[m [33md3f490cf[m Remove a redundant isDebugEnabled() check
[1;36m|[m * [35m|[m [31m|[m [35m|[m [33m44d1419b[m Delete malformed background-color CSS style
[1;36m|[m * [35m|[m [31m|[m [35m|[m [33mb6c97d95[m Remove some redundant isDebugEnabled() checks
[1;36m|[m * [35m|[m [31m|[m [35m|[m [33mf7d01cbf[m Correct an SLF4J logger call
[1;36m|[m * [35m|[m [31m|[m [35m|[m [33m7561954d[m Fix misspellings
[1;36m|[m * [35m|[m [31m|[m [35m|[m [33mc411b81f[m Utilize parameterized logging and remove calls to toString()
* [31m|[m [35m|[m [31m|[m [35m|[m   [33m6de298e6[m Merge pull request #1010 from qiangdavidliu/master
[31m|[m[33m\[m [31m\[m [35m\[m [31m\[m [35m\[m  
[31m|[m [33m|[m[31m/[m [35m/[m [31m/[m [35m/[m  
[31m|[m[31m/[m[33m|[m [35m|[m [31m|[m [35m|[m   
[31m|[m * [35m|[m [31m|[m [35m|[m [33mca1eab77[m better log msg
[31m|[m * [35m|[m [31m|[m [35m|[m [33mb7d62731[m catch potential exceptions around EurekaEventListener notify.
[31m|[m[31m/[m [35m/[m [31m/[m [35m/[m  
* [35m|[m [31m|[m [35m|[m   [33mdfbee33c[m[33m ([m[1;33mtag: v1.8.5[m[33m)[m Merge pull request #1009 from qiangdavidliu/master
[34m|[m[35m\[m [35m\[m [31m\[m [35m\[m  
[34m|[m * [35m|[m [31m|[m [35m|[m [33m0ec15d16[m Add default impl to two interface methods introduced recently.
[34m|[m[34m/[m [35m/[m [31m/[m [35m/[m  
* [35m|[m [31m|[m [35m|[m   [33m6efea5d3[m Merge pull request #1001 from mattnelson/discovery_config_ssl_hostname
[35m|[m[1;31m\[m [35m\[m [31m\[m [35m\[m  
[35m|[m [1;31m|[m[35m_[m[35m|[m[35m_[m[31m|[m[35m/[m  
[35m|[m[35m/[m[1;31m|[m [35m|[m [31m|[m   
[35m|[m * [35m|[m [31m|[m [33mf10b3741[m Restore passive method signatures. Add missing log parameter binding.
[35m|[m * [35m|[m [31m|[m [33md8acdba7[m Support configuration of custom SSLContext/HostnameVerifier
[35m|[m[35m/[m [35m/[m [31m/[m  
* [35m|[m [31m|[m   [33md4fcefc0[m[33m ([m[1;33mtag: v1.8.4[m[33m)[m Merge pull request #997 from qiangdavidliu/master
[1;32m|[m[1;33m\[m [35m\[m [31m\[m  
[1;32m|[m * [35m|[m [31m|[m [33mbdcf59c5[m update TimedSupervisorTask log levels.
[1;32m|[m * [35m|[m [31m|[m [33mf5c31eee[m Add ability to fail fast in DiscoveryClient construction if an initial registration attempt fails.
[1;32m|[m * [35m|[m [31m|[m [33m7ef6aaf7[m Move TimedSupervisorTask logs to debug level as they are already measured by metrics.
[1;32m|[m[1;32m/[m [35m/[m [31m/[m  
* [35m|[m [31m|[m   [33md2dbee8a[m[33m ([m[1;33mtag: v1.8.3[m[33m)[m Merge pull request #994 from qiangdavidliu/master
[1;34m|[m[1;35m\[m [35m\[m [31m\[m  
[1;34m|[m * [35m|[m [31m|[m [33m5125788e[m tune down the slightly aggressive update to default apache http timeouts
[1;34m|[m * [35m|[m [31m|[m [33m740409eb[m also tune some other timeout defaults
[1;34m|[m * [35m|[m [31m|[m [33md47273b6[m update the connect and read timeout for remote region fetch client
[1;34m|[m * [35m|[m [31m|[m [33mf49e3b7a[m fix some names and log wording
[1;34m|[m * [35m|[m [31m|[m [33m68bdc17d[m Fix a race condition on the server remoteRegionRegistry where the cached applications ref may be set to null if the network fetch fails.
* [1;35m|[m [35m|[m [31m|[m [33m30a85dc3[m[33m ([m[1;33mtag: v1.8.2[m[33m)[m Merge pull request #989 from qiangdavidliu/master
[1;36m|[m[1;35m\[m[1;35m|[m [35m|[m [31m|[m 
[1;36m|[m * [35m|[m [31m|[m [33mb45db1cb[m Add tests
[1;36m|[m * [35m|[m [31m|[m [33mc281f5c2[m Add a config to control whether explicit unregister should happen on client shutdown.
[1;36m|[m[1;36m/[m [35m/[m [31m/[m  
* [35m|[m [31m|[m   [33ma2a75188[m Merge pull request #985 from qiangdavidliu/master
[32m|[m[33m\[m [35m\[m [31m\[m  
[32m|[m * [35m|[m [31m|[m [33me3b878f8[m check call success/failure before unsetting isDirty
[32m|[m[32m/[m [35m/[m [31m/[m  
* [35m|[m [31m|[m   [33m64f973f6[m[33m ([m[1;33mtag: v1.8.1[m[33m)[m Merge pull request #984 from qiangdavidliu/master
[34m|[m[35m\[m [35m\[m [31m\[m  
[34m|[m * [35m\[m [31m\[m   [33m9cb176fb[m Merge remote-tracking branch 'upstream/master'
[34m|[m [36m|[m[34m\[m [35m\[m [31m\[m  
[34m|[m [36m|[m[34m/[m [35m/[m [31m/[m  
[34m|[m[34m/[m[36m|[m [35m|[m [31m|[m   
* [36m|[m [35m|[m [31m|[m   [33md8265bb8[m Merge pull request #977 from twicksell/publishCandidatesToNetflixRepo
[35m|[m[1;33m\[m [36m\[m [35m\[m [31m\[m  
[35m|[m [1;33m|[m[35m_[m[36m|[m[35m/[m [31m/[m  
[35m|[m[35m/[m[1;33m|[m [36m|[m [31m|[m   
[35m|[m * [36m|[m [31m|[m [33m03342f00[m add travis config option to publish candidate releases to netflix candidate repo
[35m|[m[35m/[m [36m/[m [31m/[m  
[35m|[m * [31m|[m [33m3b0a9363[m - in registry renew where status override is applied, also do not update the dirty timestamp - for client registration triggered by a 404 heartbeat failure, eagerly update dirty timestamp
[35m|[m * [31m|[m [33m28fcb79c[m for status override set and delete, do not update the dirtyTimestamp unless specified to do so.
[35m|[m * [31m|[m [33m91a30fa1[m Add guard against missing ipaddr at registration time
[35m|[m[35m/[m [31m/[m  
* [31m|[m   [33m3677ac7d[m[33m ([m[1;33mtag: v1.8.0-rc.1[m[33m, [m[1;33mtag: v1.8.0[m[33m)[m Merge pull request #970 from tcellucci/memory_tuning_pr
[1;34m|[m[1;35m\[m [31m\[m  
[1;34m|[m * [31m|[m [33m93995712[m memory tuning
* [1;35m|[m [31m|[m   [33m7eb8c400[m Merge pull request #960 from borlafu/master
[1;35m|[m[31m\[m [1;35m\[m [31m\[m  
[1;35m|[m [31m|[m[1;35m/[m [31m/[m  
[1;35m|[m[1;35m/[m[31m|[m [31m|[m   
[1;35m|[m * [31m|[m [33me2e16b27[m Updated XStream to 1.4.10 in eureka-core too
[1;35m|[m * [31m|[m [33m0ebc61ba[m Removed workaround for CVE-2017-7957 and updated XStream to 1.4.10
[1;35m|[m * [31m|[m [33m39797e3a[m Added workaround for CVE-2017-7957 affecting XStream
[1;35m|[m[1;35m/[m [31m/[m  
[1;35m|[m [31m|[m * [33md4491c22[m[33m ([m[1;32mv1.7.2[m[33m)[m 测试代码入口手动配置
[1;35m|[m [31m|[m * [33m5cb34788[m 构建Url distributionUrl=https\://services.gradle.org/distributions/gradle-6.8.3-bin.zip
[1;35m|[m [31m|[m *   [33mff66f014[m[33m ([m[1;33mtag: v1.7.2[m[33m)[m Merge pull request #1044 from qiangdavidliu/v1.7.x
[1;35m|[m [31m|[m [33m|[m[34m\[m  
[1;35m|[m [31m|[m [33m|[m * [33m5f0769fd[m Verify is scheduler is active before submit
[1;35m|[m [31m|[m [33m|[m[33m/[m  
[1;35m|[m [31m|[m * [33madb0091c[m[33m ([m[1;33mtag: v1.7.1[m[33m)[m reset idea java version to 1.7
[1;35m|[m [31m|[m * [33m851222bd[m Merge pull request #985 from qiangdavidliu/master
[1;35m|[m [31m|[m * [33m69fccfbb[m Merge pull request #984 from qiangdavidliu/master
[1;35m|[m [31m|[m[1;35m/[m  
[1;35m|[m[1;35m/[m[31m|[m   
* [31m|[m   [33m010dc336[m[33m ([m[1;33mtag: v1.7.0[m[33m)[m Merge pull request #950 from qiangdavidliu/master
[35m|[m[36m\[m [31m\[m  
[35m|[m * [31m|[m [33m8df4be73[m update a flaky test
[35m|[m[35m/[m [31m/[m  
* [31m|[m   [33mff9b0d71[m Merge pull request #949 from qiangdavidliu/master
[1;31m|[m[1;32m\[m [31m\[m  
[1;31m|[m * [31m|[m [33m2c66385f[m clean up
[1;31m|[m * [31m|[m [33m76f25f6f[m add pre registration handler
[1;31m|[m * [31m|[m [33m5820e488[m record the client init time as metadata in registration
[1;31m|[m[1;31m/[m [31m/[m  
* [31m|[m   [33m35443bf0[m Merge pull request #947 from qiangdavidliu/master
[1;33m|[m[1;34m\[m [31m\[m  
[1;33m|[m * [31m|[m [33m5c85f620[m fix another race in a test
[1;33m|[m * [31m|[m [33mef7b6fe1[m add more checks to test
[1;33m|[m * [31m|[m [33m6f3f997d[m add a guard to PR #934
[1;33m|[m[1;33m/[m [31m/[m  
* [31m|[m   [33m6c7824d8[m Merge pull request #946 from qiangdavidliu/master
[1;35m|[m[1;36m\[m [31m\[m  
[1;35m|[m * [31m\[m   [33m9c88b5c4[m Merge remote-tracking branch 'upstream/master'
[1;35m|[m [31m|[m[32m\[m [31m\[m  
[1;35m|[m * [32m|[m [31m|[m [33m15f52351[m fix a few tests
[1;35m|[m * [32m|[m [31m|[m [33m47c90b37[m update dependencies
* [32m|[m [32m|[m [31m|[m   [33mf0ad29d9[m Merge pull request #934 from jebeaudet/fix-conflict-response-with-no-body
[32m|[m[34m\[m [32m\[m [32m\[m [31m\[m  
[32m|[m [34m|[m[32m_[m[32m|[m[32m/[m [31m/[m  
[32m|[m[32m/[m[34m|[m [32m|[m [31m|[m   
[32m|[m * [32m|[m [31m|[m [33mb94c4f46[m Add the InstanceInfo to the response in case of 409 status code
* [34m|[m [32m|[m [31m|[m   [33m1ac04e1d[m Merge pull request #943 from weswalker125/master
[35m|[m[36m\[m [34m\[m [32m\[m [31m\[m  
[35m|[m * [34m|[m [32m|[m [31m|[m [33mf29f639f[m allow independent SSL context for Jersey client (alternative to system SSL context).
* [36m|[m [34m|[m [32m|[m [31m|[m   [33m7640ec68[m Merge pull request #922 from bistros/master
[36m|[m[1;32m\[m [36m\[m [34m\[m [32m\[m [31m\[m  
[36m|[m [1;32m|[m[36m/[m [34m/[m [32m/[m [31m/[m  
[36m|[m[36m/[m[1;32m|[m [34m|[m [32m|[m [31m|[m   
[36m|[m * [34m|[m [32m|[m [31m|[m [33m1437a3bb[m Improving conditional statement for map
[36m|[m [34m|[m[34m/[m [32m/[m [31m/[m  
* [34m|[m [32m|[m [31m|[m   [33ma8a136f1[m Merge pull request #931 from macsj200/patch-1
[34m|[m[1;34m\[m [34m\[m [32m\[m [31m\[m  
[34m|[m [1;34m|[m[34m/[m [32m/[m [31m/[m  
[34m|[m[34m/[m[1;34m|[m [32m|[m [31m|[m   
[34m|[m * [32m|[m [31m|[m [33m0123a4d6[m Fix link rendering in README.md
[34m|[m[34m/[m [32m/[m [31m/[m  
* [32m|[m [31m|[m   [33m32d79ee8[m Merge pull request #920 from ekesken/fix-non-ec2-eureka-client-module-test-for-ec2-instances
[31m|[m[1;36m\[m [32m\[m [31m\[m  
[31m|[m [1;36m|[m[31m_[m[32m|[m[31m/[m  
[31m|[m[31m/[m[1;36m|[m [32m|[m   
[31m|[m * [32m|[m [33m0c2f9e05[m made NonEc2EurekaClientModuleTest pass at an ec2 instance too
[31m|[m[31m/[m [32m/[m  
* [32m|[m   [33m64e5e2ee[m[33m ([m[1;33mtag: v1.6.2[m[33m)[m Merge pull request #899 from tcellucci/applicationConcurrencyBug
[31m|[m[32m\[m [32m\[m  
[31m|[m * [32m|[m [33m31fba951[m fix concurrency bug found in getInstancesAsIsFromEureka()
[31m|[m[31m/[m [32m/[m  
* [32m|[m   [33mb07cf946[m Merge pull request #897 from mattnelson/governator_deps
[33m|[m[34m\[m [32m\[m  
[33m|[m * [32m|[m [33m83462325[m Scope governator dependencies to reflect actual usage
* [34m|[m [32m|[m   [33md71c9fa5[m Merge pull request #895 from RichiMueller/master
[35m|[m[36m\[m [34m\[m [32m\[m  
[35m|[m * [34m|[m [32m|[m [33m80b5cb7e[m Fixed missing url in log output
[35m|[m [34m|[m[34m/[m [32m/[m  
* [34m|[m [32m|[m   [33m65d63590[m Merge pull request #876 from klues/master
[34m|[m[1;32m\[m [34m\[m [32m\[m  
[34m|[m [1;32m|[m[34m/[m [32m/[m  
[34m|[m[34m/[m[1;32m|[m [32m|[m   
[34m|[m * [32m|[m [33m43a914cf[m Revert "added eureka-client-1.4.11.1 containing fix to prevent memory leak (commit fbd2f5a3ea33c95563e624131be4c0737447865f )"
[34m|[m * [32m|[m [33m19ed9118[m added eureka-client-1.4.11.1 containing fix to prevent memory leak (commit fbd2f5a3ea33c95563e624131be4c0737447865f )
[34m|[m * [32m|[m [33mfbd2f5a3[m use shutdownNow() instead of shutdown()
* [1;32m|[m [32m|[m   [33ma7a8d278[m[33m ([m[1;33mtag: v1.6.1[m[33m)[m Merge pull request #874 from william-tran/1.4.x
[1;32m|[m[1;34m\[m [1;32m\[m [32m\[m  
[1;32m|[m [1;34m|[m[1;32m/[m [32m/[m  
[1;32m|[m[1;32m/[m[1;34m|[m [32m|[m   
[1;32m|[m * [32m|[m [33m3a744ee8[m[33m ([m[1;33mtag: v1.4.12[m[33m)[m Support HTTPS requests to servers that use multiple certificates
* [1;34m|[m [32m|[m   [33m0ee61abb[m Merge pull request #869 from spencergibb/info-mgr-static-ref
[32m|[m[1;36m\[m [1;34m\[m [32m\[m  
[32m|[m [1;36m|[m[32m_[m[1;34m|[m[32m/[m  
[32m|[m[32m/[m[1;36m|[m [1;34m|[m   
[32m|[m * [1;34m|[m [33m6b170fdb[m Remove assignment of instanceInfo from static instance.
[32m|[m[32m/[m [1;34m/[m  
* [1;34m|[m   [33me4fb3f69[m Merge pull request #862 from mattnelson/guice_provider
[31m|[m[32m\[m [1;34m\[m  
[31m|[m * [1;34m|[m [33m839dde5d[m Convert all remaining guice provider references to javax
* [32m|[m [1;34m|[m   [33m90e57c2f[m Merge pull request #861 from hieurl/master
[32m|[m[34m\[m [32m\[m [1;34m\[m  
[32m|[m [34m|[m[32m/[m [1;34m/[m  
[32m|[m[32m/[m[34m|[m [1;34m|[m   
[32m|[m * [1;34m|[m [33m1f619bec[m - fix typo in eureka-client/src/main/java/com/netflix/discovery/PropertyBasedClientConfigConstants.java
[32m|[m[32m/[m [1;34m/[m  
* [1;34m|[m   [33m9909951b[m[33m ([m[1;33mtag: v1.6.0-rc.1[m[33m, [m[1;33mtag: v1.6.0[m[33m)[m Merge pull request #855 from Netflix/contrib/jersey2-compatibility
[35m|[m[36m\[m [1;34m\[m  
[35m|[m * [1;34m\[m   [33m7cb2e474[m Merge remote-tracking branch 'origin/master' into contrib/jersey2-compatibility
[35m|[m [1;31m|[m[35m\[m [1;34m\[m  
[35m|[m [1;31m|[m[35m/[m [1;34m/[m  
[35m|[m[35m/[m[1;31m|[m [1;34m|[m   
* [1;31m|[m [1;34m|[m   [33mc7d42389[m[33m ([m[1;33mtag: v1.5.6[m[33m)[m Merge pull request #853 from twicksell/updateXstream
[1;33m|[m[1;34m\[m [1;31m\[m [1;34m\[m  
[1;33m|[m * [1;31m|[m [1;34m|[m [33m54542893[m update XStream to 1.4.9 to patch XXE vulnerability
[1;33m|[m[1;33m/[m [1;31m/[m [1;34m/[m  
* [1;31m|[m [1;34m|[m   [33me41dac4f[m Merge pull request #784 from mattnelson/server_status_healthy
[1;35m|[m[1;36m\[m [1;31m\[m [1;34m\[m  
[1;35m|[m * [1;31m|[m [1;34m|[m [33m9950fcea[m fix test failures
[1;35m|[m * [1;31m|[m [1;34m|[m [33m6d441f8c[m Merge pull request #831 from mattnelson/ip_replication
[1;35m|[m * [1;31m|[m [1;34m|[m [33mbc336a27[m address PR comments
[1;35m|[m * [1;31m|[m [1;34m|[m [33mbf6aa569[m Support configurable replica healthy status
[1;35m|[m * [1;31m|[m [1;34m|[m [33mbdfa6e5c[m Support healthy status on server StatusInfo
* [1;36m|[m [1;31m|[m [1;34m|[m   [33m203fa010[m[33m ([m[1;33mtag: v1.5.5[m[33m)[m Merge pull request #852 from qiangdavidliu/master
[31m|[m[32m\[m [1;36m\[m [1;31m\[m [1;34m\[m  
[31m|[m * [1;36m|[m [1;31m|[m [1;34m|[m [33m49c99fb8[m synchronize a few usecases of CloudInstanceConfig to be available to eureka-client-archaius2
* [32m|[m [1;36m|[m [1;31m|[m [1;34m|[m [33m44c138ef[m[33m ([m[1;33mtag: v1.5.4[m[33m)[m Merge pull request #849 from qiangdavidliu/master
[33m|[m[32m\[m[32m|[m [1;36m|[m [1;31m|[m [1;34m|[m 
[33m|[m * [1;36m|[m [1;31m|[m [1;34m|[m [33m3f3fbb17[m remove unused imports
[33m|[m * [1;36m|[m [1;31m|[m [1;34m|[m [33m579d45ab[m Add optional args to ApplicationInfoManager
* [34m|[m [1;36m|[m [1;31m|[m [1;34m|[m [33m435f2312[m[33m ([m[1;33mtag: v1.5.3[m[33m)[m Merge pull request #848 from qiangdavidliu/master
[35m|[m[34m\[m[34m|[m [1;36m|[m [1;31m|[m [1;34m|[m 
[35m|[m * [1;36m|[m [1;31m|[m [1;34m|[m [33mcf61794f[m archaius2-guice is only needed as a testCompile
[35m|[m * [1;36m|[m [1;31m|[m [1;34m|[m [33mfe4d4fe2[m update archaius2 to 2.1.7
* [36m|[m [1;36m|[m [1;31m|[m [1;34m|[m [33m02fb263c[m[33m ([m[1;33mtag: v1.5.2[m[33m)[m Merge pull request #847 from qiangdavidliu/master
[1;31m|[m[36m\[m[36m|[m [1;36m|[m [1;31m|[m [1;34m|[m 
[1;31m|[m * [1;36m|[m [1;31m|[m [1;34m|[m [33me67332f8[m update to archaius2 2.1.6
* [1;32m|[m [1;36m|[m [1;31m|[m [1;34m|[m [33m4f24d9dc[m[33m ([m[1;33mtag: v1.5.1[m[33m)[m Merge pull request #846 from qiangdavidliu/master
[1;33m|[m[1;32m\[m[1;32m|[m [1;36m|[m [1;31m|[m [1;34m|[m 
[1;33m|[m * [1;36m|[m [1;31m|[m [1;34m|[m [33m5bae6eb8[m renaming internal class
[1;33m|[m * [1;36m|[m [1;31m|[m [1;34m|[m [33m4dcfba7d[m clean up
[1;33m|[m * [1;36m|[m [1;31m|[m [1;34m|[m [33m60aad6b1[m Remove uses of archaius2 config.getPrefixedView() as it has issues when combined with config interpolation.
[1;33m|[m[1;33m/[m [1;36m/[m [1;31m/[m [1;34m/[m  
[1;33m|[m [1;36m|[m * [1;34m|[m   [33m717643eb[m Merge pull request #845 from qiangdavidliu/contrib/jersey2
[1;33m|[m [1;36m|[m [1;35m|[m[1;36m\[m [1;34m\[m  
[1;33m|[m [1;36m|[m [1;35m|[m * [1;34m\[m   [33mfed8381a[m Merge remote-tracking branch 'origin/master' into contrib/jersey2
[1;33m|[m [1;36m|[m [1;35m|[m [31m|[m[1;33m\[m [1;34m\[m  
[1;33m|[m [1;36m|[m[1;33m_[m[1;35m|[m[1;33m_[m[31m|[m[1;33m/[m [1;34m/[m  
[1;33m|[m[1;33m/[m[1;36m|[m [1;35m|[m [31m|[m [1;34m|[m   
* [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m   [33m5e462f73[m[33m ([m[1;33mtag: v1.5.0-rc.4[m[33m, [m[1;33mtag: v1.5.0[m[33m)[m Merge pull request #844 from qiangdavidliu/master
[33m|[m[34m\[m [1;36m\[m [1;35m\[m [31m\[m [1;34m\[m  
[33m|[m * [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m [33m6cb54752[m Instance config should only add metadata if value is valid
[33m|[m[33m/[m [1;36m/[m [1;35m/[m [31m/[m [1;34m/[m  
* [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m   [33m44671986[m[33m ([m[1;33mtag: v1.5.0-rc.3[m[33m)[m Merge pull request #843 from qiangdavidliu/master
[35m|[m[36m\[m [1;36m\[m [1;35m\[m [31m\[m [1;34m\[m  
[35m|[m * [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m [33mbb4966b2[m PR feedback
[35m|[m * [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m [33me53eb00e[m - Refactoring AmazonInfo refresh into common class - Minor clean ups
* [36m|[m [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m [33m2198475d[m[33m ([m[1;33mtag: v1.5.0-rc.2[m[33m)[m Merge pull request #842 from qiangdavidliu/master
[1;31m|[m[36m\[m[36m|[m [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m 
[1;31m|[m * [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m [33mbbd12c04[m update archaius2 version
* [1;32m|[m [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m [33m2e329687[m[33m ([m[1;33mtag: v1.5.0-rc.1[m[33m)[m Merge pull request #841 from qiangdavidliu/master
[1;33m|[m[1;32m\[m[1;32m|[m [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m 
[1;33m|[m * [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m [33m6a550649[m remove governator dep for eureka-client
[1;33m|[m[1;33m/[m [1;36m/[m [1;35m/[m [31m/[m [1;34m/[m  
* [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m   [33mae3b71d5[m Merge pull request #833 from qiangdavidliu/archaius2-client-compatibility
[1;35m|[m[1;36m\[m [1;36m\[m [1;35m\[m [31m\[m [1;34m\[m  
[1;35m|[m * [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m [33mb631e6a7[m fix typos
[1;35m|[m * [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m [33ma52b978e[m final fix ups for config
[1;35m|[m * [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m [33m7110b3f7[m minor fix to make things more configurable
[1;35m|[m * [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m [33md4802215[m Adding automatic detection of EC2 envionment for creating the InstanceConfig, with configurable override.
[1;35m|[m * [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m [33mad43c4d2[m revert to old way to "hack" in support for DiscoveryManager
[1;35m|[m * [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m [33m29f26d60[m Rename EC2EurekaClientModuleTest.java to Ec2EurekaClientModuleTest.java
[1;35m|[m * [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m [33maf015742[m method was renamed by test was not.
[1;35m|[m * [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m [33mc4eea826[m A better way to install Eureka via Guice, with configuration options.
[1;35m|[m * [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m [33mdc8eca7a[m Fix DiscoveryManager so that the components (the configs and the client) are not forced to be eagerly instantiated due to the requeststaticinjection.
[1;35m|[m * [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m [33m50c9122d[m PR updates
[1;35m|[m * [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m   [33m93bacfc7[m Merge remote-tracking branch 'upstream/master' into archaius2-client-compatibility
[1;35m|[m [31m|[m[32m\[m [1;36m\[m [1;35m\[m [31m\[m [1;34m\[m  
[1;35m|[m * [32m|[m [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m [33md02ed8f1[m Proper archaius2 integration for eureka-client
[1;35m|[m * [32m|[m [1;36m|[m [1;35m|[m [31m|[m [1;34m|[m   [33m9999fa8f[m Merge remote-tracking branch 'upstream/master'
[1;35m|[m [33m|[m[1;34m\[m [32m\[m [1;36m\[m [1;35m\[m [31m\[m [1;34m\[m  
[1;35m|[m [33m|[m [1;34m|[m [32m|[m[1;34m_[m[1;36m|[m[1;34m_[m[1;35m|[m[1;34m_[m[31m|[m[1;34m/[m  
[1;35m|[m [33m|[m [1;34m|[m[1;34m/[m[32m|[m [1;36m|[m [1;35m|[m [31m|[m   
[1;35m|[m * [1;34m|[m [32m|[m [1;36m|[m [1;35m|[m [31m|[m   [33mfb6eea6f[m Merge remote-tracking branch 'upstream/master'
[1;35m|[m [35m|[m[36m\[m [1;34m\[m [32m\[m [1;36m\[m [1;35m\[m [31m\[m  
* [35m|[m [36m\[m [1;34m\[m [32m\[m [1;36m\[m [1;35m\[m [31m\[m   [33m46cdca2f[m Merge pull request #838 from d-sauer/improvement/TimedSupervisorTask
[1;31m|[m[1;32m\[m [35m\[m [36m\[m [1;34m\[m [32m\[m [1;36m\[m [1;35m\[m [31m\[m  
[1;31m|[m * [35m|[m [36m|[m [1;34m|[m [32m|[m [1;36m|[m [1;35m|[m [31m|[m [33m7f8da1f7[m Don't schedule TimeSupervisorTask if scheduler is shutting down. Additional logging in case that executor and scheduler are shutting down.
[1;31m|[m[1;31m/[m [35m/[m [36m/[m [1;34m/[m [32m/[m [1;36m/[m [1;35m/[m [31m/[m  
* [35m|[m [36m|[m [1;34m|[m [32m|[m [1;36m|[m [1;35m|[m [31m|[m   [33me321526c[m Merge pull request #835 from spencergibb/status-info-static-singleton
[32m|[m[1;34m\[m [35m\[m [36m\[m [1;34m\[m [32m\[m [1;36m\[m [1;35m\[m [31m\[m  
[32m|[m [1;34m|[m[32m_[m[35m|[m[32m_[m[36m|[m[32m_[m[1;34m|[m[32m/[m [1;36m/[m [1;35m/[m [31m/[m  
[32m|[m[32m/[m[1;34m|[m [35m|[m [36m|[m [1;34m|[m [1;36m|[m [1;35m|[m [31m|[m   
[32m|[m * [35m|[m [36m|[m [1;34m|[m [1;36m|[m [1;35m|[m [31m|[m [33mf40f54a0[m Remove use of deprecated static accessor.
[32m|[m[32m/[m [35m/[m [36m/[m [1;34m/[m [1;36m/[m [1;35m/[m [31m/[m  
[32m|[m [35m|[m [36m|[m [1;34m|[m [1;36m|[m * [31m|[m [33me8d458fb[m Merge pull request #832 from qiangdavidliu/contrib/jersey2
[32m|[m [35m|[m [36m|[m [1;34m|[m [1;36m|[m [1;35m|[m[31m\[m[31m|[m 
[32m|[m [35m|[m [36m|[m [1;34m|[m [1;36m|[m [1;35m|[m * [33me7062d24[m minor fix
[32m|[m [35m|[m [36m|[m [1;34m|[m [1;36m|[m [1;35m|[m * [33mc326567f[m PR comments
[32m|[m [35m|[m [36m|[m [1;34m|[m [1;36m|[m [1;35m|[m * [33mffb57f23[m clean up
[32m|[m [35m|[m [36m|[m [1;34m|[m [1;36m|[m [1;35m|[m * [33m944378a2[m Updates to jersey2 compatibility: - add missing client side filters - clean up interfaces to be standardising on javax.wx.rs - added README
[32m|[m [35m|[m [36m|[m [1;34m|[m [1;36m|[m [1;35m|[m[1;35m/[m  
[32m|[m [35m|[m [36m|[m [1;34m|[m [1;36m|[m *   [33mf2671f06[m Merge remote-tracking branch 'upstream/master' into contrib/jersey2
[32m|[m [35m|[m [36m|[m [1;34m|[m [1;36m|[m [31m|[m[32m\[m  
[32m|[m [35m|[m[32m_[m[36m|[m[32m_[m[1;34m|[m[32m_[m[1;36m|[m[32m_[m[31m|[m[32m/[m  
[32m|[m[32m/[m[35m|[m [36m|[m [1;34m|[m [1;36m|[m [31m|[m   
* [35m|[m [36m|[m [1;34m|[m [1;36m|[m [31m|[m   [33mc3b3cd78[m Merge pull request #831 from mattnelson/ip_replication
[1;34m|[m[34m\[m [35m\[m [36m\[m [1;34m\[m [1;36m\[m [31m\[m  
[1;34m|[m [34m|[m[1;34m_[m[35m|[m[1;34m_[m[36m|[m[1;34m/[m [1;36m/[m [31m/[m  
[1;34m|[m[1;34m/[m[34m|[m [35m|[m [36m|[m [1;36m|[m [31m|[m   
[1;34m|[m * [35m|[m [36m|[m [1;36m|[m [31m|[m [33me74be5fa[m Support eureka servers configured with IP addresses
[1;34m|[m[1;34m/[m [35m/[m [36m/[m [1;36m/[m [31m/[m  
[1;34m|[m [35m|[m [36m|[m [1;36m|[m * [33m620a6c27[m Merge pull request #821 from mattnelson/jersey2
[1;34m|[m [35m|[m[1;34m_[m[36m|[m[1;34m_[m[1;36m|[m[1;34m/[m[36m|[m 
[1;34m|[m[1;34m/[m[35m|[m [36m|[m [1;36m|[m [36m|[m 
[1;34m|[m [35m|[m [36m|[m [1;36m|[m * [33m7dbea2d1[m Address PR comments
[1;34m|[m [35m|[m [36m|[m [1;36m|[m * [33me7c8ad34[m fix broken junit
[1;34m|[m [35m|[m [36m|[m [1;36m|[m * [33m3ebc9be6[m Support jersey2 for client/server
* [35m|[m [36m|[m [1;36m|[m [36m|[m   [33m828eea04[m[33m ([m[1;33mtag: v1.4.11[m[33m)[m Merge pull request #824 from Benky/patch-1
[1;31m|[m[1;32m\[m [35m\[m [36m\[m [1;36m\[m [36m\[m  
[1;31m|[m * [35m|[m [36m|[m [1;36m|[m [36m|[m [33me3c377b0[m Fix typo in EurekaInstanceConfig
[1;31m|[m[1;31m/[m [35m/[m [36m/[m [1;36m/[m [36m/[m  
* [35m|[m [36m|[m [1;36m|[m [36m|[m   [33m3331f413[m[33m ([m[1;33mtag: v1.4.11-rc.1[m[33m)[m Merge pull request #817 from drtechniko/master
[1;33m|[m[1;34m\[m [35m\[m [36m\[m [1;36m\[m [36m\[m  
[1;33m|[m * [35m|[m [36m|[m [1;36m|[m [36m|[m [33m9d9c28b1[m Address review feedback.
[1;33m|[m * [35m|[m [36m|[m [1;36m|[m [36m|[m [33md82eca3f[m Clean up unused imports.
[1;33m|[m * [35m|[m [36m|[m [1;36m|[m [36m|[m [33mcd280cca[m Add an extra test case for ASG status.
[1;33m|[m * [35m|[m [36m|[m [1;36m|[m [36m|[m [33m7c718cb4[m Refactor AwsRegistry to use status override rules.
[1;33m|[m * [35m|[m [36m|[m [1;36m|[m [36m|[m [33mfbea7e90[m Add unit test for AwsInstanceRegistry.
[1;33m|[m * [35m|[m [36m|[m [1;36m|[m [36m|[m [33m9e07bf33[m Add instance status override rule framework.
[1;33m|[m * [35m|[m [36m|[m [1;36m|[m [36m|[m [33mdd785cb6[m Add rule chain for status overrides in Registry.
[1;33m|[m * [35m|[m [36m|[m [1;36m|[m [36m|[m [33ma5f39aed[m Improve test coverage for PeerAwareInstanceRegistry.
[1;33m|[m [36m|[m [35m|[m[36m_[m[36m|[m[36m_[m[1;36m|[m[36m/[m  
[1;33m|[m [36m|[m[36m/[m[35m|[m [36m|[m [1;36m|[m   
* [36m|[m [35m|[m [36m|[m [1;36m|[m   [33mba5741c7[m Merge pull request #822 from qiangdavidliu/master
[36m|[m[35m\[m [36m\[m [35m\[m [36m\[m [1;36m\[m  
[36m|[m [35m|[m [36m|[m[35m/[m [36m/[m [1;36m/[m  
[36m|[m [35m|[m[35m/[m[36m|[m [36m/[m [1;36m/[m   
[36m|[m [35m|[m[36m_[m[36m|[m[36m/[m [1;36m/[m    
[36m|[m[36m/[m[35m|[m [36m|[m [1;36m|[m     
[36m|[m * [36m|[m [1;36m|[m [33mf35b620c[m Moving experimental replication fix to default
[36m|[m * [36m|[m [1;36m|[m [33m45ca3ebb[m Check the sub-string value before trying to sub-string on it.
* [1;36m|[m [36m|[m [1;36m|[m   [33m0f89d2a3[m Merge pull request #819 from robertnosburn/master
[36m|[m[32m\[m [1;36m\[m [36m\[m [1;36m\[m  
[36m|[m [32m|[m[36m_[m[1;36m|[m[36m/[m [1;36m/[m  
[36m|[m[36m/[m[32m|[m [1;36m|[m [1;36m|[m   
[36m|[m * [1;36m|[m [1;36m|[m [33m802122f9[m Check the sub-string value before trying to sub-string on it.
[36m|[m[36m/[m [1;36m/[m [1;36m/[m  
* [1;36m|[m [1;36m|[m [33m5cf3c370[m[33m ([m[1;33mtag: v1.4.10-rc.1[m[33m, [m[1;33mtag: v1.4.10[m[33m)[m Merge pull request #813 from qiangdavidliu/master
[33m|[m[1;36m\[m[1;36m|[m [1;36m|[m 
[33m|[m * [1;36m|[m   [33m1e052021[m Merge remote-tracking branch 'upstream/master'
[33m|[m [35m|[m[33m\[m [1;36m\[m  
[33m|[m [35m|[m[33m/[m [1;36m/[m  
[33m|[m[33m/[m[35m|[m [1;36m|[m   
* [35m|[m [1;36m|[m   [33m25ce793a[m[33m ([m[1;33mtag: v1.4.9-rc.1[m[33m, [m[1;33mtag: v1.4.9[m[33m)[m Merge pull request #811 from qiangdavidliu/master
[1;31m|[m[1;32m\[m [35m\[m [1;36m\[m  
[1;31m|[m [1;32m|[m * [1;36m|[m [33m62bed88d[m Propagate systemSSL config for client all the way through
[1;31m|[m [1;32m|[m[1;32m/[m [1;36m/[m  
[1;31m|[m * [1;36m|[m [33me43d3117[m update comments
[1;31m|[m * [1;36m|[m [33mabd85e5b[m Fixing a potential registration race condition as descibed in issue #802. The "fix" is disabled under an experimental flag and will be tested before enabled by default.
[1;31m|[m * [1;36m|[m [33m914001d2[m Removing some experimental check as these features are now standard
[1;31m|[m[1;31m/[m [1;36m/[m  
* [1;36m|[m   [33m950b9634[m Merge pull request #808 from mattnelson/javax_inject_provider
[1;33m|[m[1;34m\[m [1;36m\[m  
[1;33m|[m * [1;36m|[m [33mc9aab66d[m Prefer javax.inject Provider over guice Provider for #807
* [1;34m|[m [1;36m|[m   [33m1aae7f0b[m Merge pull request #806 from qiangdavidliu/master
[1;34m|[m[1;36m\[m [1;34m\[m [1;36m\[m  
[1;34m|[m [1;36m|[m[1;34m/[m [1;36m/[m  
[1;34m|[m[1;34m/[m[1;36m|[m [1;36m|[m   
[1;34m|[m * [1;36m|[m [33med723e5a[m Adding start and stop for MeasuredRate
[1;34m|[m * [1;36m|[m [33mbe3bf725[m Fix (harmless) NPE at server startup due to init order on a metrics counter.
* [1;36m|[m [1;36m|[m   [33mb0659834[m Merge pull request #805 from vseguin/master
[31m|[m[32m\[m [1;36m\[m [1;36m\[m  
[31m|[m * [1;36m|[m [1;36m|[m [33mbec77fd0[m ! Fix erroneous connectionIdleTimeout value
[31m|[m[31m/[m [1;36m/[m [1;36m/[m  
* [1;36m|[m [1;36m|[m [33m32eba96c[m Updated Bintray API key
* [1;36m|[m [1;36m|[m [33m533ef3f2[m Merge pull request #801 from qiangdavidliu/master
[33m|[m[1;36m\[m[1;36m|[m [1;36m|[m 
[33m|[m * [1;36m|[m [33me1c5424b[m Move client side reconcile and log difference to debug loglevel. The information is already surfaced by a metric for real time monitoring.
[33m|[m * [1;36m|[m [33m890d1b3d[m Add additional instructions in example README to set demo server configs
[33m|[m * [1;36m|[m [33m8fc233f8[m minor fixup
[33m|[m * [1;36m|[m   [33ma2c31845[m Merge remote-tracking branch 'upstream/master'
[33m|[m [35m|[m[33m\[m [1;36m\[m  
[33m|[m [35m|[m[33m/[m [1;36m/[m  
[33m|[m[33m/[m[35m|[m [1;36m|[m   
* [35m|[m [1;36m|[m   [33m48f29ac1[m Merge pull request #800 from mattnelson/instance_info_future_ref
[1;31m|[m[1;32m\[m [35m\[m [1;36m\[m  
[1;31m|[m * [35m|[m [1;36m|[m [33m2feef176[m Handle on demand update within InstanceInfoReplicator initial delay
[1;31m|[m[1;31m/[m [35m/[m [1;36m/[m  
[1;31m|[m * [1;36m/[m [33m7cd3fecf[m - remove deprecated code form examples - add some info logs to surface info on client creation/shutdown completion
[1;31m|[m[1;31m/[m [1;36m/[m  
* [1;36m|[m   [33m8496a366[m[33m ([m[1;33mtag: v1.4.8[m[33m)[m Merge pull request #797 from qiangdavidliu/master
[1;33m|[m[1;34m\[m [1;36m\[m  
[1;33m|[m * [1;36m|[m [33mdbd10524[m clean up
[1;33m|[m * [1;36m|[m [33mb1ac90bb[m cleaner impl with fail faster as a configurable prop (enable by default)
[1;33m|[m * [1;36m|[m [33ma3e6a9c4[m Add fail fast option to AmazonInfo init (esp at bootstrap time) so that running with VPN will not unncecessarily cause long hang times waiting on each key's ReadTimeout.
* [1;34m|[m [1;36m|[m [33m254eb503[m Merge pull request #795 from qiangdavidliu/master
[1;35m|[m[1;34m\[m[1;34m|[m [1;36m|[m 
[1;35m|[m * [1;36m|[m [33m676846bc[m Using beta Travis trusty vm for builds (more cpu -> better for tests)
[1;35m|[m[1;35m/[m [1;36m/[m  
* [1;36m|[m   [33m99f264e2[m Merge pull request #787 from jc89/eni-aws-binder
[31m|[m[32m\[m [1;36m\[m  
[31m|[m * [1;36m|[m [33mab1db88c[m Added documentation to file header for ElasticNetworkInterfaceBinder.java
[31m|[m * [1;36m|[m [33mb698f3b3[m More comments in source
[31m|[m * [1;36m|[m [33m67b1913f[m Added ENI binder
[31m|[m [1;36m|[m[1;36m/[m  
* [1;36m|[m   [33m4d4a6134[m[33m ([m[1;33mtag: v1.4.7-rc.3[m[33m, [m[1;33mtag: v1.4.7[m[33m)[m Merge pull request #794 from qiangdavidliu/master
[33m|[m[34m\[m [1;36m\[m  
[33m|[m * [1;36m|[m [33m68dbf6f9[m minor test fix
[33m|[m[33m/[m [1;36m/[m  
* [1;36m|[m   [33maddf4b99[m Merge pull request #793 from qiangdavidliu/master
[35m|[m[36m\[m [1;36m\[m  
[35m|[m * [1;36m\[m   [33m0f34fb0e[m Merge remote-tracking branch 'upstream/master'
[35m|[m [1;31m|[m[35m\[m [1;36m\[m  
[35m|[m [1;31m|[m[35m/[m [1;36m/[m  
[35m|[m[35m/[m[1;31m|[m [1;36m|[m   
* [1;31m|[m [1;36m|[m   [33m4dc2471a[m Merge pull request #792 from qiangdavidliu/master
[1;33m|[m[1;34m\[m [1;31m\[m [1;36m\[m  
* [1;34m\[m [1;31m\[m [1;36m\[m   [33mf6963eed[m[33m ([m[1;33mtag: v1.4.7-rc.2[m[33m)[m Merge pull request #791 from qiangdavidliu/master
[1;35m|[m[1;36m\[m [1;34m\[m [1;31m\[m [1;36m\[m  
[1;35m|[m [1;36m|[m [1;34m|[m * [1;36m|[m [33m59447664[m ignore javadoc for now
[1;35m|[m [1;36m|[m [1;34m|[m[1;34m/[m [1;36m/[m  
[1;35m|[m [1;36m|[m * [1;36m/[m [33m8132223c[m update gradle version and netflixoss version to be compatible with travisCI
[1;35m|[m [1;36m|[m[1;36m/[m [1;36m/[m  
[1;35m|[m * [1;36m/[m [33m11199d69[m Supplement to #790 to check for null for DataCenterInfo.getName()
[1;35m|[m[1;35m/[m [1;36m/[m  
* [1;36m|[m   [33mef9d958f[m[33m ([m[1;33mtag: v1.4.7-rc.1[m[33m)[m Merge pull request #790 from qiangdavidliu/master
[31m|[m[32m\[m [1;36m\[m  
[31m|[m * [1;36m|[m [33m868ae65d[m tweak some test timeouts as travis seems much slower than cloudbees
[31m|[m * [1;36m|[m [33mb74a986b[m Add test case
[31m|[m * [1;36m|[m [33m43dc2051[m Revert earlier commit's delta fix as it'll mess with the hashcode logic. for now, just return localRegion if dataCenterInfo is missing.
[31m|[m * [1;36m|[m [33me9f787eb[m fix up log warn msg
[31m|[m * [1;36m|[m   [33mb0d1ceac[m Merge remote-tracking branch 'upstream/master'
[31m|[m [33m|[m[31m\[m [1;36m\[m  
[31m|[m [33m|[m[31m/[m [1;36m/[m  
[31m|[m[31m/[m[33m|[m [1;36m|[m   
* [33m|[m [1;36m|[m   [33m78554dd2[m Merge pull request #786 from qiangdavidliu/master
[35m|[m[36m\[m [33m\[m [1;36m\[m  
* [36m\[m [33m\[m [1;36m\[m   [33m56594687[m Merge pull request #789 from rspieldenner/travis
[1;36m|[m[1;32m\[m [36m\[m [33m\[m [1;36m\[m  
[1;36m|[m [1;32m|[m[1;36m_[m[36m|[m[1;36m_[m[33m|[m[1;36m/[m  
[1;36m|[m[1;36m/[m[1;32m|[m [36m|[m [33m|[m   
[1;36m|[m * [36m|[m [33m|[m [33m55014b10[m Travis conversion
[1;36m|[m[1;36m/[m [36m/[m [33m/[m  
* [36m|[m [33m|[m [33m1e1e1c83[m Update README.md
* [36m|[m [33m|[m   [33m1e2bc95e[m Merge pull request #779 from qiangdavidliu/master
[1;33m|[m[1;34m\[m [36m\[m [33m\[m  
[1;33m|[m [1;34m|[m [36m|[m * [33ma93c9e28[m Fixing an edge case if dataCenterInfo is null or DataCenterInfo.Name is null.
[1;33m|[m [1;34m|[m [36m|[m * [33m77a381ca[m Travis conversion
[1;33m|[m [1;34m|[m [36m|[m * [33m983cfcba[m Update README.md
[1;33m|[m [1;34m|[m [36m|[m[36m/[m  
[1;33m|[m [1;34m|[m * [33m91c2056f[m "touch" for a new commit to get a PR build under travis
[1;33m|[m [1;34m|[m * [33m052563cc[m Adding some utilities
[1;33m|[m [1;34m|[m[1;34m/[m  
[1;33m|[m * [33m2c0f80fb[m update server build default props.
[1;33m|[m[1;33m/[m  
*   [33mc10a35be[m Merge pull request #776 from qiangdavidliu/master
[1;35m|[m[1;36m\[m  
[1;35m|[m *   [33mf769de33[m Merge remote-tracking branch 'upstream/master'
[1;35m|[m [31m|[m[1;35m\[m  
[1;35m|[m [31m|[m[1;35m/[m  
[1;35m|[m[1;35m/[m[31m|[m   
* [31m|[m   [33m683379b5[m Merge pull request #773 from hieurl/master
[33m|[m[34m\[m [31m\[m  
[33m|[m * [31m|[m [33mabad0486[m - log info instead of throwing exception when unbind eip for instance without eip bound
[33m|[m * [31m|[m [33m53364d40[m Fix in EIPManager. If instance is not associated with one EIP, throw Exception instead proceed Reason: DescribeAddressRequest with null public ip returns list of all address If instance is not associated with one eip, Eureka will deassociate eip not belong to the instance
* [34m|[m [31m|[m   [33m80eb7106[m Merge pull request #774 from tbak/master
[34m|[m[36m\[m [34m\[m [31m\[m  
[34m|[m [36m|[m[34m/[m [31m/[m  
[34m|[m[34m/[m[36m|[m [31m|[m   
[34m|[m * [31m|[m [33m93b0b970[m Check if transport is null in DiscoveryClient#unregister
[34m|[m[34m/[m [31m/[m  
[34m|[m * [33m41060411[m Adding util class
[34m|[m * [33m88c61630[m reduce connect time out to hit aws metadata url
[34m|[m[34m/[m  
*   [33mbee851e4[m Merge pull request #771 from qiangdavidliu/master
[1;31m|[m[1;32m\[m  
[1;31m|[m * [33mf90b54f2[m add readme
[1;31m|[m * [33m1a4898e9[m fix up DI server to use governator
* [1;32m|[m [33mb2a36c80[m[33m ([m[1;33mtag: v1.4.6[m[33m)[m Merge pull request #769 from qiangdavidliu/master
[1;33m|[m[1;32m\[m[1;32m|[m 
[1;33m|[m * [33m666cd3c8[m back rev servo to 0.10.1 to be java7 compatible
[1;33m|[m[1;33m/[m  
*   [33m3a05eb3a[m[33m ([m[1;33mtag: v1.4.5[m[33m)[m Merge pull request #765 from tbak/master
[1;35m|[m[1;36m\[m  
[1;35m|[m * [33m8dae4fe0[m Fix issue #756 (restore HTTP authentication support)
[1;35m|[m[1;35m/[m  
*   [33mda2f9e5b[m[33m ([m[1;33mtag: v1.4.4[m[33m, [m[1;33mtag: v.1.4.4[m[33m)[m Merge pull request #763 from qiangdavidliu/master
[31m|[m[32m\[m  
[31m|[m * [33mca9883ee[m change deprecated governator-annotations to replacement (governator-api)
[31m|[m[31m/[m  
*   [33mefeba34a[m[33m ([m[1;33mtag: v1.4.3[m[33m)[m Merge pull request #761 from qiangdavidliu/master
[33m|[m[34m\[m  
[33m|[m * [33m6c155203[m Add additional logging for client transport resolution of eureka server info.
* [34m|[m [33m6ab1eb5b[m Merge pull request #760 from qiangdavidliu/master
[35m|[m[34m\[m[34m|[m 
[35m|[m * [33m497e743c[m Adding equals and hashcode to EurekaModule
* [36m|[m [33mf8dc873c[m[33m ([m[1;33mtag: v1.4.3-rc.2[m[33m)[m Merge pull request #759 from qiangdavidliu/master
[1;31m|[m[36m\[m[36m|[m 
[1;31m|[m * [33mafc770e7[m Add null check
[1;31m|[m * [33m9c92b316[m Adding an ondemand instanceInfo update trigger when new HealthCheckHandlers are registered with EurekaClient
[1;31m|[m[1;31m/[m  
*   [33me3d23bda[m[33m ([m[1;33mtag: v1.4.3-rc.1[m[33m)[m Merge pull request #757 from qiangdavidliu/master
[1;33m|[m[1;34m\[m  
[1;33m|[m * [33mfde5e6b7[m set instance status using applicationInfoManager instead of directly
[1;33m|[m[1;33m/[m  
*   [33m4faa3d9a[m Merge pull request #754 from william-tran/issue-753
[1;35m|[m[1;36m\[m  
[1;35m|[m * [33medc94a78[m Sleep during syncUp only if necessary
[1;35m|[m[1;35m/[m  
*   [33m46968f2c[m[33m ([m[1;33mtag: v1.4.2[m[33m)[m Merge pull request #752 from spencergibb/eureka-url-default-port
[31m|[m[32m\[m  
[31m|[m * [33mf5627f4d[m Only append port to serviceUrl if port >= 0
[31m|[m[31m/[m  
*   [33mb373dc59[m Merge pull request #751 from spencergibb/config-cluster-resolver-https
[33m|[m[34m\[m  
[33m|[m * [33m40014947[m Use getScheme() to compare against https.
[33m|[m[33m/[m  
*   [33m4533935b[m[33m ([m[1;33mtag: v1.4.2-rc.1[m[33m)[m Merge pull request #744 from tbak/master
[35m|[m[36m\[m  
[35m|[m * [33mf8e1b19a[m Fix for issue #702 (handle charset provided in Content-Type header) This PR (compared to the previouse, undone one #739) checks for entity types and is applied only to eureka specific data structures.
* [36m|[m   [33m53c225bc[m Merge pull request #749 from elandau/master
[1;31m|[m[1;32m\[m [36m\[m  
[1;31m|[m * [36m|[m [33mefacc02d[m more cleanup based on PR comments
[1;31m|[m * [36m|[m [33mbd2e63e9[m Update based on PR comments
[1;31m|[m * [36m|[m [33m9f6b89c5[m Cleanup from manual merge
[1;31m|[m * [36m|[m   [33m92726442[m Merge branch 'master' of https://github.com/Netflix/eureka
[1;31m|[m [1;33m|[m[1;31m\[m [36m\[m  
[1;31m|[m [1;33m|[m[1;31m/[m [36m/[m  
[1;31m|[m[1;31m/[m[1;33m|[m [36m|[m   
* [1;33m|[m [36m|[m   [33me49d9236[m[33m ([m[1;33mtag: v1.4.1-rc.1[m[33m, [m[1;33mtag: v1.4.1[m[33m)[m Merge pull request #747 from qiangdavidliu/master
[1;35m|[m[1;36m\[m [1;33m\[m [36m\[m  
[1;35m|[m * [1;33m|[m [36m|[m [33m99557924[m change log level
[1;35m|[m * [1;33m|[m [36m|[m [33me8ab9453[m add a fail safe
[1;35m|[m * [1;33m|[m [36m|[m [33ma0599f69[m updating AmazonInfo's refresh policy to be more lenient
[1;35m|[m[1;35m/[m [1;33m/[m [36m/[m  
* [1;33m|[m [36m|[m   [33m8019af3a[m Merge pull request #745 from qiangdavidliu/master
[31m|[m[32m\[m [1;33m\[m [36m\[m  
[31m|[m * [1;33m|[m [36m|[m [33ma9f39cc5[m tuning test timing
[31m|[m * [1;33m|[m [36m|[m [33m19a898cf[m update deprecation message
[31m|[m * [1;33m|[m [36m|[m [33mfbcd7c6d[m more test clean up
[31m|[m * [1;33m|[m [36m|[m [33m27c40a46[m better named threads
[31m|[m * [1;33m|[m [36m|[m [33mfc88abe6[m log msg fix
[31m|[m * [1;33m|[m [36m|[m [33maf1b15e3[m do clean up in tests
[31m|[m * [1;33m|[m [36m|[m [33meb2cd162[m fix some timing issues in test
[31m|[m * [1;33m|[m [36m|[m [33mbd7b02e5[m do proper clean up for test
[31m|[m * [1;33m|[m [36m|[m [33m32eed809[m comment update
[31m|[m * [1;33m|[m [36m|[m [33mdde3e5a2[m Fixing compositeBootstrapResolver to load from a remoteCall
[31m|[m * [1;33m|[m [36m|[m [33m19e8c880[m Adding option for eureka's application resolver to use ips instead of hostnames
[31m|[m * [1;33m|[m [36m|[m [33m543ab954[m Adding an option to bootstrap with local registry content instead of resolving dns, if local registry content is available.
[31m|[m [36m|[m [1;33m|[m[36m/[m  
[31m|[m [36m|[m[36m/[m[1;33m|[m   
* [36m|[m [1;33m|[m   [33m6fc1d471[m Merge pull request #746 from spencergibb/java7
[36m|[m[34m\[m [36m\[m [1;33m\[m  
[36m|[m [34m|[m[36m/[m [1;33m/[m  
[36m|[m[36m/[m[34m|[m [1;33m|[m   
[36m|[m * [1;33m|[m [33mdfa3b272[m Move back to java7 compatibility.
[36m|[m[36m/[m [1;33m/[m  
* [1;33m|[m   [33m6d6f9602[m[33m ([m[1;33mtag: v1.4.0-rc.1[m[33m, [m[1;33mtag: v1.4.0[m[33m)[m Merge pull request #743 from tbak/master
[35m|[m[36m\[m [1;33m\[m  
[35m|[m * [1;33m|[m [33m0106164d[m Revert fix for issue #702 due to external dependencies on DiscoveryJerseyProvider
[35m|[m[35m/[m [1;33m/[m  
* [1;33m|[m   [33mb837ce3b[m Merge pull request #742 from qiangdavidliu/master
[1;31m|[m[1;32m\[m [1;33m\[m  
[1;31m|[m * [1;33m|[m [33m605ea9a0[m Fix async resolver to use daemon threads
[1;31m|[m[1;31m/[m [1;33m/[m  
* [1;33m|[m   [33m21e34390[m Merge pull request #741 from qiangdavidliu/1.x-code-cleanup
[1;33m|[m[1;34m\[m [1;33m\[m  
[1;33m|[m * [1;33m|[m [33m01bd2a20[m move transport factory into jersey specific package
[1;33m|[m * [1;33m|[m [33mbadfc7bb[m Move legacy transport builder into legacy class
[1;33m|[m * [1;33m|[m [33me63a5cde[m do test clean up
[1;33m|[m * [1;33m|[m [33m9b7755d9[m removing fixme (fixed)
[1;33m|[m * [1;33m|[m [33mfb709f61[m removing extra whitespace
[1;33m|[m * [1;33m|[m [33m85d2770f[m Removing old client transport in favour of the (no longer) experimental transport.
* [1;34m|[m [1;33m|[m   [33m0db6d8e9[m Merge pull request #739 from tbak/master
[1;34m|[m[1;36m\[m [1;34m\[m [1;33m\[m  
[1;34m|[m [1;36m|[m[1;34m/[m [1;33m/[m  
[1;34m|[m[1;34m/[m[1;36m|[m [1;33m|[m   
[1;34m|[m * [1;33m|[m [33mfa237dd9[m Use XStream instead of Jackson for XML encoding to avoid CLASSPATH issues as jackson-dataformat-xml is a provided dependency We will get rid of XStream when doing bigger rewrite of eureka-client.
[1;34m|[m * [1;33m|[m [33m76fe1a48[m Check if servo monitor is registered prior to removing it (issue #704)
[1;34m|[m * [1;33m|[m [33m0de0ceed[m Fix for issue #702 (handle charset provided in Content-Type header)
[1;34m|[m[1;34m/[m [1;33m/[m  
* [1;33m|[m   [33mecda2802[m[33m ([m[1;33mtag: v1.3.8-rc.1[m[33m, [m[1;33mtag: v1.3.8[m[33m)[m Merge pull request #736 from elandau/master
[31m|[m[32m\[m [1;33m\[m  
[31m|[m [32m|[m * [33m51a90f7e[m Expose EurekaClient events via a new EurekaEventListener API.
[31m|[m [32m|[m[32m/[m  
[31m|[m * [33ma7636c3c[m Update to archaius2 2.0.0-rc.36
[31m|[m[31m/[m  
*   [33m7791c16b[m Merge pull request #734 from dcaba/appender_issue
[33m|[m[34m\[m  
[33m|[m * [33ma4ac4959[m blitz4j is no longer included in eureka server as part of 1.3.5 - #714. Default log4j properties still points to a class, generating an exception at boot time
[33m|[m[33m/[m  
*   [33mc2db8210[m Merge pull request #733 from jylin/patch-1
[35m|[m[36m\[m  
[35m|[m * [33me0aa5f6d[m Fix build error
[35m|[m[35m/[m  
*   [33m21187d64[m Merge pull request #730 from tbak/bugs/jackson_compatibility
[1;31m|[m[1;32m\[m  
[1;31m|[m * [33m3f234dd0[m Better error handling in ApplicationsJacksonBuilder
[1;31m|[m * [33mb8d32bc5[m Refactor Jackson serializer, so it does not depend on internal Jackson code.
[1;31m|[m[1;31m/[m  
*   [33mca35f289[m[33m ([m[1;33mtag: v1.3.7[m[33m)[m Merge pull request #729 from tbak/master
[1;33m|[m[1;34m\[m  
[1;33m|[m * [33mbc97ff2c[m Revert https://github.com/Netflix/eureka/pull/724 due to compatibility issues with Jackson 2.6.x
[1;33m|[m[1;33m/[m  
*   [33m9d3b3156[m[33m ([m[1;33mtag: v1.3.6-rc.4[m[33m, [m[1;33mtag: v1.3.6[m[33m)[m Merge pull request #728 from qiangdavidliu/master
[1;35m|[m[1;36m\[m  
[1;35m|[m * [33m675e0843[m logic fix + adding test case
[1;35m|[m *   [33m78d21c3a[m Merge remote-tracking branch 'upstream/master'
[1;35m|[m [31m|[m[1;35m\[m  
[1;35m|[m [31m|[m[1;35m/[m  
[1;35m|[m[1;35m/[m[31m|[m   
* [31m|[m   [33mb4ba5a2c[m[33m ([m[1;33mtag: v1.3.6-rc.3[m[33m)[m Merge pull request #727 from qiangdavidliu/master
[33m|[m[34m\[m [31m\[m  
[33m|[m [34m|[m * [33mfdc0a975[m add additional sanity check in shouldRefresh AmazonInfo
[33m|[m [34m|[m[34m/[m  
[33m|[m * [33me40bd9c0[m Handle registration with bad data in DataCenterInfo
[33m|[m[33m/[m  
*   [33md5c2da0a[m[33m ([m[1;33mtag: v1.3.6-rc.2[m[33m)[m Merge pull request #724 from tbak/master
[35m|[m[36m\[m  
[35m|[m * [33m74834b16[m In DiscoveryJerseyProvider change default codec to the latest one.
[35m|[m[35m/[m  
*   [33me0128783[m[33m ([m[1;33mtag: v1.3.6-rc.1[m[33m)[m Merge pull request #723 from tbak/master
[1;31m|[m[1;32m\[m  
[1;31m|[m * [33m805a3506[m Fix AWS meta data refresh
[1;31m|[m[1;31m/[m  
*   [33m829bf714[m[33m ([m[1;33mtag: v1.3.5[m[33m)[m Merge pull request #720 from jkschneider/upgrade-netflix-commons
[1;33m|[m[1;34m\[m  
[1;33m|[m * [33m7aea64e0[m Upgrade netflix-eventbus to purge the transitive dependency on findbugs
* [1;34m|[m   [33mbabbed00[m Merge pull request #721 from tbak/master
[1;34m|[m[1;36m\[m [1;34m\[m  
[1;34m|[m [1;36m|[m[1;34m/[m  
[1;34m|[m[1;34m/[m[1;36m|[m   
[1;34m|[m * [33m90404f62[m Improve backwards compatibility with legacy eureka-client, that ignore the new InstanceInfo.instanceId field.
[1;34m|[m[1;34m/[m  
* [33m49c72d4a[m adding OSSMETADATA for NetflixOSS tracking
*   [33m1f41854a[m[33m ([m[1;33mtag: v1.3.5-rc.1[m[33m)[m Merge pull request #716 from qiangdavidliu/master
[31m|[m[32m\[m  
[31m|[m * [33m67158661[m on second thought reusing hostname instead of introducing a new defaultAddress
[31m|[m * [33m2e02201b[m fix test failures due to set up
[31m|[m *   [33m7de43a8c[m Merge remote-tracking branch 'upstream/master'
[31m|[m [33m|[m[31m\[m  
[31m|[m [33m|[m[31m/[m  
[31m|[m[31m/[m[33m|[m   
* [33m|[m   [33ma71859fd[m Merge pull request #714 from tbak/master
[35m|[m[36m\[m [33m\[m  
[35m|[m * [33m|[m [33mf34e021f[m Remove dependency on blitz4j
[35m|[m[35m/[m [33m/[m  
* [33m|[m   [33md4d29eb8[m Merge pull request #710 from qiangdavidliu/master
[1;31m|[m[1;32m\[m [33m\[m  
* [1;32m\[m [33m\[m   [33m7d44ab37[m Merge pull request #713 from tbak/master
[1;33m|[m[1;34m\[m [1;32m\[m [33m\[m  
[1;33m|[m * [1;32m|[m [33m|[m [33madbd3775[m Fix for issue https://github.com/Netflix/eureka/issues/711
* [1;34m|[m [1;32m|[m [33m|[m   [33me18b27c4[m Merge pull request #706 from qiangdavidliu/master
[1;34m|[m[1;36m\[m [1;34m\[m [1;32m\[m [33m\[m  
[1;34m|[m [1;36m|[m[1;34m/[m [1;32m/[m [33m/[m  
[1;34m|[m[1;34m/[m[1;36m|[m [1;32m|[m [33m|[m   
[1;34m|[m [1;36m|[m [1;32m|[m * [33me0c9072c[m Adding ability to define resolution order of the local InstanceInfo's "default" network address based on data available in AmazonInfo.
[1;34m|[m [1;36m|[m [1;32m|[m[1;32m/[m  
[1;34m|[m [1;36m|[m * [33m5817015d[m move eureka-server-karyon3 to use eureka-client-archaius2
[1;34m|[m [1;36m|[m * [33m80e694d8[m upgrade to latest karyon3
[1;34m|[m [1;36m|[m[1;36m/[m  
[1;34m|[m * [33m78677c43[m set source compatibility in build.gradle as java8 apis have bleed into code.
[1;34m|[m[1;34m/[m  
*   [33mb6b93f67[m Merge pull request #701 from tbak/master
[31m|[m[32m\[m  
[31m|[m * [33m96ba8cd5[m Thread pools in eureka-client create non-daemon threads
[31m|[m[31m/[m  
*   [33mdd8ef4b7[m Merge pull request #698 from tbak/master
[33m|[m[34m\[m  
[33m|[m * [33m2a91a160[m Backup registry configured via property is overridden with void implementation
[33m|[m[33m/[m  
*   [33m259ebbda[m Merge pull request #696 from tbak/master
[35m|[m[36m\[m  
[35m|[m * [33mce35f004[m Fix codec type in the example
[35m|[m * [33mc65a40f2[m NullPointException thrown if application name is not defined (set to UNKNOWN)
[35m|[m[35m/[m  
*   [33me1e3d3de[m[33m ([m[1;33mtag: v1.3.4-rc.1[m[33m, [m[1;33mtag: v1.3.4[m[33m)[m Merge pull request #695 from tbak/master
[1;31m|[m[1;32m\[m  
[1;31m|[m * [33mda83372a[m Remote data not fetched on the reconciliation path
* [1;32m|[m [33md4d13aa5[m Merge pull request #693 from tbak/master
[1;33m|[m[1;32m\[m[1;32m|[m 
[1;33m|[m * [33m3aa8085a[m Fix CLOSE_WAIT issue in new transport (use existing connection cleaner).
[1;33m|[m[1;33m/[m  
*   [33m31f9b504[m[33m ([m[1;33mtag: v1.3.3[m[33m)[m Merge pull request #692 from qiangdavidliu/master
[1;35m|[m[1;36m\[m  
[1;35m|[m * [33mc687b9a1[m log StatusChangeEvent at warn level is DOWN was involved
[1;35m|[m[1;35m/[m  
*   [33m73b98447[m Merge pull request #691 from qiangdavidliu/master
[31m|[m[32m\[m  
[31m|[m * [33mc97dcdd6[m fix sessionClient's randomized sessions to be dynamic
* [32m|[m [33m03f4cb8c[m[33m ([m[1;33mtag: v1.3.2[m[33m)[m Merge pull request #689 from qiangdavidliu/master
[33m|[m[32m\[m[32m|[m 
[33m|[m *   [33m0a43b889[m Merge remote-tracking branch 'upstream/master'
[33m|[m [35m|[m[33m\[m  
[33m|[m [35m|[m[33m/[m  
[33m|[m[33m/[m[35m|[m   
* [35m|[m   [33m684fb0af[m Merge pull request #688 from qiangdavidliu/master
[1;31m|[m[1;32m\[m [35m\[m  
* [1;32m\[m [35m\[m   [33ma54991b8[m Merge pull request #687 from qiangdavidliu/master
[1;33m|[m[1;34m\[m [1;32m\[m [35m\[m  
[1;33m|[m [1;34m|[m [1;32m|[m * [33mcea9ab62[m update to EIPManager to check for eip binding at a different rate when none is bound.
[1;33m|[m [1;34m|[m [1;32m|[m[1;32m/[m  
[1;33m|[m [1;34m|[m * [33ma9240211[m validating appName match
[1;33m|[m [1;34m|[m * [33m1c04472c[m test fix
[1;33m|[m [1;34m|[m * [33mc1a642ae[m Adding validation for required fields for instance registration
[1;33m|[m [1;34m|[m[1;34m/[m  
[1;33m|[m * [33m8824874d[m Some config tuning
[1;33m|[m * [33mde5df8af[m adding jitter to sessionedClient's session duration
[1;33m|[m * [33mf2d9dbd8[m - add config to define quarantine clear condition - better metrics and logging
[1;33m|[m[1;33m/[m  
*   [33me0de4753[m[33m ([m[1;33mtag: v1.3.2-rc.1[m[33m)[m Merge pull request #686 from tbak/master
[1;35m|[m[1;36m\[m  
[1;35m|[m * [33m9232cf26[m Experimental EurekaClientFactoryBuilder
[1;35m|[m * [33m978fde17[m Support remote region fetch in the new transport
* [1;36m|[m   [33mdaa115b9[m Merge pull request #685 from qiangdavidliu/master
[1;36m|[m[32m\[m [1;36m\[m  
[1;36m|[m [32m|[m[1;36m/[m  
[1;36m|[m[1;36m/[m[32m|[m   
[1;36m|[m * [33m06032c97[m Adding registry size to metrics
[1;36m|[m * [33m5c758294[m Adding logging for retryClient succeed on retry
[1;36m|[m[1;36m/[m  
*   [33mde24b934[m[33m ([m[1;33mtag: v1.3.1[m[33m)[m Merge pull request #684 from Netflix/refactorings/transport
[33m|[m[34m\[m  
[33m|[m *   [33md4a8b579[m Merge pull request #683 from qiangdavidliu/refactorings/transport
[33m|[m [35m|[m[36m\[m  
[33m|[m [35m|[m * [33m412a7a84[m Merging dns and config resolve to ConfigClusterResolver so that resolution can be dynamically changed.
[33m|[m [35m|[m * [33m9ab4d7bd[m default query resolver to bootstrap resolver by default (so that behaviour is unchanged from today)
[33m|[m [35m|[m * [33m97ea0ebf[m handle unavailable port when not using dns to bootstrap resolve.
[33m|[m [35m|[m * [33m0d009a56[m make the decision to use dns or config to resolve bootstrap urls more dynamic.
[33m|[m [35m|[m * [33mf804a25b[m - Provide a mechanism to use new transport with bootstrap servers for query. - Tune down some logging
[33m|[m [35m|[m * [33m19d9197f[m more metrics
[33m|[m [35m|[m * [33m2ff4d5d7[m update staleness monitor levels if registry fetch never worked
[33m|[m [35m|[m * [33m00d6fe73[m fix a typo that used a wrong metric
[33m|[m * [36m|[m [33m9af2f4bc[m Merge pull request #682 from qiangdavidliu/refactorings/transport
[33m|[m [1;31m|[m[36m\[m[36m|[m 
[33m|[m [1;31m|[m * [33m78879feb[m making the asyncResolver lazy again.
[33m|[m [1;31m|[m * [33m0bc86642[m some tuning
[33m|[m [1;31m|[m *   [33m6f9ed638[m Merge remote-tracking branch 'upstream/refactorings/transport' into refactorings/transport
[33m|[m [1;31m|[m [1;33m|[m[1;31m\[m  
[33m|[m [1;31m|[m [1;33m|[m[1;31m/[m  
[33m|[m [1;31m|[m[1;31m/[m[1;33m|[m   
[33m|[m * [1;33m|[m   [33m4e5d6d20[m Merge pull request #678 from qiangdavidliu/refactorings/transport
[33m|[m [1;35m|[m[1;36m\[m [1;33m\[m  
[33m|[m * [1;36m\[m [1;33m\[m   [33m00290d88[m Merge pull request #681 from tbak/refactorings/transport
[33m|[m [31m|[m[32m\[m [1;36m\[m [1;33m\[m  
[33m|[m [31m|[m * [1;36m|[m [1;33m|[m [33m67a0e652[m Tests refectoring
[33m|[m [31m|[m[31m/[m [1;36m/[m [1;33m/[m  
[33m|[m * [1;36m|[m [1;33m|[m   [33m00037b64[m Merge pull request #680 from tbak/refactorings/transport
[33m|[m [33m|[m[34m\[m [1;36m\[m [1;33m\[m  
[33m|[m [33m|[m * [1;36m|[m [1;33m|[m [33m292e3885[m More test refactoring
[33m|[m [33m|[m[33m/[m [1;36m/[m [1;33m/[m  
[33m|[m * [1;36m|[m [1;33m|[m   [33m2993284c[m Merge pull request #675 from qiangdavidliu/refactorings/transport
[33m|[m [35m|[m[36m\[m [1;36m\[m [1;33m\[m  
[33m|[m [35m|[m [36m|[m [1;36m|[m * [33m6d40a05f[m Adding metrics
[33m|[m [35m|[m [36m|[m [1;36m|[m * [33m717bcca1[m Restructuring new transport dsl such that - a single jerseyClient is used for query, registration and httpResolver - a single bootstrap resolver (async wrapped) is used for query and registration resolvers
[33m|[m [35m|[m [36m|[m [1;36m|[m * [33m5c2e5d02[m Splitting query and registration clients for experimental transport
[33m|[m [35m|[m [36m|[m [1;36m|[m * [33m43444b69[m revert removal of some deprecated methods
[33m|[m [35m|[m [36m|[m [1;36m|[m[1;36m/[m  
[33m|[m [35m|[m [36m|[m * [33m1defa5ec[m Unit tests and fixes
[33m|[m [35m|[m [36m|[m * [33m3792c8b8[m - CR updates - created a transport specific config
[33m|[m [35m|[m [36m|[m *   [33m9f301495[m Merge remote-tracking branch 'upstream/master' into refactorings/transport
[33m|[m [35m|[m [36m|[m [1;31m|[m[33m\[m  
[33m|[m [35m|[m[33m_[m[36m|[m[33m_[m[1;31m|[m[33m/[m  
[33m|[m[33m/[m[35m|[m [36m|[m [1;31m|[m   
* [35m|[m [36m|[m [1;31m|[m   [33m9ea6fba5[m[33m ([m[1;33mtag: v1.3.0-rc.3[m[33m, [m[1;33mtag: v1.3.0[m[33m)[m Merge pull request #677 from tbak/master
[1;33m|[m[1;34m\[m [35m\[m [36m\[m [1;31m\[m  
[1;33m|[m * [35m|[m [36m|[m [1;31m|[m [33m225287eb[m Add few more utility methods.
[1;33m|[m[1;33m/[m [35m/[m [36m/[m [1;31m/[m  
[1;33m|[m [35m|[m [36m|[m * [33m3f2dc8c6[m WIP: initial commit of intelligent resolvers to read operations
[1;33m|[m [35m|[m [36m|[m * [33m81a79b9b[m Some interface refactoring
[1;33m|[m [35m|[m [36m|[m[36m/[m  
[1;33m|[m [35m|[m * [33md1593aa7[m move junit to 4.11
[1;33m|[m [35m|[m * [33mc898fa15[m Merge remote-tracking branch 'upstream/master' into refactorings/transport
[1;33m|[m [35m|[m[35m/[m[1;33m|[m 
[1;33m|[m [35m|[m[1;33m/[m  
[1;33m|[m[1;33m/[m[35m|[m   
* [35m|[m   [33m86e40627[m[33m ([m[1;33mtag: v1.3.0-rc.2[m[33m)[m Merge pull request #674 from tbak/master
[31m|[m[32m\[m [35m\[m  
[31m|[m * [35m|[m [33mb8a4afdd[m Fix log output in compatibility test
[31m|[m * [35m|[m [33m0ae0a438[m Fix batch request/response encoding for the new Jackson codec.
[31m|[m[31m/[m [35m/[m  
* [35m|[m   [33m5cc80244[m Merge pull request #673 from tbak/master
[33m|[m[34m\[m [35m\[m  
[33m|[m * [35m|[m [33mc3aeed06[m Set jdk=1.8 in .netflixoss to get proper JDK in cloudbees jenkins job.
[33m|[m[33m/[m [35m/[m  
* [35m|[m   [33mcaf76616[m[33m ([m[1;33mtag: v1.3.0-rc.1[m[33m)[m Merge pull request #667 from Netflix/feature/di-friendly-server
[35m|[m[36m\[m [35m\[m  
[35m|[m * [35m\[m   [33m6b18edc6[m Merge pull request #671 from qiangdavidliu/feature/di-friendly-server
[35m|[m [1;31m|[m[1;32m\[m [35m\[m  
[35m|[m [1;31m|[m * [35m|[m [33m201cfc62[m Add timeouts to unit test verify
[35m|[m [1;31m|[m * [35m|[m [33m42e0f616[m Updating to governator 1.10.4 to avoid problematic releases
[35m|[m [1;31m|[m * [35m|[m   [33mc485e720[m Merge remote-tracking branch 'upstream/master' into feature/di-friendly-server
[35m|[m [1;31m|[m [1;33m|[m[35m\[m [35m\[m  
[35m|[m [1;31m|[m[35m_[m[1;33m|[m[35m/[m [35m/[m  
[35m|[m[35m/[m[1;31m|[m [1;33m|[m [35m|[m   
* [1;31m|[m [1;33m|[m [35m|[m   [33m7fadaa16[m Merge pull request #669 from spencergibb/status-resource-npe
[1;35m|[m[1;36m\[m [1;31m\[m [1;33m\[m [35m\[m  
[1;35m|[m * [1;31m|[m [1;33m|[m [35m|[m [33mde0c4050[m Fix NPE in StatusResource.isReplicaAvailable
[1;35m|[m[1;35m/[m [1;31m/[m [1;33m/[m [35m/[m  
* [1;31m|[m [1;33m|[m [35m|[m   [33ma07a839b[m[33m ([m[1;33mtag: v1.2.6-rc.4[m[33m)[m Merge pull request #668 from tbak/master
[31m|[m[32m\[m [1;31m\[m [1;33m\[m [35m\[m  
[31m|[m * [1;31m|[m [1;33m|[m [35m|[m [33m4d70b370[m Fix bug in PeerEurekaNode, that did not check for missing LeaseInfo
[31m|[m[31m/[m [1;31m/[m [1;33m/[m [35m/[m  
[31m|[m * [1;33m|[m [35m|[m [33m8f40dc48[m Merge pull request #670 from qiangdavidliu/feature/di-friendly-server
[31m|[m [33m|[m[1;33m\[m[1;33m|[m [35m|[m 
[31m|[m [33m|[m * [35m|[m   [33mb49487bc[m Merge remote-tracking branch 'upstream/feature/di-friendly-server' into feature/di-friendly-server
[31m|[m [33m|[m [35m|[m[33m\[m [35m\[m  
[31m|[m [33m|[m [35m|[m[33m/[m [35m/[m  
[31m|[m [33m|[m[33m/[m[35m|[m [35m|[m   
[31m|[m [33m|[m * [35m|[m [33m988a0d4a[m Back-porting fix #669 to new class
[31m|[m [33m|[m [36m|[m *   [33m2b43744d[m Merge pull request #665 from tbak/refactorings/transport
[31m|[m [33m|[m [36m|[m [1;31m|[m[1;32m\[m  
[31m|[m [33m|[m [36m|[m [1;31m|[m * [33m299fd834[m Add missing EurekaHttpClient methods + tests refactoring.
[31m|[m [33m|[m [36m|[m [1;31m|[m *   [33m7dba2208[m Merge remote-tracking branch 'remotes/netflix/feature/di-friendly-server' into refactorings/transport
[31m|[m [33m|[m [36m|[m [1;31m|[m [1;33m|[m[33m\[m  
[31m|[m [33m|[m [36m|[m[33m_[m[1;31m|[m[33m_[m[1;33m|[m[33m/[m  
[31m|[m [33m|[m[33m/[m[36m|[m [1;31m|[m [1;33m|[m   
[31m|[m * [36m|[m [1;31m|[m [1;33m|[m [33m333a91e9[m Merge pull request #666 from qiangdavidliu/feature/di-friendly-server
[31m|[m [1;35m|[m[36m\[m[36m|[m [1;31m|[m [1;33m|[m 
[31m|[m [1;35m|[m * [1;31m|[m [1;33m|[m [33mb3a54be8[m bumping versions of dependencies
[31m|[m [1;35m|[m * [1;31m|[m [1;33m|[m   [33ma0712418[m Merge remote-tracking branch 'upstream/master' into feature/di-friendly-server
[31m|[m [1;35m|[m [31m|[m[31m\[m [1;31m\[m [1;33m\[m  
[31m|[m [1;35m|[m[31m_[m[31m|[m[31m/[m [1;31m/[m [1;33m/[m  
[31m|[m[31m/[m[1;35m|[m [31m|[m [1;31m|[m [1;33m|[m   
* [1;35m|[m [31m|[m [1;31m|[m [1;33m|[m   [33m507bb14f[m[33m ([m[1;33mtag: v1.2.6-rc.3[m[33m)[m Merge pull request #657 from tbak/refactorings/replication_batcher
[33m|[m[34m\[m [1;35m\[m [31m\[m [1;31m\[m [1;33m\[m  
[33m|[m * [1;35m|[m [31m|[m [1;31m|[m [1;33m|[m [33m9134ae45[m After code review updates
[33m|[m * [1;35m|[m [31m|[m [1;31m|[m [1;33m|[m [33mdf7cf9e7[m More metrics + further cleanup
[33m|[m * [1;35m|[m [31m|[m [1;31m|[m [1;33m|[m   [33m5eb48115[m Merge remote-tracking branch 'remotes/netflix/master' into refactorings/replication_batcher
[33m|[m [35m|[m[33m\[m [1;35m\[m [31m\[m [1;31m\[m [1;33m\[m  
[33m|[m [35m|[m[33m/[m [1;35m/[m [31m/[m [1;31m/[m [1;33m/[m  
[33m|[m[33m/[m[35m|[m [1;35m|[m [31m|[m [1;31m|[m [1;33m|[m   
[33m|[m * [1;35m|[m [31m|[m [1;31m|[m [1;33m|[m [33mdba40052[m Release proper semaphor
[33m|[m * [1;35m|[m [31m|[m [1;31m|[m [1;33m|[m   [33m8971dda2[m Merge remote-tracking branch 'remotes/netflix/master' into refactorings/replication_batcher
[33m|[m [1;31m|[m[1;32m\[m [1;35m\[m [31m\[m [1;31m\[m [1;33m\[m  
[33m|[m * [1;32m\[m [1;35m\[m [31m\[m [1;31m\[m [1;33m\[m   [33m3311299c[m Merge branch 'master' into refactorings/replication_batcher
[33m|[m [1;33m|[m[1;34m\[m [1;32m\[m [1;35m\[m [31m\[m [1;31m\[m [1;33m\[m  
[33m|[m * [1;34m|[m [1;32m|[m [1;35m|[m [31m|[m [1;31m|[m [1;33m|[m [33mac2215e3[m Fix bug in traffic shaper.
[33m|[m * [1;34m|[m [1;32m|[m [1;35m|[m [31m|[m [1;31m|[m [1;33m|[m [33m11bae34e[m Add max batching delay, and improve metrics.
[33m|[m * [1;34m|[m [1;32m|[m [1;35m|[m [31m|[m [1;31m|[m [1;33m|[m [33m47a4d63c[m New implementation of the task batcher in the replication subsystem.
[33m|[m [1;34m|[m [1;34m|[m [1;32m|[m [1;35m|[m * [1;31m|[m [1;33m|[m   [33maa986aef[m Merge remote-tracking branch 'upstream/master' into feature/di-friendly-server
[33m|[m [1;34m|[m [1;34m|[m [1;32m|[m [1;35m|[m [1;35m|[m[33m\[m [1;31m\[m [1;33m\[m  
[33m|[m [1;34m|[m[33m_[m[1;34m|[m[33m_[m[1;32m|[m[33m_[m[1;35m|[m[33m_[m[1;35m|[m[33m/[m [1;31m/[m [1;33m/[m  
[33m|[m[33m/[m[1;34m|[m [1;34m|[m [1;32m|[m [1;35m|[m [1;35m|[m [1;31m|[m [1;33m|[m   
* [1;34m|[m [1;34m|[m [1;32m|[m [1;35m|[m [1;35m|[m [1;31m|[m [1;33m|[m   [33m264020a5[m[33m ([m[1;33mtag: v1.2.6-rc.2[m[33m)[m Merge pull request #661 from qiangdavidliu/master
[1;32m|[m[32m\[m [1;34m\[m [1;34m\[m [1;32m\[m [1;35m\[m [1;35m\[m [1;31m\[m [1;33m\[m  
[1;32m|[m [32m|[m[1;32m_[m[1;34m|[m[1;32m_[m[1;34m|[m[1;32m/[m [1;35m/[m [1;35m/[m [1;31m/[m [1;33m/[m  
[1;32m|[m[1;32m/[m[32m|[m [1;34m|[m [1;34m|[m [1;35m|[m [1;35m|[m [1;31m|[m [1;33m|[m   
[1;32m|[m * [1;34m|[m [1;34m|[m [1;35m|[m [1;35m|[m [1;31m|[m [1;33m|[m [33mb5c0840e[m update comments
[1;32m|[m * [1;34m|[m [1;34m|[m [1;35m|[m [1;35m|[m [1;31m|[m [1;33m|[m [33ma609cd04[m Adding time based compenstation to eviction processing if the eviction task was delayed (e.g. due to gc or clock skew). This can help prevent unnecessary evictions if (for example) a very long pause the world gc occur.
[1;32m|[m[1;32m/[m [1;34m/[m [1;34m/[m [1;35m/[m [1;35m/[m [1;31m/[m [1;33m/[m  
* [1;34m|[m [1;34m|[m [1;35m|[m [1;35m|[m [1;31m|[m [1;33m|[m   [33mf73101b9[m[33m ([m[1;33mtag: v1.2.6-rc.1[m[33m)[m Merge pull request #660 from tbak/master
[1;34m|[m[34m\[m [1;34m\[m [1;34m\[m [1;35m\[m [1;35m\[m [1;31m\[m [1;33m\[m  
[1;34m|[m [34m|[m[1;34m_[m[1;34m|[m[1;34m/[m [1;35m/[m [1;35m/[m [1;31m/[m [1;33m/[m  
[1;34m|[m[1;34m/[m[34m|[m [1;34m|[m [1;35m|[m [1;35m|[m [1;31m|[m [1;33m|[m   
[1;34m|[m * [1;34m|[m [1;35m|[m [1;35m|[m [1;31m|[m [1;33m|[m [33meda5e17f[m Eviction mechanism update
[1;34m|[m[1;34m/[m [1;34m/[m [1;35m/[m [1;35m/[m [1;31m/[m [1;33m/[m  
[1;34m|[m [1;34m|[m * [1;35m|[m [1;31m|[m [1;33m|[m [33m58af70f3[m Merge pull request #664 from qiangdavidliu/feature/di-friendly-server
[1;34m|[m [1;34m|[m [35m|[m[1;35m\[m[1;35m|[m [1;31m|[m [1;33m|[m 
[1;34m|[m [1;34m|[m [35m|[m * [1;31m|[m [1;33m|[m [33m7c47165f[m Minor edit to remove some references to statics.
[1;34m|[m [1;34m|[m [35m|[m[35m/[m [1;31m/[m [1;33m/[m  
[1;34m|[m [1;34m|[m * [1;31m|[m [1;33m|[m   [33m9390efa3[m Merge pull request #662 from aroger-r7/di-friendly-server
[1;34m|[m [1;34m|[m [1;31m|[m[1;32m\[m [1;31m\[m [1;33m\[m  
[1;34m|[m [1;34m|[m [1;31m|[m * [1;31m|[m [1;33m|[m [33me4945398[m add route53 binding alternative to eip
[1;34m|[m [1;34m|[m [1;31m|[m[1;31m/[m [1;31m/[m [1;33m/[m  
[1;34m|[m [1;34m|[m * [1;31m|[m [1;33m|[m   [33m6a68c706[m Merge pull request #654 from qiangdavidliu/feature/di-friendly-server
[1;34m|[m [1;34m|[m [1;33m|[m[1;34m\[m [1;31m\[m [1;33m\[m  
[1;34m|[m [1;34m|[m [1;33m|[m * [1;31m|[m [1;33m|[m [33mdd8d47dd[m Upping timing a bit in a test
[1;34m|[m [1;34m|[m [1;33m|[m * [1;31m|[m [1;33m|[m   [33mc47bd792[m Merge remote-tracking branch 'upstream/master' into feature/di-friendly-server
[1;34m|[m [1;34m|[m [1;33m|[m [1;35m|[m[1;34m\[m [1;31m\[m [1;33m\[m  
[1;34m|[m [1;34m|[m[1;34m_[m[1;33m|[m[1;34m_[m[1;35m|[m[1;34m/[m [1;31m/[m [1;33m/[m  
[1;34m|[m[1;34m/[m[1;34m|[m [1;33m|[m [1;35m|[m [1;31m|[m [1;33m|[m   
* [1;34m|[m [1;33m|[m [1;35m|[m [1;31m|[m [1;33m|[m   [33m1837e045[m[33m ([m[1;33mtag: v1.2.5-rc.2[m[33m, [m[1;33mtag: v1.2.5[m[33m)[m Merge pull request #653 from qiangdavidliu/master
[31m|[m[32m\[m [1;34m\[m [1;33m\[m [1;35m\[m [1;31m\[m [1;33m\[m  
[31m|[m * [1;34m|[m [1;33m|[m [1;35m|[m [1;31m|[m [1;33m|[m [33m29dae7eb[m Adding instanceId field to xstream codecs as well
[31m|[m * [1;34m|[m [1;33m|[m [1;35m|[m [1;31m|[m [1;33m|[m [33md7b516a2[m Reverting use of sid in #649 and introduce a new "instanceId" field instead
[31m|[m [32m|[m [1;34m|[m [1;33m|[m [1;35m|[m [1;31m|[m * [33m25291200[m Transport API update + eureka-client-jersey2 module
[31m|[m [32m|[m [1;34m|[m [1;33m|[m [1;35m|[m [1;31m|[m * [33m4a318c7c[m Fix status code checks in MetricsCollectingEurekaHttpClient.
[31m|[m [32m|[m [1;34m|[m [1;33m|[m [1;35m|[m [1;31m|[m * [33m773dbcd3[m Bug fixing/cleanup
[31m|[m [32m|[m [1;34m|[m [1;33m|[m [1;35m|[m [1;31m|[m[1;31m/[m  
[31m|[m [32m|[m [1;34m|[m [1;33m|[m [1;35m|[m * [33m09d3f0b2[m Integrate new transport with DiscoveryClient and RemoteRegionRegistry.
[31m|[m [32m|[m [1;34m|[m [1;33m|[m [1;35m|[m *   [33m747a9a0c[m Merge remote-tracking branch 'remotes/netflix/feature/di-friendly-server' into refactorings/transport
[31m|[m [32m|[m [1;34m|[m [1;33m|[m [1;35m|[m [33m|[m[1;33m\[m  
[31m|[m [32m|[m [1;34m|[m [1;33m|[m [1;35m|[m[1;33m_[m[33m|[m[1;33m/[m  
[31m|[m [32m|[m [1;34m|[m [1;33m|[m[1;33m/[m[1;35m|[m [33m|[m   
[31m|[m [32m|[m [1;34m|[m * [1;35m|[m [33m|[m [33mc1c4cbee[m Merge pull request #652 from qiangdavidliu/feature/di-friendly-server
[31m|[m [32m|[m[31m_[m[1;34m|[m[31m/[m[1;35m|[m [1;35m|[m [33m|[m 
[31m|[m[31m/[m[32m|[m [1;34m|[m [1;35m|[m[1;35m/[m [33m/[m  
[31m|[m [32m|[m [1;34m|[m * [33m|[m [33m90eea3b9[m Add local server module
[31m|[m [32m|[m [1;34m|[m * [33m|[m [33mcc9afc2a[m more fixes for karyon3 server
[31m|[m [32m|[m [1;34m|[m * [33m|[m [33mfe98f317[m minor fixes
[31m|[m [32m|[m [1;34m|[m * [33m|[m [33m66de9b44[m fix unrelated bug from another pull some time ago that init jersey provider twice.
[31m|[m [32m|[m [1;34m|[m * [33m|[m [33md88b049b[m Adding additional api methods required by resources
[31m|[m [32m|[m [1;34m|[m * [33m|[m [33m3d93b744[m Updating per cr comments
[31m|[m [32m|[m [1;34m|[m * [33m|[m   [33mefdab4b7[m Merge remote-tracking branch 'upstream/master' into feature/di-friendly-server
[31m|[m [32m|[m [1;34m|[m [1;31m|[m[1;32m\[m [33m\[m  
[31m|[m [32m|[m [1;34m|[m * [1;32m|[m [33m|[m [33ma6b86eae[m Server side refactoring to be more DI friendly: - Adding some (rudimentary) interfaces as needed - Adding DI annotations as needed - Code refactoring and clean up
* [32m|[m [1;34m|[m [1;32m|[m [1;32m|[m [33m|[m   [33me02e1ed5[m Merge pull request #651 from tbak/master
[32m|[m[1;34m\[m [32m\[m [1;34m\[m [1;32m\[m [1;32m\[m [33m\[m  
[32m|[m [1;34m|[m[32m/[m [1;34m/[m [1;32m/[m [1;32m/[m [33m/[m  
[32m|[m[32m/[m[1;34m|[m [1;34m|[m [1;32m|[m [1;32m|[m [33m|[m   
[32m|[m * [1;34m|[m [1;32m|[m [1;32m|[m [33m|[m [33m166dce8a[m Verify media type in DiscoveryJerseyProvider
[32m|[m * [1;34m|[m [1;32m|[m [1;32m|[m [33m|[m [33m1ad692f9[m Better error handling for invalid content in request issue: https://github.com/Netflix/eureka/issues/647
[32m|[m[32m/[m [1;34m/[m [1;32m/[m [1;32m/[m [33m/[m  
* [1;34m|[m [1;32m|[m [1;32m|[m [33m|[m   [33m16730450[m[33m ([m[1;33mtag: v1.2.5-rc.1[m[33m)[m Merge pull request #650 from tbak/master
[1;35m|[m[1;36m\[m [1;34m\[m [1;32m\[m [1;32m\[m [33m\[m  
[1;35m|[m * [1;34m\[m [1;32m\[m [1;32m\[m [33m\[m   [33m6686911e[m Merge remote-tracking branch 'remotes/netflix/master'
[1;35m|[m [31m|[m[1;35m\[m [1;34m\[m [1;32m\[m [1;32m\[m [33m\[m  
[1;35m|[m [31m|[m[1;35m/[m [1;34m/[m [1;32m/[m [1;32m/[m [33m/[m  
[1;35m|[m[1;35m/[m[31m|[m [1;34m|[m [1;32m|[m [1;32m|[m [33m|[m   
* [31m|[m [1;34m|[m [1;32m|[m [1;32m|[m [33m|[m   [33mdc998b83[m Merge pull request #649 from qiangdavidliu/master
[1;32m|[m[34m\[m [31m\[m [1;34m\[m [1;32m\[m [1;32m\[m [33m\[m  
[1;32m|[m [34m|[m[1;32m_[m[31m|[m[1;32m_[m[1;34m|[m[1;32m_[m[1;32m|[m[1;32m/[m [33m/[m  
[1;32m|[m[1;32m/[m[34m|[m [31m|[m [1;34m|[m [1;32m|[m [33m|[m   
[1;32m|[m * [31m|[m [1;34m|[m [1;32m|[m [33m|[m [33m58a6d49d[m fix incorrect default in test
[1;32m|[m * [31m|[m [1;34m|[m [1;32m|[m [33m|[m [33mf4ac8fce[m Decoupling the id of InstanceInfo from the id of the DataCenterInfo.
[1;32m|[m[1;32m/[m [31m/[m [1;34m/[m [1;32m/[m [33m/[m  
[1;32m|[m * [1;34m|[m [1;32m|[m [33m|[m [33mcd3d329e[m Encode @class entry in InstanceInfo.metadata for backward compatibility cont
[1;32m|[m * [1;34m|[m [1;32m|[m [33m|[m [33m8c704be5[m Jackson codec tests update.
[1;32m|[m * [1;34m|[m [1;32m|[m [33m|[m [33mebfdda07[m Encode @class entry in InstanceInfo.metadata for backward compatibility
[1;32m|[m[1;32m/[m [1;34m/[m [1;32m/[m [33m/[m  
* [1;34m|[m [1;32m|[m [33m|[m   [33me879aa1e[m Merge pull request #643 from tbak/master
[35m|[m[36m\[m [1;34m\[m [1;32m\[m [33m\[m  
[35m|[m [36m|[m [1;34m|[m [1;32m|[m * [33ma995b04b[m Add server status evaluation mechanism, so different retry logic can be injected for registration and query operations
[35m|[m [36m|[m [1;34m|[m [1;32m|[m * [33md2d35354[m Jackson codec tests update.
[35m|[m [36m|[m [1;34m|[m [1;32m|[m * [33m5ad2182c[m Add metrics, and more logging in transport/cluster resolver components. Additional unit tests.
[35m|[m [36m|[m [1;34m|[m [1;32m|[m * [33ma227d50f[m Transport unit tests + bug fixes
[35m|[m [36m|[m [1;34m|[m [1;32m|[m * [33m28b1351e[m Transport refactoring
[35m|[m [36m|[m [1;34m|[m [1;32m|[m * [33mf8f0baf3[m Move jersey client classes to tranport package.
[35m|[m [36m|[m [1;34m|[m[36m_[m[1;32m|[m[36m/[m  
[35m|[m [36m|[m[36m/[m[1;34m|[m [1;32m|[m   
[35m|[m * [1;34m|[m [1;32m|[m [33m077b366c[m Better separation of new JSON and XML serializers, so jackson XML specific annotations are never loaded when using JSON codecs. This is required, as all jackson XML dependencies are marked as provided in gradle build, and are not included by default.
[35m|[m[35m/[m [1;34m/[m [1;32m/[m  
* [1;34m|[m [1;32m|[m   [33m7bbde201[m Merge pull request #642 from tbak/master
[1;31m|[m[1;32m\[m [1;34m\[m [1;32m\[m  
[1;31m|[m * [1;34m|[m [1;32m|[m [33me0857aac[m JSON encoding fix: do not unwrap single element arrays
[1;31m|[m[1;31m/[m [1;34m/[m [1;32m/[m  
* [1;34m|[m [1;32m|[m   [33mb7d96aee[m[33m ([m[1;33mtag: v1.2.4[m[33m)[m Merge pull request #640 from tbak/master
[1;33m|[m[1;34m\[m [1;34m\[m [1;32m\[m  
[1;33m|[m * [1;34m\[m [1;32m\[m   [33m79e4dcd9[m Merge remote-tracking branch 'remotes/netflix/master'
[1;33m|[m [1;35m|[m[1;33m\[m [1;34m\[m [1;32m\[m  
[1;33m|[m [1;35m|[m[1;33m/[m [1;34m/[m [1;32m/[m  
[1;33m|[m[1;33m/[m[1;35m|[m [1;34m|[m [1;32m|[m   
* [1;35m|[m [1;34m|[m [1;32m|[m   [33m9fe7120d[m Merge pull request #630 from jaume-pinyol/master
[1;32m|[m[32m\[m [1;35m\[m [1;34m\[m [1;32m\[m  
[1;32m|[m [32m|[m[1;32m_[m[1;35m|[m[1;32m_[m[1;34m|[m[1;32m/[m  
[1;32m|[m[1;32m/[m[32m|[m [1;35m|[m [1;34m|[m   
[1;32m|[m * [1;35m|[m [1;34m|[m [33m67568f7d[m EurekaNameSpace not used in eureka.region
[1;32m|[m * [1;35m|[m [1;34m|[m [33mc99698da[m EurekaNameSpace not used in eureka.region
* [32m|[m [1;35m|[m [1;34m|[m   [33m709dbcda[m Merge pull request #639 from brenuart/gh638
[33m|[m[34m\[m [32m\[m [1;35m\[m [1;34m\[m  
[33m|[m * [32m|[m [1;35m|[m [1;34m|[m [33mce1077c8[m Fix for gh638: use monitor.getName() instead of monitor.name() when unregister monitor
[33m|[m[33m/[m [32m/[m [1;35m/[m [1;34m/[m  
* [32m|[m [1;35m|[m [1;34m|[m   [33m19cd51de[m Merge pull request #637 from qiangdavidliu/master
[35m|[m[36m\[m [32m\[m [1;35m\[m [1;34m\[m  
[35m|[m * [32m|[m [1;35m|[m [1;34m|[m [33m39f5334b[m Adding replication client shutdown in PeerEurekaNode
[35m|[m * [32m|[m [1;35m|[m [1;34m|[m [33m96a189e5[m fix a flaky test
* [36m|[m [32m|[m [1;35m|[m [1;34m|[m [33m371de2be[m Merge pull request #636 from qiangdavidliu/master
[1;31m|[m[36m\[m[36m|[m [32m|[m [1;35m|[m [1;34m|[m 
[1;31m|[m * [32m|[m [1;35m|[m [1;34m|[m [33m131b9841[m Making serverCodecs public and using a builder instead
[1;31m|[m[1;31m/[m [32m/[m [1;35m/[m [1;34m/[m  
* [32m|[m [1;35m|[m [1;34m|[m   [33mf62dab18[m[33m ([m[1;33mtag: v1.2.4-rc.1[m[33m)[m Merge pull request #635 from qiangdavidliu/master
[1;33m|[m[1;34m\[m [32m\[m [1;35m\[m [1;34m\[m  
[1;33m|[m * [32m|[m [1;35m|[m [1;34m|[m [33mbd4de3dd[m remove accidental check-in
[1;33m|[m * [32m|[m [1;35m|[m [1;34m|[m [33mb430851e[m Adding (some) extensibility to define custom codecs for client and server
[1;33m|[m * [32m|[m [1;35m|[m [1;34m|[m [33m6994e825[m Adding content-type for gziped responses
[1;33m|[m[1;33m/[m [32m/[m [1;35m/[m [1;34m/[m  
[1;33m|[m [32m|[m * [1;34m/[m [33me41dfa90[m Bug fixes and minor cleanups
[1;33m|[m [32m|[m[1;33m/[m [1;34m/[m  
[1;33m|[m[1;33m/[m[32m|[m [1;34m|[m   
* [32m|[m [1;34m|[m   [33m13249e03[m[33m ([m[1;33mtag: v1.2.3[m[33m)[m Merge pull request #634 from tbak/master
[1;35m|[m[1;36m\[m [32m\[m [1;34m\[m  
[1;35m|[m * [32m|[m [1;34m|[m [33m8040e922[m Separate JSON and XML codec implementations to make dependencies on jackson/xml artifacts optional in the client.
[1;35m|[m * [32m|[m [1;34m|[m [33mc36bcbf4[m Make jackson XML dependencies provided in the client.
[1;35m|[m * [32m|[m [1;34m|[m [33m79018398[m Fix local registry size metrics + http agent name update.
[1;35m|[m[1;35m/[m [32m/[m [1;34m/[m  
* [32m|[m [1;34m|[m   [33m2e6665f1[m[33m ([m[1;33mtag: v1.2.2[m[33m)[m Merge pull request #631 from tbak/master
[31m|[m[32m\[m [32m\[m [1;34m\[m  
[31m|[m * [32m|[m [1;34m|[m [33mf06c394d[m Update lease duration dynamically if changed
[31m|[m[31m/[m [32m/[m [1;34m/[m  
* [32m|[m [1;34m|[m   [33m8f8bdba2[m Merge pull request #567 from tbak/features/jackson_codec_ng
[33m|[m[34m\[m [32m\[m [1;34m\[m  
[33m|[m * [32m|[m [1;34m|[m [33mc2c52b03[m Add support for compact XML replies.
[33m|[m * [32m|[m [1;34m|[m   [33maed96471[m Merge remote-tracking branch 'remotes/netflix/master' into features/jackson_codec_ng
[33m|[m [35m|[m[33m\[m [32m\[m [1;34m\[m  
[33m|[m [35m|[m[33m/[m [32m/[m [1;34m/[m  
[33m|[m[33m/[m[35m|[m [32m|[m [1;34m|[m   
* [35m|[m [32m|[m [1;34m|[m   [33m914c2ec7[m Merge pull request #629 from tbak/master
[1;31m|[m[1;32m\[m [35m\[m [32m\[m [1;34m\[m  
[1;31m|[m * [35m|[m [32m|[m [1;34m|[m [33m5f1241cd[m Create new category for registration related metrics.
[1;31m|[m[1;31m/[m [35m/[m [32m/[m [1;34m/[m  
[1;31m|[m * [32m|[m [1;34m|[m   [33mb27105bf[m Merge remote-tracking branch 'remotes/netflix/master' into features/jackson_codec_ng
[1;31m|[m [1;33m|[m[1;31m\[m [32m\[m [1;34m\[m  
[1;31m|[m [1;33m|[m[1;31m/[m [32m/[m [1;34m/[m  
[1;31m|[m[1;31m/[m[1;33m|[m [32m|[m [1;34m|[m   
* [1;33m|[m [32m|[m [1;34m|[m   [33m9415edad[m Merge pull request #627 from tbak/master
[1;34m|[m[1;36m\[m [1;33m\[m [32m\[m [1;34m\[m  
[1;34m|[m [1;36m|[m[1;34m_[m[1;33m|[m[1;34m_[m[32m|[m[1;34m/[m  
[1;34m|[m[1;34m/[m[1;36m|[m [1;33m|[m [32m|[m   
[1;34m|[m * [1;33m|[m [32m|[m [33mbe498cc4[m Additional metrics for client side heartbeat/registry staleness monitoring.
[1;34m|[m[1;34m/[m [1;33m/[m [32m/[m  
[1;34m|[m * [32m|[m [33m6e0b19f0[m Registry string fields interning.
[1;34m|[m * [32m|[m   [33m7be8dff3[m Merge remote-tracking branch 'remotes/netflix/master' into features/jackson_codec_ng
[1;34m|[m [31m|[m[1;34m\[m [32m\[m  
[1;34m|[m [31m|[m[1;34m/[m [32m/[m  
[1;34m|[m[1;34m/[m[31m|[m [32m|[m   
* [31m|[m [32m|[m   [33mfcffccb4[m[33m ([m[1;33mtag: v1.2.1[m[33m, [m[1;33mtag: 1.2.1[m[33m)[m Merge pull request #623 from tbak/master
[33m|[m[34m\[m [31m\[m [32m\[m  
[33m|[m * [31m|[m [32m|[m [33m997679b8[m Refactor EurekaJerseyClient. Add more metrics.
[33m|[m * [31m|[m [32m|[m [33m101bc92b[m Replace Apache client User-Agent with Eureka specific one
[33m|[m * [31m|[m [32m|[m [33m5bd37c04[m Change default executor thread pool size to 5.
[33m|[m * [31m|[m [32m|[m [33m715390bc[m Add filter enforcing gzip reply encoding for all REST GET requests.
[33m|[m[33m/[m [31m/[m [32m/[m  
* [31m|[m [32m|[m   [33m5421400d[m Merge pull request #614 from elandau/master
[35m|[m[36m\[m [31m\[m [32m\[m  
[35m|[m * [31m|[m [32m|[m [33m2ddcce4c[m Revert DefaultEurekaClientConfigProvider singleton changes
[35m|[m * [31m|[m [32m|[m [33md1367d10[m Fix a bunch of silly mistakes
[35m|[m * [31m|[m [32m|[m [33m6c44cee2[m Fix support for using an externally provided namespace in (Ec2)EurekaArchaius2InstanceConfig
[35m|[m * [31m|[m [32m|[m [33m19d7f6d2[m Re-add archaius-core to eureka-client/build.gradle
[35m|[m * [31m|[m [32m|[m [33m3ab14421[m Remove Karyon from class names
[35m|[m * [31m|[m [32m|[m [33mb13d13a9[m New sub-project to configure eureka using archaius2
[35m|[m[35m/[m [31m/[m [32m/[m  
[35m|[m * [32m|[m   [33mb694d77c[m Merge pull request #615 from qiangdavidliu/features/jackson_codec_ng
[35m|[m [1;31m|[m[1;32m\[m [32m\[m  
[35m|[m [1;31m|[m * [32m\[m   [33m09674e60[m Merge remote-tracking branch 'upstream/features/jackson_codec_ng' into features/jackson_codec_ng
[35m|[m [1;31m|[m [1;33m|[m[1;31m\[m [32m\[m  
[35m|[m [1;31m|[m [1;33m|[m[1;31m/[m [32m/[m  
[35m|[m [1;31m|[m[1;31m/[m[1;33m|[m [32m|[m   
[35m|[m * [1;33m|[m [32m|[m   [33m3af876bc[m Merge pull request #612 from qiangdavidliu/features/jackson_codec_ng
[35m|[m [1;35m|[m[1;36m\[m [1;33m\[m [32m\[m  
[35m|[m [1;35m|[m [1;36m|[m * [32m|[m [33m7f40bcb0[m Adding eureka accept to the vip resources
[35m|[m [1;35m|[m [1;36m|[m[1;36m/[m [32m/[m  
[35m|[m [1;35m|[m * [32m|[m [33mc17ee411[m More codec compatibility (for xml this time)
[35m|[m [1;35m|[m * [32m|[m [33mb8313435[m - Separating the encoder/decoder configs (which are temporary for transition) and the client data accept (new config). - Fix one more incompatibility with the new jacksonCodec
[35m|[m [1;35m|[m * [32m|[m [33mf2395364[m Change accept from mini to compact
[35m|[m [1;35m|[m * [32m|[m [33m0dffbc71[m Adding server side capability to return mini-fied full apps, deltas and individual apps.
[35m|[m [1;35m|[m * [32m|[m   [33mf9b1e9d1[m Merge remote-tracking branch 'upstream/features/jackson_codec_ng' into features/jackson_codec_ng
[35m|[m [1;35m|[m [31m|[m[1;35m\[m [32m\[m  
[35m|[m [1;35m|[m [31m|[m[1;35m/[m [32m/[m  
[35m|[m [1;35m|[m[1;35m/[m[31m|[m [32m|[m   
[35m|[m * [31m|[m [32m|[m   [33m853f5dd9[m Merge pull request #606 from qiangdavidliu/features/jackson_codec_ng
[35m|[m [33m|[m[34m\[m [31m\[m [32m\[m  
[35m|[m [33m|[m [34m|[m * [32m|[m [33m477401cc[m Separating encoder and decoder for client serialization/deserialization
[35m|[m [33m|[m [34m|[m[34m/[m [32m/[m  
[35m|[m [33m|[m * [32m|[m [33m4e1dd901[m Adding mini jackson deserialization to the codec sets
[35m|[m [33m|[m * [32m|[m [33m60e55d98[m Merge remote-tracking branch 'upstream/master' into features/jackson_codec_ng
[35m|[m [33m|[m[33m/[m[35m|[m [32m|[m 
[35m|[m [33m|[m[35m/[m [32m/[m  
[35m|[m[35m/[m[33m|[m [32m|[m   
* [33m|[m [32m|[m   [33m1c2989d1[m Merge pull request #601 from elandau/master
[1;31m|[m[1;32m\[m [33m\[m [32m\[m  
[1;31m|[m * [33m|[m [32m|[m [33m22f40665[m Remove unused reference to DynamicPropertyFactory
[1;31m|[m[1;31m/[m [33m/[m [32m/[m  
* [33m|[m [32m|[m   [33m459a0062[m[33m ([m[1;33mtag: v1.2.0-rc.1[m[33m, [m[1;33mtag: v1.2.0[m[33m)[m Merge pull request #596 from qiangdavidliu/master
[1;33m|[m[1;34m\[m [33m\[m [32m\[m  
[1;33m|[m * [33m|[m [32m|[m [33m83946b8c[m Standardizing DiscoveryClient's optional configs
[1;33m|[m[1;33m/[m [33m/[m [32m/[m  
* [33m|[m [32m|[m   [33m16cfc1b9[m Merge pull request #595 from qiangdavidliu/master
[1;35m|[m[1;36m\[m [33m\[m [32m\[m  
[1;35m|[m * [33m|[m [32m|[m [33m05d7ba5d[m storeOverrides should not check for remote region
[1;35m|[m * [33m|[m [32m|[m   [33me43eb656[m Merge remote-tracking branch 'upstream/master'
[1;35m|[m [31m|[m[1;35m\[m [33m\[m [32m\[m  
[1;35m|[m [31m|[m[1;35m/[m [33m/[m [32m/[m  
[1;35m|[m[1;35m/[m[31m|[m [33m|[m [32m|[m   
* [31m|[m [33m|[m [32m|[m   [33mff6f0113[m Merge pull request #594 from qiangdavidliu/master
[33m|[m[34m\[m [31m\[m [33m\[m [32m\[m  
[33m|[m [34m|[m * [33m|[m [32m|[m [33m7c536123[m - Remove an expesive call to get instanceStatus override from the critical path (replaced with a less expesive, functionally equivalent version). - Adding a debug resource to view current server's list of overrides - some general formatting clean up
[33m|[m [34m|[m * [33m|[m [32m|[m [33mf284e3e0[m Updating more dependencies
[33m|[m [34m|[m[34m/[m [33m/[m [32m/[m  
[33m|[m * [33m/[m [32m/[m [33m037415c5[m Updating dependencies to jersey 1.19 and governator 1.7.5. Changing eureka-client dependencies to just guice 4 and governator-annotations.
[33m|[m[33m/[m [33m/[m [32m/[m  
* [33m|[m [32m|[m   [33me10cedcc[m Merge pull request #592 from xbaran/master
[35m|[m[36m\[m [33m\[m [32m\[m  
[35m|[m * [33m|[m [32m|[m [33m81ae05c8[m Binding exception due EurekaInstanceConfig was already configured in EurekaModule
[35m|[m[35m/[m [33m/[m [32m/[m  
[35m|[m * [32m|[m   [33m9b180dce[m Merge pull request #593 from qiangdavidliu/features/jackson_codec_ng
[35m|[m [1;31m|[m[1;32m\[m [32m\[m  
[35m|[m [1;31m|[m * [32m|[m [33m79835416[m Better error handling
[35m|[m [1;31m|[m[1;31m/[m [32m/[m  
[35m|[m * [32m|[m   [33m291b4d25[m Merge pull request #591 from qiangdavidliu/features/jackson_codec_ng
[35m|[m [1;33m|[m[1;34m\[m [32m\[m  
[35m|[m [1;33m|[m * [32m|[m [33m1db25bdb[m Integrating JacksonNG with existing codecs. Fix an incompatibility with the existing (now called Legacy) JacksonJson codec.
[35m|[m [1;33m|[m * [32m|[m [33maec4fdfa[m Merge remote-tracking branch 'upstream/master' into features/jackson_codec_ng
[35m|[m [1;33m|[m[1;33m/[m[35m|[m [32m|[m 
[35m|[m [1;33m|[m[35m/[m [32m/[m  
[35m|[m[35m/[m[1;33m|[m [32m|[m   
* [1;33m|[m [32m|[m   [33mbdbd4984[m Merge pull request #588 from willtran-/master
[31m|[m[32m\[m [1;33m\[m [32m\[m  
[31m|[m * [1;33m|[m [32m|[m [33m8d792512[m Add the ability to use additional Jersey ClientFilters in the DiscoveryClient
[31m|[m[31m/[m [1;33m/[m [32m/[m  
* [1;33m|[m [32m|[m   [33m4048871c[m Merge pull request #555 from spencergibb/di-refactor
[32m|[m[34m\[m [1;33m\[m [32m\[m  
[32m|[m [34m|[m[32m_[m[1;33m|[m[32m/[m  
[32m|[m[32m/[m[34m|[m [1;33m|[m   
[32m|[m * [1;33m|[m [33ma1c264d0[m add author tag
[32m|[m * [1;33m|[m [33mdca6bd49[m simplified DiscoveryClientOptionalArgs made VERSION private
[32m|[m * [1;33m|[m [33m9dd32d8e[m Refactor so other DI Systems can extend eureka. Make EurekaJacksonCodec more inline with Converters with public static classes to extend. Make EurekaJacksonCodec.INSTANCE mutable. Add get/set to DiscoveryClientOptionalArgs.
[32m|[m[32m/[m [1;33m/[m  
[32m|[m * [33m09f18d14[m Add string interning and field filtering during deserialization in compact mode.
[32m|[m * [33mfd1b38fe[m New Jackson JSON/XML serializer - update.
[32m|[m *   [33m55cb2ee6[m Merge remote-tracking branch 'remotes/netflix/master' into features/jackson_codec_ng
[32m|[m [35m|[m[32m\[m  
[32m|[m [35m|[m[32m/[m  
[32m|[m[32m/[m[35m|[m   
* [35m|[m   [33m329d104c[m[33m ([m[1;33mtag: v1.1.159[m[33m, [m[1;33mtag: 1.1.159[m[33m)[m Merge pull request #542 from tbak/features/replication_batching
[1;31m|[m[1;32m\[m [35m\[m  
[1;31m|[m * [35m\[m   [33m4999bebd[m Merge remote-tracking branch 'remotes/netflix/master' into features/replication_batching
[1;31m|[m [1;33m|[m[1;31m\[m [35m\[m  
[1;31m|[m [1;33m|[m[1;31m/[m [35m/[m  
[1;31m|[m[1;31m/[m[1;33m|[m [35m|[m   
* [1;33m|[m [35m|[m   [33m0d7c1b1a[m[33m ([m[1;33mtag: v1.1.158[m[33m)[m Merge pull request #563 from qiangdavidliu/master
[1;35m|[m[1;36m\[m [1;33m\[m [35m\[m  
[1;35m|[m * [1;33m|[m [35m|[m [33m9b9586c4[m Adding configurable awsAsg cache expiry time
[1;35m|[m[1;35m/[m [1;33m/[m [35m/[m  
[1;35m|[m [1;33m|[m * [33m8b261b88[m New Jackson JSON/XML serializer.
[1;35m|[m [1;33m|[m[1;33m/[m  
[1;35m|[m *   [33m7c9f6ea9[m Merge remote-tracking branch 'remotes/netflix/master' into features/replication_batching
[1;35m|[m [31m|[m[1;35m\[m  
[1;35m|[m [31m|[m[1;35m/[m  
[1;35m|[m[1;35m/[m[31m|[m   
* [31m|[m   [33mbac3649d[m Merge pull request #557 from kukgini/master
[33m|[m[34m\[m [31m\[m  
[33m|[m * [31m|[m [33m539ea4b4[m fix package name of serializer
* [34m|[m [31m|[m   [33m011c5f96[m Merge pull request #556 from qiangdavidliu/master
[34m|[m[36m\[m [34m\[m [31m\[m  
[34m|[m [36m|[m[34m/[m [31m/[m  
[34m|[m[34m/[m[36m|[m [31m|[m   
[34m|[m * [31m|[m [33mb33a368c[m AwsAsg refresh fixes (avoid extra calls to aws api + fix potential classCastException)
[34m|[m * [31m|[m [33m365ae3a2[m touch file to force a rebuild
[34m|[m * [31m|[m [33m5f57e111[m Fixing a flaky unit test
[34m|[m[34m/[m [31m/[m  
[34m|[m * [33m6ad03398[m Asg expiry time update
[34m|[m * [33m1b3d9be1[m Additional logging.
[34m|[m *   [33m14324a4c[m Merge remote-tracking branch 'remotes/netflix/master' into features/replication_batching
[34m|[m [1;31m|[m[34m\[m  
[34m|[m [1;31m|[m[34m/[m  
[34m|[m[34m/[m[1;31m|[m   
* [1;31m|[m   [33m6333151d[m[33m ([m[1;33mtag: v1.1.157[m[33m)[m Merge pull request #551 from qiangdavidliu/master
[1;33m|[m[1;34m\[m [1;31m\[m  
[1;33m|[m * [1;31m|[m [33m169df6c2[m cr comments
[1;33m|[m * [1;31m|[m [33mce903e50[m Extract hostname in MockServer registration as this is part of the instance unique id
[1;33m|[m * [1;31m|[m [33m615833e8[m test update
[1;33m|[m * [1;31m|[m [33m457a7f63[m - Clean up of static usage of ApplicationInfoManager in DiscoveryClient to avoid race condition in references. - Added tests for eventBus events
[1;33m|[m[1;33m/[m [1;31m/[m  
* [1;31m|[m   [33m949dfa1c[m Merge pull request #549 from brenuart/gh545
[1;35m|[m[1;36m\[m [1;31m\[m  
[1;35m|[m * [1;31m|[m [33m7b8a8f11[m Move code not directly related to the update of the local cache outside of the scope of the timer.
[1;35m|[m * [1;31m|[m [33m1cacbe2a[m Create generic 'DiscoveryEvent' from which all discovery events are derived. Create new 'CacheRefreshedEvent' and make the DiscoveryClient fire it everytime it has refreshed its local cache
[1;35m|[m * [1;31m|[m [33mf6212a7e[m Create protected methods for statusChanged and cacheRefreshed events. Subclasses may override these methods if they need custom behavior. Move the code sending events to the eventBus inside these methods. Capture 'CacheRefreshed' events
[1;35m|[m [1;36m|[m * [33m575c896d[m Fix status update batch replication.
[1;35m|[m [1;36m|[m *   [33m493b27de[m Merge remote-tracking branch 'remotes/netflix/master' into features/replication_batching
[1;35m|[m [1;36m|[m [31m|[m[1;35m\[m  
[1;35m|[m [1;36m|[m[1;35m_[m[31m|[m[1;35m/[m  
[1;35m|[m[1;35m/[m[1;36m|[m [31m|[m   
* [1;36m|[m [31m|[m   [33m3f696795[m Merge pull request #544 from qiangdavidliu/master
[33m|[m[34m\[m [1;36m\[m [31m\[m  
[33m|[m * [1;36m|[m [31m|[m [33mab7aad1c[m Forgot to flip booleans in unit test for boolean flip in method param.
[33m|[m * [1;36m|[m [31m|[m [33ma387fddb[m Adding config for use (or not to use) the readonly cache in ResponseCache
[33m|[m[33m/[m [1;36m/[m [31m/[m  
* [1;36m|[m [31m|[m   [33m50dd3064[m Merge pull request #543 from qiangdavidliu/master
[1;36m|[m[36m\[m [1;36m\[m [31m\[m  
[1;36m|[m [36m|[m[1;36m/[m [31m/[m  
[1;36m|[m[1;36m/[m[36m|[m [31m|[m   
[1;36m|[m * [31m|[m [33md9363b4b[m AwsAsgUtil fixes + avoid using expensive getASGAccount(asgName) if possible
[1;36m|[m [36m|[m * [33m491cca0a[m Heartbeat replication bug fix
[1;36m|[m [36m|[m * [33m9bf51669[m Add omitted in the last merge update from master
[1;36m|[m [36m|[m *   [33m5344e823[m Merge remote-tracking branch 'remotes/netflix/master' into features/replication_batching
[1;36m|[m [36m|[m [1;31m|[m[1;36m\[m  
[1;36m|[m [36m|[m[1;36m_[m[1;31m|[m[1;36m/[m  
[1;36m|[m[1;36m/[m[36m|[m [1;31m|[m   
* [36m|[m [1;31m|[m [33m756bcd9f[m Merge pull request #537 from qiangdavidliu/master
[1;33m|[m[36m\[m[36m|[m [1;31m|[m 
[1;33m|[m * [1;31m|[m [33mfe695a54[m Extra null check for paranoia.
[1;33m|[m * [1;31m|[m [33m1b760358[m comment update
[1;33m|[m * [1;31m|[m   [33m3d01ee77[m Merge remote-tracking branch 'upstream/master'
[1;33m|[m [1;35m|[m[1;33m\[m [1;31m\[m  
[1;33m|[m [1;35m|[m[1;33m/[m [1;31m/[m  
[1;33m|[m[1;33m/[m[1;35m|[m [1;31m|[m   
* [1;35m|[m [1;31m|[m   [33m0854300b[m Merge pull request #527 from amanya/cross-account-describe-asgs
[31m|[m[32m\[m [1;35m\[m [1;31m\[m  
[31m|[m * [1;35m|[m [1;31m|[m [33mf9d5bfd9[m Get cross account role name from property
[31m|[m * [1;35m|[m [1;31m|[m [33me26f10a8[m Check if accountId metadata exists for compatibility w/ older clients
[31m|[m * [1;35m|[m [1;31m|[m [33me17d488c[m Reuse sts authentication tokens
[31m|[m * [1;35m|[m [1;31m|[m [33mc377616f[m Cross account describe ASGs
[31m|[m [32m|[m * [1;31m|[m [33m88b101b9[m Comment update to Lease class
[31m|[m [32m|[m * [1;31m|[m [33m82f216c0[m Minor bug fix for StatusChangeListener when not configured to register.
[31m|[m [32m|[m * [1;31m|[m   [33mabbe51c7[m Merge remote-tracking branch 'upstream/master'
[31m|[m [32m|[m [33m|[m[31m\[m [1;31m\[m  
[31m|[m [32m|[m[31m_[m[33m|[m[31m/[m [1;31m/[m  
[31m|[m[31m/[m[32m|[m [33m|[m [1;31m|[m   
* [32m|[m [33m|[m [1;31m|[m   [33m6b09030e[m Merge pull request #523 from spencergibb/appinfo-public
[35m|[m[36m\[m [32m\[m [33m\[m [1;31m\[m  
[35m|[m * [32m|[m [33m|[m [1;31m|[m [33m0a539722[m make constructor public so other DI systems can create instances
[35m|[m [36m|[m [32m|[m * [1;31m|[m [33mdf713041[m Fix inconsistency with selfPreservation check and how it's reported as servo metrics
[35m|[m [36m|[m [32m|[m [36m|[m * [33m81aaebd4[m Check for null status in PeerReplicationResource.
[35m|[m [36m|[m [32m|[m [36m|[m * [33m1475b3b6[m Support dynamic change of gzip request encoding.
[35m|[m [36m|[m [32m|[m [36m|[m *   [33mef330737[m Merge branch 'master' into features/replication_batching
[35m|[m [36m|[m [32m|[m [36m|[m [1;31m|[m[35m\[m  
[35m|[m [36m|[m[35m_[m[32m|[m[35m_[m[36m|[m[35m_[m[1;31m|[m[35m/[m  
[35m|[m[35m/[m[36m|[m [32m|[m [36m|[m [1;31m|[m   
* [36m|[m [32m|[m [36m|[m [1;31m|[m   [33m578f4c04[m[33m ([m[1;33mtag: v1.1.156[m[33m)[m Merge pull request #530 from qiangdavidliu/master
[1;33m|[m[36m\[m [36m\[m [32m\[m [36m\[m [1;31m\[m  
[1;33m|[m [36m|[m [36m|[m[36m_[m[32m|[m[36m/[m [1;31m/[m  
[1;33m|[m [36m|[m[36m/[m[36m|[m [32m|[m [1;31m|[m   
[1;33m|[m * [36m|[m [32m|[m [1;31m|[m [33m13ccc1c7[m Use ephemeral port for MockRemoteEurekaServer in AbstractTester
[1;33m|[m * [36m|[m [32m|[m [1;31m|[m [33m8f13a375[m more test fixes
[1;33m|[m * [36m|[m [32m|[m [1;31m|[m [33m3e4ea002[m Fix flaky test
[1;33m|[m * [36m|[m [32m|[m [1;31m|[m [33m96e1cd03[m Adding exception handling around listener notification
[1;33m|[m * [36m|[m [32m|[m [1;31m|[m [33m88637d7d[m Catching exceptions from healthcheck.getStatus() and setting status to DOWN when healthcheck exceptions.
[1;33m|[m * [36m|[m [32m|[m [1;31m|[m [33m5e70a794[m Terminate instanceInfoReplicator with shutdownNow() instead of shutdown()
[1;33m|[m * [36m|[m [32m|[m [1;31m|[m [33m5148ea87[m Reducing test execution time
[1;33m|[m * [36m|[m [32m|[m [1;31m|[m [33md196158c[m upgrading all mockito dependency to 1.9.5
[1;33m|[m * [36m|[m [32m|[m [1;31m|[m [33m0db1f58d[m Adding the ability to execute on-demand updates to the eureka server. Current set up is triggered by changes to ApplicationInfoManager.setInstanceStatus(). This capability can be turned on/off via eureka.shouldOnDemandUpdateStatusChange.
[1;33m|[m * [36m|[m [32m|[m [1;31m|[m [33m950a7232[m Tone down logging from info to debug
[1;33m|[m[1;33m/[m [36m/[m [32m/[m [1;31m/[m  
[1;33m|[m [36m|[m [32m|[m * [33m7ac504a9[m Bug fixes and minor updates.
[1;33m|[m [36m|[m [32m|[m * [33m4e10b9a6[m Fix gradle build (eureka-server test task depends on war).
[1;33m|[m [36m|[m [32m|[m * [33m04d2caa9[m Serialization code cleanup + REST layer integration tests.
[1;33m|[m [36m|[m [32m|[m *   [33m7926a656[m Merge remote-tracking branch 'remotes/netflix/master' into features/replication_batching
[1;33m|[m [36m|[m [32m|[m [1;35m|[m[1;33m\[m  
[1;33m|[m [36m|[m[1;33m_[m[32m|[m[1;33m_[m[1;35m|[m[1;33m/[m  
[1;33m|[m[1;33m/[m[36m|[m [32m|[m [1;35m|[m   
* [36m|[m [32m|[m [1;35m|[m   [33m00a016c8[m[33m ([m[1;33mtag: v1.1.155[m[33m)[m Merge pull request #528 from qiangdavidliu/master
[32m|[m[32m\[m [36m\[m [32m\[m [1;35m\[m  
[32m|[m [32m|[m[32m_[m[36m|[m[32m/[m [1;35m/[m  
[32m|[m[32m/[m[32m|[m [36m|[m [1;35m|[m   
[32m|[m * [36m|[m [1;35m|[m [33mf242b01c[m Adding additional fields to deser for Jackson codec
[32m|[m * [36m|[m [1;35m|[m   [33m344f6d2d[m Merge remote-tracking branch 'upstream/master'
[32m|[m [33m|[m[32m\[m [36m\[m [1;35m\[m  
[32m|[m [33m|[m[32m/[m [36m/[m [1;35m/[m  
[32m|[m[32m/[m[33m|[m [36m|[m [1;35m|[m   
[32m|[m * [36m|[m [1;35m|[m [33m7afa7b02[m Reformat code.
[32m|[m [34m|[m [36m|[m * [33mb2766563[m Refactor replication component - cnt.
[32m|[m [34m|[m [36m|[m * [33m1fcd932b[m Refactor replication component.
[32m|[m [34m|[m[32m_[m[36m|[m[32m/[m  
[32m|[m[32m/[m[34m|[m [36m|[m   
* [34m|[m [36m|[m   [33m97115335[m Merge pull request #526 from tbak/master
[36m|[m[36m\[m [34m\[m [36m\[m  
[36m|[m [36m|[m[36m_[m[34m|[m[36m/[m  
[36m|[m[36m/[m[36m|[m [34m|[m   
[36m|[m * [34m|[m [33m0591c98a[m Reformat code.
[36m|[m[36m/[m [34m/[m  
* [34m|[m [33m20a425e5[m Merge pull request #522 from qiangdavidliu/master
[1;31m|[m[34m\[m[34m|[m 
[1;31m|[m * [33m3835feb2[m move jersey client cleanup to after unregistration cleanup (which need the apache client)
[1;31m|[m * [33m837f78c7[m Updating examples to be more clear
[1;31m|[m[1;31m/[m  
*   [33mbe7030c4[m Merge pull request #521 from jeremydyoung/master
[1;33m|[m[1;34m\[m  
[1;33m|[m * [33m60612be0[m Destroying jersey cleaner thread on DiscoveryClient shutdown
[1;33m|[m[1;33m/[m  
*   [33m46e96b2f[m[33m ([m[1;33mtag: v1.1.154[m[33m)[m Merge pull request #520 from qiangdavidliu/master
[1;35m|[m[1;36m\[m  
[1;35m|[m * [33m0068c1a9[m Adding comments
[1;35m|[m * [33m01d71b2d[m Re-adding @LazySingleton to EurekaInstanceInfoProvider to ensure InstanceInfo singleton for injection into DiscoveryClient and ApplicationInfoManager.
[1;35m|[m[1;35m/[m  
*   [33me71c2b13[m[33m ([m[1;33mtag: v1.1.153[m[33m, [m[1;33mtag: 1.1.153[m[33m)[m Merge pull request #514 from tbak/master
[31m|[m[32m\[m  
[31m|[m *   [33md6ade397[m Merge remote-tracking branch 'remotes/netflix/master'
[31m|[m [33m|[m[31m\[m  
[31m|[m [33m|[m[31m/[m  
[31m|[m[31m/[m[33m|[m   
* [33m|[m   [33md34507d0[m Merge pull request #515 from qiangdavidliu/master
[35m|[m[36m\[m [33m\[m  
[35m|[m * [33m|[m [33m3d4d264c[m Removing singleton from providers + explicitly specifying the default bindings
[35m|[m * [33m|[m [33md3b5b456[m Singleton for DefaultEurekaClientConfig
[35m|[m * [33m|[m [33m716acdd4[m Adding test for EurekaModule
[35m|[m * [33m|[m   [33m1bab118f[m Merge remote-tracking branch 'upstream/master'
[35m|[m [1;31m|[m[35m\[m [33m\[m  
[35m|[m [1;31m|[m[35m/[m [33m/[m  
[35m|[m[35m/[m[1;31m|[m [33m|[m   
[35m|[m * [33m|[m [33m651d25e2[m - Adding EurekaClient interface for DiscoveryClient - Adding EurekaModule for using eureka with Governator - cleaned up client and server property files - cleaned up examples and moved examples to eureka-examples
[35m|[m [1;32m|[m * [33m74738d02[m Fix EurekaJacksonCodec to Handle poperly @class attribute in instance metainfo.
[35m|[m [1;32m|[m * [33mdb048473[m Remove dependency to ribbon.
[35m|[m [1;32m|[m[35m/[m  
[35m|[m[35m/[m[1;32m|[m   
* [1;32m|[m   [33md588d017[m[33m ([m[1;33mtag: v1.1.152[m[33m)[m Merge pull request #470 from tbak/features/jackson
[1;33m|[m[1;34m\[m [1;32m\[m  
[1;33m|[m * [1;32m|[m [33m900278fa[m Add additional setters to InstanceInfo builder to avoid macro expansion during deserialization process.
[1;33m|[m * [1;32m|[m [33mf7109739[m Switch to Jackson 2.x + handle more InstanceInfo fields directly in deserializer to avoid reflection calls.
[1;33m|[m * [1;32m|[m [33md7f57fd7[m Merge branch 'master' into features/jackson
[1;33m|[m [1;35m|[m[1;32m\[m[1;32m|[m 
[1;33m|[m * [1;32m|[m [33m9ea97b5e[m Use Jackson JSON serializer instead of XStream to improve serialization performance/memory usage.
* [1;36m|[m [1;32m|[m   [33mcd42b329[m Merge pull request #511 from qu1j0t3/tt_typos_in_config_keys
[1;32m|[m[32m\[m [1;36m\[m [1;32m\[m  
[1;32m|[m [32m|[m[1;32m_[m[1;36m|[m[1;32m/[m  
[1;32m|[m[1;32m/[m[32m|[m [1;36m|[m   
[1;32m|[m * [1;36m|[m [33m0a97f831[m Fix typos in per-host config keys.
[1;32m|[m[1;32m/[m [1;36m/[m  
* [1;36m|[m   [33m5e29810c[m Merge pull request #486 from tbak/eureka1/pin_to_redirected_address
[33m|[m[34m\[m [1;36m\[m  
[33m|[m * [1;36m|[m [33m4ebc94a2[m Increase client version number.
[33m|[m * [1;36m|[m [33m42498777[m Handle seprately registration and registry fetch redirects.
[33m|[m * [1;36m|[m   [33m9d19a36a[m Merge remote-tracking branch 'netflix/master' into eureka1/pin_to_redirected_address
[33m|[m [35m|[m[33m\[m [1;36m\[m  
[33m|[m [35m|[m[33m/[m [1;36m/[m  
[33m|[m[33m/[m[35m|[m [1;36m|[m   
* [35m|[m [1;36m|[m   [33m66449d6e[m[33m ([m[1;33mtag: v1.1.151[m[33m)[m Merge pull request #483 from tbak/master
[1;36m|[m[1;32m\[m [35m\[m [1;36m\[m  
[1;36m|[m [1;32m|[m[1;36m_[m[35m|[m[1;36m/[m  
[1;36m|[m[1;36m/[m[1;32m|[m [35m|[m   
[1;36m|[m [1;32m|[m * [33me5198d04[m Further redirect support updates.
[1;36m|[m [1;32m|[m * [33m14be8d59[m Pin client to the redirected address.
[1;36m|[m [1;32m|[m[1;32m/[m  
[1;36m|[m * [33mefc6dbbc[m Make TimedSupervisorTask thread pool configurable for remote region replication. Add thread pool level gauge for observing current thread usage level.
[1;36m|[m[1;36m/[m  
*   [33m22fdfb2a[m[33m ([m[1;33mtag: v1.1.150[m[33m, [m[1;33mtag: 1.1.150[m[33m)[m Merge pull request #459 from qiangdavidliu/master
[1;33m|[m[1;34m\[m  
[1;33m|[m * [33mc4dd430f[m Adding generation guard for app and delta updates on RemoteRegistry
[1;33m|[m * [33m8b0b46b0[m Wrapping RemoteRegionFetch in TimedSupervisorTask
[1;33m|[m[1;33m/[m  
*   [33me3948897[m Merge pull request #456 from brharrington/dep-versions
[1;35m|[m[1;36m\[m  
[1;35m|[m * [33m80a64601[m update dependency versions
[1;35m|[m[1;35m/[m  
*   [33mdbf50390[m Merge pull request #447 from tbak/master
[31m|[m[32m\[m  
[31m|[m * [33mfbfc138c[m Upgrade to nebula 2.2.7
[31m|[m[31m/[m  
*   [33m5ab86b9d[m[33m ([m[1;33mtag: v1.1.149[m[33m, [m[1;33mtag: 1.1.149[m[33m)[m Merge pull request #434 from tbak/refactorings/string_cache
[33m|[m[34m\[m  
[33m|[m * [33mb6335e61[m Refine string cache implementation.
[33m|[m * [33m4cdf7aa0[m Cache string values to reduce memory footprint.
[33m|[m[33m/[m  
*   [33m2f656f86[m[33m ([m[1;33mtag: 1.1.148[m[33m)[m Merge pull request #433 from tbak/master
[35m|[m[36m\[m  
[35m|[m * [33ma0b83968[m Fix error reporting for status update/delete REST resource (#422).
* [36m|[m [33ma7ca1328[m Merge pull request #432 from tbak/master
[1;31m|[m[36m\[m[36m|[m 
[1;31m|[m * [33m326f5c94[m Fix Jenkins build status link in README.md.
[1;31m|[m[1;31m/[m  
*   [33m3736f8f5[m Merge pull request #430 from tbak/master
[1;33m|[m[1;34m\[m  
[1;33m|[m * [33ma6c1a7b7[m Require re-registration when instance status is UNKNOWN, after override removal.
* [1;34m|[m   [33m609b90c1[m Merge pull request #418 from C0rWin/fix_equals
[1;35m|[m[1;36m\[m [1;34m\[m  
[1;35m|[m * [1;34m|[m [33m120c951c[m Remove code which has never been executed
[1;35m|[m * [1;34m|[m [33m8b759c57[m Objects of different types compared with equals method.
[1;35m|[m[1;35m/[m [1;34m/[m  
* [1;34m|[m [33m251bac0a[m Merge pull request #412 from tbak/master
[31m|[m[1;34m\[m[1;34m|[m 
[31m|[m *   [33m7ae62343[m Merge remote-tracking branch 'remotes/netflix/master'
[31m|[m [33m|[m[31m\[m  
[31m|[m [33m|[m[31m/[m  
[31m|[m[31m/[m[33m|[m   
* [33m|[m   [33m282956f8[m Merge pull request #416 from tbak/bugs/414_servlet_api
[35m|[m[36m\[m [33m\[m  
[35m|[m * [33m|[m [33md5b3d13a[m Exclude servlet-api jar from eureka.war.
[35m|[m[35m/[m [33m/[m  
[35m|[m * [33m78faef7b[m  Support optional 'value' query parameter in status override DELETE.
[35m|[m * [33mecde6254[m Support DELETE operation for instance status override.
[35m|[m * [33m8b21e17b[m Add additional guard in InstanceInfo.getHealthCheckUrls #402
[35m|[m[35m/[m  
*   [33m660f9fdf[m Merge pull request #408 from shaie/touppercase
[1;31m|[m[1;32m\[m  
[1;31m|[m * [33m21f44a76[m More toUpperCase() fixes
* [1;32m|[m   [33mf125ca14[m Merge pull request #407 from shaie/info-debug
[1;33m|[m[1;34m\[m [1;32m\[m  
[1;33m|[m * [1;32m|[m [33m14fa25dc[m Check for right logging level
[1;33m|[m [1;32m|[m[1;32m/[m  
* [1;32m|[m   [33m4d931ed5[m Merge pull request #406 from shaie/uppercase
[1;35m|[m[1;36m\[m [1;32m\[m  
[1;35m|[m * [1;32m|[m [33me597d9ef[m Don't use String.toUpperCase()
[1;35m|[m [1;32m|[m[1;32m/[m  
* [1;32m|[m   [33m1c0a2c79[m Merge pull request #405 from shaie/master
[1;32m|[m[32m\[m [1;32m\[m  
[1;32m|[m [32m|[m[1;32m/[m  
[1;32m|[m[1;32m/[m[32m|[m   
[1;32m|[m * [33m503176cd[m Fix InstanceInfo.Builder.setLeaseInfo
[1;32m|[m * [33m0274bf93[m Revert "Fix InstanceInfo.Builder.setLeaseInfo"
[1;32m|[m * [33maeb0444d[m Fix InstanceInfo.Builder.setLeaseInfo
[1;32m|[m[1;32m/[m  
*   [33mad486630[m[33m ([m[1;33mtag: v1.1.147-rc.1[m[33m, [m[1;33mtag: v1.1.147[m[33m)[m Merge pull request #346 from qiangdavidliu/master
[33m|[m[34m\[m  
[33m|[m * [33mc23b1793[m Fixes for clean connection close in AmazonInfo when reading from the AWS metadata url.
[33m|[m[33m/[m  
*   [33m0d44b9c8[m Merge pull request #337 from rspieldenner/gradleplugin
[35m|[m[36m\[m  
[35m|[m * [33m6b9f91fd[m Move to nebula.netflixoss 2.2.4 for bintray snapshot fix
[35m|[m[35m/[m  
*   [33m3f9bcc91[m Merge pull request #329 from tbak/master
[1;31m|[m[1;32m\[m  
[1;31m|[m * [33m8b1f1ae0[m Enforce patch scope by default.
[1;31m|[m[1;31m/[m  
*   [33m05d71b4b[m Merge pull request #325 from rspieldenner/buildchanges
[1;33m|[m[1;34m\[m  
[1;33m|[m * [33mf8e29ee3[m Needs a CHANGELOG.md for ease of bintray project creation
[1;33m|[m * [33ma492dc28[m File moves to simplify the build
[1;33m|[m * [33mfd8dde35[m Build changes for nebula.netflixoss
[1;33m|[m[1;33m/[m  
* [33m2f95edb9[m [Gradle Release Plugin] - new version commit:  '1.1.147-SNAPSHOT'.
* [33m6348edee[m[33m ([m[1;33mtag: 1.1.146[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.146'.
*   [33m0468eca9[m Merge pull request #290 from qiangdavidliu/master
[1;35m|[m[1;36m\[m  
[1;35m|[m * [33mdf4d52c7[m Recording accountId and vpcId from Amazon metadata (if available) for registration
[1;35m|[m[1;35m/[m  
*   [33mb151ae60[m Merge pull request #288 from tbak/master
[31m|[m[32m\[m  
[31m|[m * [33me4cdf8a9[m Change ribbon version to 2.0-RC9.
[31m|[m[31m/[m  
*   [33ma70a060d[m Merge pull request #272 from krutsko/ISSUE_218
[33m|[m[34m\[m  
[33m|[m * [33mdd09a96e[m ISSUE-218 Remove static Eureka Client instance.
[33m|[m * [33mcce75480[m ISSUE-218 Makes converter replacement char configurable thru config. Setup config in advance.
[33m|[m * [33maa26d7c2[m ISSUE-218 Makes converter replacement char configurable thru config. Setup config in advance.
[33m|[m * [33m95717dcd[m ISSUE-218 Makes converter replacement char configurable thru config.
[33m|[m[33m/[m  
*   [33m671263cf[m Merge pull request #263 from codewise-com/master
[35m|[m[36m\[m  
[35m|[m * [33m1691f26d[m Moved code that disables doclint from convention.gradle to build.gradle
[35m|[m * [33m8c4559d4[m Skipping doclint if building with Java 8. It breaks the build due to errors in eureka javadoc (this strict doclint checking affects whole world really).
[35m|[m[35m/[m  
* [33m564009b3[m [Gradle Release Plugin] - new version commit:  '1.1.146-SNAPSHOT'.
* [33mbbf969e1[m[33m ([m[1;33mtag: 1.1.145[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.145'.
*   [33m80a90329[m Merge pull request #260 from qiangdavidliu/master
[1;31m|[m[1;32m\[m  
[1;31m|[m * [33m3c21c240[m Removing race condition in shuffleInstances due to premature .clear() of virtualHostnameMap (needed by getter APIs).
[1;31m|[m[1;31m/[m  
* [33md85ae116[m [Gradle Release Plugin] - new version commit:  '1.1.145-SNAPSHOT'.
* [33mc53f2d28[m[33m ([m[1;33mtag: 1.1.144[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.144'.
*   [33m29e8815c[m Merge pull request #244 from tbak/master
[1;33m|[m[1;34m\[m  
[1;33m|[m * [33me1395170[m Fix rate limiter bug.
[1;33m|[m[1;33m/[m  
* [33m2d7640b7[m [Gradle Release Plugin] - new version commit:  '1.1.144-SNAPSHOT'.
* [33m519fea17[m[33m ([m[1;33mtag: 1.1.143[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.143'.
*   [33m3b573a7b[m Merge pull request #243 from tbak/master
[1;35m|[m[1;36m\[m  
[1;35m|[m * [33ma5fea6f3[m Update gradle configuration.
[1;35m|[m[1;35m/[m  
*   [33m91b1bc89[m Merge pull request #242 from tbak/master
[31m|[m[32m\[m  
[31m|[m * [33m3fcfd72e[m Add exponential backoff to heartbeat/cache refresh tasks.
[31m|[m[31m/[m  
*   [33ma2214725[m Merge pull request #241 from tbak/master
[33m|[m[34m\[m  
[33m|[m * [33mc22b69a2[m Add /apps/<app_id> to the rate limiter filter.
[33m|[m * [33m5b959b43[m Improve rate limiter to throttle only full and delta registry fetches.
[33m|[m[33m/[m  
*   [33m65e0ef96[m Merge pull request #240 from Knewton/fix-shuffleVirtualHostNameMap
[35m|[m[36m\[m  
[35m|[m * [33m9f0308be[m Fix bug where shuffleVirtualHostNameMap isn't updated
[35m|[m[35m/[m  
*   [33m28562afd[m Merge pull request #230 from tbak/master
[1;31m|[m[1;32m\[m  
[1;31m|[m * [33m6046b12b[m TimedSupervisorTask should be registered with servo.
* [1;32m|[m   [33m3c5424d7[m Merge pull request #235 from overstock/DiscoveryClientRefactor
[1;32m|[m[1;34m\[m [1;32m\[m  
[1;32m|[m [1;34m|[m[1;32m/[m  
[1;32m|[m[1;32m/[m[1;34m|[m   
[1;32m|[m * [33m4ecb8bca[m Forgot to use ProxyCustomApacheHttpClientConfig to provide the client configuration in EurekaJerseyClient.createProxyJerseyClient when I initially refactored this.
[1;32m|[m * [33mf779716a[m Try to fix more whitespace changes
[1;32m|[m * [33m7575254f[m Fix whitespace differences I introduced inadvertantly Remove an import I left behind from the previous change Correct the visibility of SystemSSLCustomApacheHttpClientConfig
[1;32m|[m * [33m857ac297[m Improve the name of the system secure client
[1;32m|[m * [33m9d077760[m Refactor DiscoveryClient to use EurekaJerseyClient's factory methods
[1;32m|[m * [33mefc59cee[m Alternate patch for SystemSocketFactory
[1;32m|[m * [33md484ae9c[m Use SystemSocketFactory for https client connections if system property com.netflix.eureka.shouldSSLConnectionsUseSystemSocketFactory is set to true
[1;32m|[m[1;32m/[m  
*   [33m32f28f53[m Merge pull request #219 from Knewton/better-website-table
[1;35m|[m[1;36m\[m  
[1;35m|[m * [33m195b80ed[m Add search to Eureka website table with DataTables
* [1;36m|[m [33m792c87ae[m [Gradle Release Plugin] - new version commit:  '1.1.143-SNAPSHOT'.
* [1;36m|[m [33m65283847[m[33m ([m[1;33mtag: 1.1.142[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.142'.
* [1;36m|[m   [33mda665e2f[m Merge pull request #217 from tbak/master
[1;36m|[m[32m\[m [1;36m\[m  
[1;36m|[m [32m|[m[1;36m/[m  
[1;36m|[m[1;36m/[m[32m|[m   
[1;36m|[m * [33md69ff460[m Add default proxy user name / password as a workaround for apache http client bug.
[1;36m|[m * [33m9dd121d2[m Add configuration properties for proxy user name / password.
* [32m|[m   [33me9c70035[m Merge pull request #214 from davidcurrie/remove-statics
[32m|[m[34m\[m [32m\[m  
[32m|[m [34m|[m[32m/[m  
[32m|[m[32m/[m[34m|[m   
[32m|[m * [33mec9c19c4[m Remove statics requiring bootstrapping from JAX-RS resources
[32m|[m[32m/[m  
* [33mf988aeb4[m [Gradle Release Plugin] - new version commit:  '1.1.142-SNAPSHOT'.
* [33m03391457[m[33m ([m[1;33mtag: 1.1.141[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.141'.
*   [33m361630e8[m Merge pull request #189 from tbak/master
[35m|[m[36m\[m  
[35m|[m * [33mabc73ca3[m Rate limter shall count statistcs about number of throttling candidates on a dedicated counter.
[35m|[m * [33me079c3fb[m Update rate limiter implementation after receiving code review comments.
[35m|[m * [33m7f8f1013[m Add rate limiter, to cut-off custom clients if traffic goes above configured level.
[35m|[m[35m/[m  
* [33mffdb337b[m [Gradle Release Plugin] - new version commit:  '1.1.141-SNAPSHOT'.
* [33mee004aea[m[33m ([m[1;33mtag: 1.1.140[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.140'.
*   [33m36efd037[m Merge pull request #179 from NiteshKant/master
[1;31m|[m[1;32m\[m  
[1;31m|[m * [33mdee6c754[m Adding the modified public constructor to DiscoveryClient
* [1;32m|[m [33mb849b74e[m [Gradle Release Plugin] - new version commit:  '1.1.140-SNAPSHOT'.
* [1;32m|[m [33mdd76a6cd[m[33m ([m[1;33mtag: 1.1.139[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.139'.
* [1;32m|[m [33m6f3fa3ff[m Merge pull request #176 from NiteshKant/master
[1;33m|[m[1;32m\[m[1;32m|[m 
[1;33m|[m * [33m87114fc3[m Fixes #174
* [1;34m|[m   [33mb27b4eae[m Merge pull request #173 from christorpelund/master
[1;34m|[m[1;36m\[m [1;34m\[m  
[1;34m|[m [1;36m|[m[1;34m/[m  
[1;34m|[m[1;34m/[m[1;36m|[m   
[1;34m|[m * [33m301e491f[m Adding a new gradle task (testJar) to allow test dependencies on eureka-client
* [1;36m|[m   [33m3e041995[m Merge pull request #172 from jeffw-wherethebitsroam/master
[1;36m|[m[32m\[m [1;36m\[m  
[1;36m|[m [32m|[m[1;36m/[m  
[1;36m|[m[1;36m/[m[32m|[m   
[1;36m|[m * [33ma3d5135a[m Fix logging string
[1;36m|[m[1;36m/[m  
* [33m5515bf0b[m [Gradle Release Plugin] - new version commit:  '1.1.139-SNAPSHOT'.
* [33m4c19d2d3[m[33m ([m[1;33mtag: 1.1.138[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.138'.
*   [33mfb929198[m Merge pull request #158 from NiteshKant/master
[33m|[m[34m\[m  
[33m|[m * [33m01624e39[m Modified the console error message
[33m|[m * [33m569cc10a[m Fixes #157
* [34m|[m   [33m8300dfbe[m Merge pull request #153 from ericdowd/vpc-eip
[35m|[m[36m\[m [34m\[m  
[35m|[m * [34m|[m [33m032c5eec[m Use domain of elastic IP to determine vpc or ec2-classic
[35m|[m * [34m|[m [33m774e391d[m Check if the elastic ip is for VPC and behave appropriately
[35m|[m[35m/[m [34m/[m  
[35m|[m [34m|[m *   [33m7fb4c76e[m[33m ([m[1;33mtag: v2.0.0-rc.2[m[33m)[m Merge pull request #509 from tbak/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m  
[35m|[m [34m|[m [1;31m|[m * [33m65b1a899[m Updates recommended in code review.
[35m|[m [34m|[m [1;31m|[m *   [33m55747a93[m Merge remote-tracking branch 'remotes/netflix/2.x' into 2.x
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;34m\[m  
[35m|[m [34m|[m [1;31m|[m * [1;34m|[m [33mcc6760b5[m Improvements in tansport + performance/verification tool - cont.
[35m|[m [34m|[m [1;31m|[m * [1;34m|[m [33m0bd65938[m Improvements in tansport + performance/verification tool.
[35m|[m [34m|[m * [1;34m|[m [1;34m|[m   [33m64cc7847[m Merge pull request #510 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;34m|[m[1;36m\[m [1;34m\[m [1;34m\[m  
[35m|[m [34m|[m [1;34m|[m [1;36m|[m[1;34m_[m[1;34m|[m[1;34m/[m  
[35m|[m [34m|[m [1;34m|[m[1;34m/[m[1;36m|[m [1;34m|[m   
[35m|[m [34m|[m [1;34m|[m * [1;34m|[m [33m1fb96647[m Adding eureka2-eureka1-support to eureka2-client-shaded jar
[35m|[m [34m|[m [1;34m|[m[1;34m/[m [1;34m/[m  
[35m|[m [34m|[m * [1;34m|[m   [33m53adc031[m Merge pull request #508 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;34m|[m[32m\[m [1;34m\[m  
[35m|[m [34m|[m [1;34m|[m [32m|[m[1;34m/[m  
[35m|[m [34m|[m [1;34m|[m[1;34m/[m[32m|[m   
[35m|[m [34m|[m [1;34m|[m * [33m8200437e[m Fixes for shading eureka2-client.
[35m|[m [34m|[m [1;34m|[m * [33m07b5c2f4[m Provide a shaded eureka2-client(-shaded) that shades avro and rxnetty dependencies
[35m|[m [34m|[m [1;34m|[m[1;34m/[m  
[35m|[m [34m|[m *   [33m48c2e190[m Merge pull request #507 from tbak/2.x
[35m|[m [34m|[m [33m|[m[34m\[m  
[35m|[m [34m|[m [33m|[m * [33m107bbd83[m Safer implementation of ack handling + pending ack queue size monitor. Bug fix in EurekaHealthStatusModule module.
[35m|[m [34m|[m * [34m|[m   [33mac269834[m Merge pull request #506 from qiangdavidliu/2.x
[35m|[m [34m|[m [34m|[m[36m\[m [34m\[m  
[35m|[m [34m|[m [34m|[m [36m|[m[34m/[m  
[35m|[m [34m|[m [34m|[m[34m/[m[36m|[m   
[35m|[m [34m|[m [34m|[m * [33m06e4f91b[m Using abs to take value of seed for round robin.
[35m|[m [34m|[m [34m|[m * [33mf1275e65[m - moving T -> CN<T> to ChangeNotifications - variable renaming
[35m|[m [34m|[m [34m|[m * [33m772b15ce[m Removing dependency on Ocelli (for now, until we are ready to integrate with it and use it's more advanced features). The renamed RoundRobinServerResolver functionally does the same thing as before with an internal roundrobin impl.
[35m|[m [34m|[m [34m|[m[34m/[m  
[35m|[m [34m|[m *   [33m8b627dcc[m Merge pull request #504 from qiangdavidliu/2x-shade-rxnetty
[35m|[m [34m|[m [1;31m|[m[1;32m\[m  
[35m|[m [34m|[m [1;31m|[m * [33m5d285465[m Adding shading to ocelli in eureka2-client. Adding some defaults to configs for WriteServerConfig
[35m|[m [34m|[m [1;31m|[m[1;31m/[m  
[35m|[m [34m|[m *   [33m07eabe44[m Merge pull request #503 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m  
[35m|[m [34m|[m [1;33m|[m * [33m1795f8c6[m Use a provider to lazily init ConnectionHandler for the TcpServers
[35m|[m [34m|[m [1;33m|[m[1;33m/[m  
[35m|[m [34m|[m *   [33mc0252656[m Merge pull request #500 from tbak/features/bootstrap
[35m|[m [34m|[m [1;35m|[m[1;36m\[m  
[35m|[m [34m|[m [1;35m|[m * [33m9c0b6157[m Further cleanup.
[35m|[m [34m|[m [1;35m|[m *   [33m9539c097[m Merge branch '2.x' into features/bootstrap
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m\[m  
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m/[m  
[35m|[m [34m|[m [1;35m|[m[1;35m/[m[31m|[m   
[35m|[m [34m|[m * [31m|[m   [33m5158a252[m Merge pull request #499 from tbak/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [31m\[m  
[35m|[m [34m|[m [33m|[m [34m|[m * [33mf2ad87d8[m Further updates/improvements to server bootstrapping + code review suggestions.
[35m|[m [34m|[m [33m|[m [34m|[m * [33m536fa91a[m Implement feature #447 (Write Server Initial Sync).
[35m|[m [34m|[m [33m|[m [34m|[m[34m/[m  
[35m|[m [34m|[m [33m|[m * [33mdad53e96[m Additional constructors in ServerListReader.
[35m|[m [34m|[m [33m|[m * [33m3fc63905[m Fix state metrics update.
[35m|[m [34m|[m [33m|[m[33m/[m  
[35m|[m [34m|[m *   [33ma2d84e73[m Merge pull request #497 from qiangdavidliu/2.x
[35m|[m [34m|[m [35m|[m[36m\[m  
[35m|[m [34m|[m [35m|[m * [33m8dc4cc7e[m Adding documentation
[35m|[m [34m|[m [35m|[m * [33mc96fddf9[m Adding transport protocol versioning: - protocol version encoded as an additional byte - server handlers encode replies dynamically based on protocol version   of inbound request
[35m|[m [34m|[m [35m|[m[35m/[m  
[35m|[m [34m|[m *   [33m4a695c08[m Merge pull request #496 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m  
[35m|[m [34m|[m [1;31m|[m * [33m149b834e[m update karyon version
[35m|[m [34m|[m * [1;32m|[m   [33mc0735025[m Merge pull request #495 from tbak/2.x
[35m|[m [34m|[m [1;32m|[m[1;34m\[m [1;32m\[m  
[35m|[m [34m|[m [1;32m|[m [1;34m|[m[1;32m/[m  
[35m|[m [34m|[m [1;32m|[m[1;32m/[m[1;34m|[m   
[35m|[m [34m|[m [1;32m|[m * [33m1dcbf1c9[m Shade/rellocate avro to avoid conflicts when clients use a different version of it.
[35m|[m [34m|[m [1;32m|[m[1;32m/[m  
[35m|[m [34m|[m *   [33m5de617d1[m Merge pull request #494 from tbak/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m  
[35m|[m [34m|[m [1;35m|[m * [33m43cbf43a[m eureka2-eureka1-support module minor update
[35m|[m [34m|[m [1;35m|[m * [33m872e4587[m Add eureka2-eureka1-support module to help bridge existing Eureka1 clients to Eureka2 without adopting Eureka2 client API yet.
[35m|[m [34m|[m [1;35m|[m[1;35m/[m  
[35m|[m [34m|[m *   [33mcd1e5cd6[m Merge pull request #492 from qiangdavidliu/2.x
[35m|[m [34m|[m [31m|[m[32m\[m  
[35m|[m [34m|[m [31m|[m * [33mb5da3283[m Upgrade rxjava and karyon versions
[35m|[m [34m|[m [31m|[m[31m/[m  
[35m|[m [34m|[m *   [33m69c26def[m Merge pull request #491 from qiangdavidliu/2.x
[35m|[m [34m|[m [33m|[m[34m\[m  
[35m|[m [34m|[m [33m|[m * [33m4f25d5dc[m Revert change to move server names to upper case
[35m|[m [34m|[m [33m|[m * [33m458538eb[m Adding additional fields to AWSDataCenterInfo
[35m|[m [34m|[m * [34m|[m [33mb76e337c[m Merge pull request #490 from qiangdavidliu/2.x
[35m|[m [34m|[m [35m|[m[34m\[m[34m|[m 
[35m|[m [34m|[m [35m|[m * [33m12a47bda[m Adding exception handling for throws when cancelling tasks from SerializedTaskInvoker
[35m|[m [34m|[m [35m|[m * [33m32cbcef5[m remove stale imports
[35m|[m [34m|[m [35m|[m * [33m5aae4ac5[m - Fixes for eureka1 and eureka2 bridging. - Pin Jettison to 1.2 as 1.1 does not handle top level arrays with multiple elements
[35m|[m [34m|[m * [36m|[m [33m6d415277[m Merge pull request #488 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;31m|[m[36m\[m[36m|[m 
[35m|[m [34m|[m [1;31m|[m * [33ma8be6c3c[m Add simple backpressure handling in registry
[35m|[m [34m|[m [1;31m|[m * [33m996634c5[m Renaming client entry from Eureka to Eurekas for naming convention. Removing reference of InterestFunctions from Eurekas class.
[35m|[m [34m|[m [1;31m|[m *   [33mffc5bfa2[m Merge remote-tracking branch 'upstream/2.x' into 2.x
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;31m\[m  
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;31m/[m  
[35m|[m [34m|[m [1;31m|[m[1;31m/[m[1;33m|[m   
[35m|[m [34m|[m * [1;33m|[m   [33m741ec587[m Merge pull request #489 from tbak/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [1;33m\[m  
[35m|[m [34m|[m [1;35m|[m * [1;33m|[m [33m59ac117b[m Update Karyon admin integration  in the embedded server.
[35m|[m [34m|[m [1;35m|[m [1;36m|[m * [33m75cb0828[m Consolidating client APIs with class Eureka as an entry point.
[35m|[m [34m|[m [1;35m|[m [1;36m|[m[1;35m/[m  
[35m|[m [34m|[m [1;35m|[m[1;35m/[m[1;36m|[m   
[35m|[m [34m|[m * [1;36m|[m   [33mbb46e94e[m Merge pull request #487 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;36m|[m[32m\[m [1;36m\[m  
[35m|[m [34m|[m [1;36m|[m [32m|[m[1;36m/[m  
[35m|[m [34m|[m [1;36m|[m[1;36m/[m[32m|[m   
[35m|[m [34m|[m [1;36m|[m * [33mea1b79ec[m Fix: Eureka1RedirectHandler should not fail and block if redirect target vip is not available.
[35m|[m [34m|[m [1;36m|[m * [33m84a68389[m issue #475 lighter eureka client for server resolver
[35m|[m [34m|[m [1;36m|[m[1;36m/[m  
[35m|[m [34m|[m *   [33me22972a8[m Merge pull request #473 from tbak/features/eureka1x_rest_api
[35m|[m [34m|[m [33m|[m[34m\[m  
[35m|[m [34m|[m [33m|[m * [33md5cf26d6[m Further updates after code review.
[35m|[m [34m|[m [33m|[m *   [33m8eaab1df[m Merge remote-tracking branch 'remotes/netflix/2.x' into features/eureka1x_rest_api
[35m|[m [34m|[m [33m|[m [35m|[m[33m\[m  
[35m|[m [34m|[m [33m|[m [35m|[m[33m/[m  
[35m|[m [34m|[m [33m|[m[33m/[m[35m|[m   
[35m|[m [34m|[m * [35m|[m   [33m0e7d3026[m Merge pull request #481 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m [35m\[m  
[35m|[m [34m|[m [1;31m|[m * [35m|[m [33m328476c7[m Complementary change to pull #469 for the removal case.
[35m|[m [34m|[m [1;31m|[m[1;31m/[m [35m/[m  
[35m|[m [34m|[m * [35m|[m   [33mb755bd6a[m Merge pull request #479 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m [35m\[m  
[35m|[m [34m|[m [1;33m|[m * [35m|[m [33md17d5b9c[m Move stream switch to ioScheduler up so it does not affect tests
[35m|[m [34m|[m [1;33m|[m * [35m|[m [33mfb7ff864[m Subscribe potentially blocking dnsLookup on an io Scheduler.
[35m|[m [34m|[m [1;33m|[m * [35m|[m [33m5509bcb4[m DnsResolver query dns on-demand per resolve() call instead of maintaining a background task to constantly poll dns.
[35m|[m [34m|[m [1;33m|[m [1;34m|[m * [33m5a8ac7ad[m Better javadoc documentation in ChangeNotifications class.
[35m|[m [34m|[m [1;33m|[m [1;34m|[m * [33ma3d4f870[m Code cleanup and bug fixes.
[35m|[m [34m|[m [1;33m|[m [1;34m|[m *   [33mdc85da9f[m Merge remote-tracking branch 'remotes/netflix/2.x' into features/eureka1x_rest_api
[35m|[m [34m|[m [1;33m|[m [1;34m|[m [1;35m|[m[1;33m\[m  
[35m|[m [34m|[m [1;33m|[m [1;34m|[m[1;33m_[m[1;35m|[m[1;33m/[m  
[35m|[m [34m|[m [1;33m|[m[1;33m/[m[1;34m|[m [1;35m|[m   
[35m|[m [34m|[m * [1;34m|[m [1;35m|[m [33me27ed5a0[m Merge pull request #478 from qiangdavidliu/2.x
[35m|[m [34m|[m [31m|[m[1;34m\[m[1;34m|[m [1;35m|[m 
[35m|[m [34m|[m [31m|[m * [1;35m|[m [33mc2e96b71[m PauseableSubject was created sometime ago as a replacement for NotificationsSubject (functionally equivalent), but some classes have not been migrated to use the new version. Removing NotificationsSubject and migrating all necessary classes.
[35m|[m [34m|[m [31m|[m[31m/[m [1;35m/[m  
[35m|[m [34m|[m * [1;35m|[m   [33m5e059886[m Merge pull request #474 from qiangdavidliu/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [1;35m\[m  
[35m|[m [34m|[m [33m|[m * [1;35m|[m [33m44774a91[m Updating runCluster config in testkit build.gradle
[35m|[m [34m|[m [33m|[m [34m|[m * [33m5a54d4f4[m Code review recommended changes.
[35m|[m [34m|[m [33m|[m [34m|[m *   [33me0077652[m Merge branch '2.x' into features/eureka1x_rest_api
[35m|[m [34m|[m [33m|[m [34m|[m [35m|[m[33m\[m  
[35m|[m [34m|[m [33m|[m [34m|[m[33m_[m[35m|[m[33m/[m  
[35m|[m [34m|[m [33m|[m[33m/[m[34m|[m [35m|[m   
[35m|[m [34m|[m * [34m|[m [35m|[m   [33md3d3fd13[m Merge pull request #472 from tbak/2.x
[35m|[m [34m|[m [34m|[m[1;32m\[m [34m\[m [35m\[m  
[35m|[m [34m|[m [34m|[m [1;32m|[m[34m/[m [35m/[m  
[35m|[m [34m|[m [34m|[m[34m/[m[1;32m|[m [35m|[m   
[35m|[m [34m|[m [34m|[m * [35m|[m [33mdf4901f1[m InstanceInfo encoding efficiency measurement tool.
[35m|[m [34m|[m [34m|[m[34m/[m [35m/[m  
[35m|[m [34m|[m * [35m|[m   [33mac92ad3d[m Merge pull request #471 from rspieldenner/build_updates
[35m|[m [34m|[m [1;33m|[m[1;34m\[m [35m\[m  
[35m|[m [34m|[m [1;33m|[m * [35m|[m [33mbff76faf[m Updating to new version of nebula.netflixoss
[35m|[m [34m|[m [1;33m|[m[1;33m/[m [35m/[m  
[35m|[m [34m|[m * [35m|[m   [33mfa4c7c60[m[33m ([m[1;33mtag: v2.0.0-rc.1[m[33m)[m Merge pull request #469 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [35m\[m  
[35m|[m [34m|[m [1;35m|[m * [35m|[m [33m208c6338[m NotifyingInstanceInfoHolder eagerly promote updates from local source to snapshot if current snapshot is not from local source. This is done to fix the following race condition: 1. Write Servers A and B replicate to each other 2. Instance X registers with server A (A -> X local, B -> X replicated) 3. Instance X registration channel close and reconnect to server B 3a. A put X local into eviction queue 3b. B put X replicated into eviction queue 4. X register an unchanged instanceInfo to server B 4a. B's holder add X as a second copy as the original replicated copy is yet to be evicted 4b. Because the B holder's copies diff to empty delta, a CN with source local is never published 5. B's senderReplicationChannel disconnects and reconnects to A 5a. B's initState never sees the new X local as the CN is never published, resulting in X not replicating to server A.
[35m|[m [34m|[m [1;35m|[m[1;35m/[m [35m/[m  
[35m|[m [34m|[m * [35m|[m   [33m903bedc2[m Merge pull request #468 from qiangdavidliu/2.x
[35m|[m [34m|[m [31m|[m[32m\[m [35m\[m  
[35m|[m [34m|[m [31m|[m * [35m|[m [33m549c5c2e[m Reverting interestChannel and SenderReplicationChannel send to flatmap instead of concatMap. Added TODOs to re-address these once we rework the interest pipeline to properly address backpressure (github issue #467)
[35m|[m [34m|[m [31m|[m * [35m|[m   [33mf193ac7d[m Merge remote-tracking branch 'upstream/2.x' into 2.x
[35m|[m [34m|[m [31m|[m [33m|[m[31m\[m [35m\[m  
[35m|[m [34m|[m [31m|[m [33m|[m[31m/[m [35m/[m  
[35m|[m [34m|[m [31m|[m[31m/[m[33m|[m [35m|[m   
[35m|[m [34m|[m * [33m|[m [35m|[m   [33mee67c9cd[m Merge pull request #466 from qiangdavidliu/2.x
[35m|[m [34m|[m [35m|[m[36m\[m [33m\[m [35m\[m  
[35m|[m [34m|[m * [36m\[m [33m\[m [35m\[m   [33m9b866ff9[m Merge pull request #465 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m [36m\[m [33m\[m [35m\[m  
[35m|[m [34m|[m * [1;32m\[m [36m\[m [33m\[m [35m\[m   [33m85d541ee[m Merge pull request #464 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m [1;32m\[m [36m\[m [33m\[m [35m\[m  
[35m|[m [34m|[m * [1;34m\[m [1;32m\[m [36m\[m [33m\[m [35m\[m   [33m04b484a1[m Merge pull request #463 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [33m\[m [35m\[m  
[35m|[m [34m|[m * [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [33m\[m [35m\[m   [33m19091650[m Merge pull request #461 from qiangdavidliu/2.x
[35m|[m [34m|[m [31m|[m[32m\[m [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [33m\[m [35m\[m  
[35m|[m [34m|[m * [32m\[m [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [33m\[m [35m\[m   [33me1ff8392[m Merge pull request #460 from qiangdavidliu/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [32m\[m [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [33m\[m [35m\[m  
[35m|[m [34m|[m [33m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m * [35m|[m [33m1f178693[m Minor clean up
[35m|[m [34m|[m [33m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m[36m/[m [35m/[m  
[35m|[m [34m|[m [33m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m * [35m|[m [33me0ed4b72[m upping a test wait time
[35m|[m [34m|[m [33m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m * [35m|[m [33md8441d7e[m Rx-fy Index onSubscribe to be tolerant to backpressure
[35m|[m [34m|[m [33m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m[1;32m/[m [35m/[m  
[35m|[m [34m|[m [33m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m * [35m/[m [33m699c72f8[m bug fix: notification source was getting lost in InitStateHolder
[35m|[m [34m|[m [33m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m[1;34m/[m [35m/[m  
[35m|[m [34m|[m [33m|[m [34m|[m [32m|[m [1;36m|[m * [35m/[m [33mad5c7c04[m use concatMap instead of flatMap for sending interest and replication messages.
[35m|[m [34m|[m [33m|[m [34m|[m [32m|[m [1;36m|[m[1;36m/[m [35m/[m  
[35m|[m [34m|[m [33m|[m [34m|[m [32m|[m * [35m|[m [33mf5252e0f[m Minor fix
[35m|[m [34m|[m [33m|[m [34m|[m [32m|[m * [35m|[m [33mf9b9dccb[m Minor renaming + adding some randomisation in the Ocelli LB Resolver
[35m|[m [34m|[m [33m|[m [34m|[m [32m|[m[32m/[m [35m/[m  
[35m|[m [34m|[m [33m|[m [34m|[m * [35m/[m [33m1883ae22[m More Avro schema fixes
[35m|[m [34m|[m [33m|[m [34m|[m[34m/[m [35m/[m  
[35m|[m [34m|[m [33m|[m * [35m/[m [33mca7dbe74[m Adding SecureVipInterest to Avro Schema + additional Schema tests
[35m|[m [34m|[m [33m|[m[33m/[m [35m/[m  
[35m|[m [34m|[m * [35m|[m   [33m92cb022c[m Merge pull request #457 from qiangdavidliu/2.x
[35m|[m [34m|[m [35m|[m[36m\[m [35m\[m  
[35m|[m [34m|[m [35m|[m * [35m|[m [33m43313ea2[m Adding basic randomisation to SelfClosingConnection
[35m|[m [34m|[m [35m|[m[35m/[m [35m/[m  
[35m|[m [34m|[m * [35m|[m   [33m4751e246[m Merge pull request #444 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m [35m\[m  
[35m|[m [34m|[m [1;31m|[m * [35m|[m [33m703b4770[m fine tuning resolve access
[35m|[m [34m|[m [1;31m|[m * [35m|[m   [33m603f6831[m Merge remote-tracking branch 'upstream/2.x' into 2.x
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;31m\[m [35m\[m  
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;31m/[m [35m/[m  
[35m|[m [34m|[m [1;31m|[m[1;31m/[m[1;33m|[m [35m|[m   
[35m|[m [34m|[m [1;31m|[m * [35m|[m [33me83f6cd5[m Simpifying resolvers yet again. - OcelliServerResolver is now the base implementation of resolvers. - Reintroducing ServerResolvers factory class so that the ServerResolver   interface is lean
[35m|[m [34m|[m [1;31m|[m * [35m|[m   [33m6f8b7c26[m Merge remote-tracking branch 'upstream/2.x' into 2.x
[35m|[m [34m|[m [1;31m|[m [1;35m|[m[1;36m\[m [35m\[m  
[35m|[m [34m|[m [1;31m|[m * [1;36m|[m [35m|[m [33m89233c75[m - ServerResolver DSL - ChangeNotificationFunction.buffers end buffering at onComplete
[35m|[m [34m|[m [1;31m|[m * [1;36m|[m [35m|[m   [33mae24b88b[m Merge remote-tracking branch 'upstream/2.x' into 2.x
[35m|[m [34m|[m [1;31m|[m [31m|[m[32m\[m [1;36m\[m [35m\[m  
[35m|[m [34m|[m [1;31m|[m * [32m\[m [1;36m\[m [35m\[m   [33mc97af746[m Merge remote-tracking branch 'upstream/2.x' into 2.x
[35m|[m [34m|[m [1;31m|[m [33m|[m[34m\[m [32m\[m [1;36m\[m [35m\[m  
[35m|[m [34m|[m [1;31m|[m * [34m|[m [32m|[m [1;36m|[m [35m|[m [33m97857273[m Comments fixes
[35m|[m [34m|[m [1;31m|[m * [34m|[m [32m|[m [1;36m|[m [35m|[m [33m37597c13[m Client API refactor part 2 (creation of clients) for issue #409. Removed the combo EurekaClient and the two independent clients for registration and interest now each have their own builders.
[35m|[m [34m|[m [1;31m|[m [34m|[m [34m|[m [32m|[m [1;36m|[m * [33ma35c4f13[m Eureka 1.x backwards compatible API with delta fetch support.
[35m|[m [34m|[m [1;31m|[m [34m|[m[1;31m_[m[34m|[m[1;31m_[m[32m|[m[1;31m_[m[1;36m|[m[1;31m/[m  
[35m|[m [34m|[m [1;31m|[m[1;31m/[m[34m|[m [34m|[m [32m|[m [1;36m|[m   
[35m|[m [34m|[m * [34m|[m [34m|[m [32m|[m [1;36m|[m   [33meeb256ac[m Merge pull request #454 from tbak/features/eureka1x_rest_api
[35m|[m [34m|[m [1;36m|[m[36m\[m [34m\[m [34m\[m [32m\[m [1;36m\[m  
[35m|[m [34m|[m [1;36m|[m [36m|[m[1;36m_[m[34m|[m[1;36m_[m[34m|[m[1;36m_[m[32m|[m[1;36m/[m  
[35m|[m [34m|[m [1;36m|[m[1;36m/[m[36m|[m [34m|[m [34m|[m [32m|[m   
[35m|[m [34m|[m [1;36m|[m * [34m|[m [34m|[m [32m|[m [33m65ba1aa4[m Code review recommended changes.
[35m|[m [34m|[m [1;36m|[m * [34m|[m [34m|[m [32m|[m [33m7cf6a1fe[m Fix file name case error
[35m|[m [34m|[m [1;36m|[m * [34m|[m [34m|[m [32m|[m [33mfebbf4a3[m Eureka 1.x backwards compatible API - registration requests
[35m|[m [34m|[m [1;36m|[m * [34m|[m [34m|[m [32m|[m [33m94cff870[m Move eureka 1.x client factory to junit resource class.
[35m|[m [34m|[m [1;36m|[m * [34m|[m [34m|[m [32m|[m   [33m20ee1346[m Merge remote-tracking branch 'remotes/netflix/2.x' into features/eureka1x_rest_api
[35m|[m [34m|[m [1;36m|[m [1;31m|[m[1;36m\[m [34m\[m [34m\[m [32m\[m  
[35m|[m [34m|[m [1;36m|[m [1;31m|[m[1;36m/[m [34m/[m [34m/[m [32m/[m  
[35m|[m [34m|[m [1;36m|[m[1;36m/[m[1;31m|[m [34m|[m [34m|[m [32m|[m   
[35m|[m [34m|[m * [1;31m|[m [34m|[m [34m|[m [32m|[m   [33me7a2fabd[m Merge pull request #452 from tbak/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m [1;31m\[m [34m\[m [34m\[m [32m\[m  
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [34m|[m [34m|[m [32m|[m [33mb78c3c71[m Fix bug #448
[35m|[m [34m|[m [1;33m|[m[1;33m/[m [1;31m/[m [34m/[m [34m/[m [32m/[m  
[35m|[m [34m|[m * [1;31m|[m [34m|[m [34m|[m [32m|[m   [33md4f9e6cf[m Merge pull request #451 from tbak/2.x
[35m|[m [34m|[m [32m|[m[1;36m\[m [1;31m\[m [34m\[m [34m\[m [32m\[m  
[35m|[m [34m|[m [32m|[m [1;36m|[m[32m_[m[1;31m|[m[32m_[m[34m|[m[32m_[m[34m|[m[32m/[m  
[35m|[m [34m|[m [32m|[m[32m/[m[1;36m|[m [1;31m|[m [34m|[m [34m|[m   
[35m|[m [34m|[m [32m|[m * [1;31m|[m [34m|[m [34m|[m [33m6d987ffe[m Updates recommended in code review.
[35m|[m [34m|[m [32m|[m * [1;31m|[m [34m|[m [34m|[m [33m3108ef8b[m Bug fix for issue #449 (missing/invalid batching delineation)
[35m|[m [34m|[m [32m|[m[32m/[m [1;31m/[m [34m/[m [34m/[m  
[35m|[m [34m|[m [32m|[m * [34m/[m [34m/[m [33m0ea36faa[m Eureka 1.x backwards compatible API (query operations)
[35m|[m [34m|[m [32m|[m[32m/[m [34m/[m [34m/[m  
[35m|[m [34m|[m * [34m|[m [34m|[m   [33m029eaf7a[m Merge pull request #446 from qiangdavidliu/2.x-replication-fix
[35m|[m [34m|[m [31m|[m[32m\[m [34m\[m [34m\[m  
[35m|[m [34m|[m [31m|[m * [34m\[m [34m\[m   [33mffdf60f3[m Merge remote-tracking branch 'upstream/2.x' into 2.x-replication-fix
[35m|[m [34m|[m [31m|[m [33m|[m[31m\[m [34m\[m [34m\[m  
[35m|[m [34m|[m [31m|[m [33m|[m[31m/[m [34m/[m [34m/[m  
[35m|[m [34m|[m [31m|[m[31m/[m[33m|[m [34m|[m [34m|[m   
[35m|[m [34m|[m * [33m|[m [34m|[m [34m|[m   [33m86e66dee[m Merge pull request #445 from tbak/2.x
[35m|[m [34m|[m [34m|[m[36m\[m [33m\[m [34m\[m [34m\[m  
[35m|[m [34m|[m [34m|[m [36m|[m[34m_[m[33m|[m[34m_[m[34m|[m[34m/[m  
[35m|[m [34m|[m [34m|[m[34m/[m[36m|[m [33m|[m [34m|[m   
[35m|[m [34m|[m [34m|[m * [33m|[m [34m|[m [33meab7991c[m Eureka WEB server with HTTP and WebSocket endpoints.
[35m|[m [34m|[m [34m|[m[34m/[m [33m/[m [34m/[m  
[35m|[m [34m|[m [34m|[m * [34m|[m [33m9688fd23[m Reverting change in retryableChannel to merge op result observable with lifecycle. Fixes for some tests that had slightly inaccurate mocks for channel interactions.
[35m|[m [34m|[m [34m|[m * [34m|[m [33m2e5ab765[m Replication fix: - handler should subscribe to lifecycle and operation with same subscriber for retries - retryableChannelFactory merge internal channel op with lifecycle instead of independent subscribe
[35m|[m [34m|[m [34m|[m[34m/[m [34m/[m  
[35m|[m [34m|[m * [34m|[m   [33m000c4e36[m Merge pull request #443 from tbak/2.x
[35m|[m [34m|[m [34m|[m[1;32m\[m [34m\[m  
[35m|[m [34m|[m [34m|[m [1;32m|[m[34m/[m  
[35m|[m [34m|[m [34m|[m[34m/[m[1;32m|[m   
[35m|[m [34m|[m [34m|[m * [33md841fdc7[m Configuration update to work properly in local environment.
[35m|[m [34m|[m [34m|[m[34m/[m  
[35m|[m [34m|[m *   [33m965a02e5[m Merge pull request #442 from tbak/features/health
[35m|[m [34m|[m [1;33m|[m[1;34m\[m  
[35m|[m [34m|[m [1;33m|[m * [33m946084c1[m Updates recommended in code review.
[35m|[m [34m|[m [1;33m|[m * [33mf8380cb9[m Bind properly healthcheck components in all Eureka servers.
[35m|[m [34m|[m [1;33m|[m * [33mb984eef7[m Integrate Eureka healthcheck with Karyon admin HealthCheckHandler.
[35m|[m [34m|[m [1;33m|[m *   [33m0618457d[m Merge branch '2.x' into features/health
[35m|[m [34m|[m [1;33m|[m [1;35m|[m[1;33m\[m  
[35m|[m [34m|[m [1;33m|[m [1;35m|[m[1;33m/[m  
[35m|[m [34m|[m [1;33m|[m[1;33m/[m[1;35m|[m   
[35m|[m [34m|[m * [1;35m|[m   [33m5e1d2e13[m Merge pull request #438 from qiangdavidliu/2.x
[35m|[m [34m|[m [31m|[m[32m\[m [1;35m\[m  
[35m|[m [34m|[m [31m|[m * [1;35m|[m [33m007dcb5c[m PeriodicDataCenterInfoResolver ignores errors per resolve.
[35m|[m [34m|[m * [32m|[m [1;35m|[m [33m225f2c72[m Merge pull request #437 from qiangdavidliu/2.x
[35m|[m [34m|[m [33m|[m[32m\[m[32m|[m [1;35m|[m 
[35m|[m [34m|[m [33m|[m * [1;35m|[m   [33md1ef088d[m Merge remote-tracking branch 'upstream/2.x' into 2.x
[35m|[m [34m|[m [33m|[m [35m|[m[33m\[m [1;35m\[m  
[35m|[m [34m|[m [33m|[m [35m|[m[33m/[m [1;35m/[m  
[35m|[m [34m|[m [33m|[m[33m/[m[35m|[m [1;35m|[m   
[35m|[m [34m|[m * [35m|[m [1;35m|[m   [33me3e224e7[m Merge pull request #436 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m [35m\[m [1;35m\[m  
[35m|[m [34m|[m [1;31m|[m [1;32m|[m * [1;35m|[m [33m21cfba99[m upgrading rxnetty and spectator versions
[35m|[m [34m|[m [1;31m|[m [1;32m|[m[1;32m/[m [1;35m/[m  
[35m|[m [34m|[m [1;31m|[m * [1;35m|[m   [33mbd8cd3c4[m Merge remote-tracking branch 'upstream/2.x' into 2.x
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;31m\[m [1;35m\[m  
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;31m/[m [1;35m/[m  
[35m|[m [34m|[m [1;31m|[m[1;31m/[m[1;33m|[m [1;35m|[m   
[35m|[m [34m|[m * [1;33m|[m [1;35m|[m   [33mf940fc91[m Merge pull request #435 from tbak/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [1;33m\[m [1;35m\[m  
[35m|[m [34m|[m [1;35m|[m * [1;33m|[m [1;35m|[m [33mcd6a8dfe[m Code review recommendations.
[35m|[m [34m|[m [1;35m|[m [1;36m|[m * [1;35m|[m [33m205f7d41[m rename Source.Matcher to Source.SourceMatcher
[35m|[m [34m|[m [1;35m|[m [1;36m|[m * [1;35m|[m [33m4501c66c[m Changes to MultiSourcedDataHolder implementation so that - updates for the same origin:name Sources replace each other regardless of source.id - deletes only execute when origin:name:id equals for the sources
[35m|[m [34m|[m [1;35m|[m [1;36m|[m[1;35m/[m [1;35m/[m  
[35m|[m [34m|[m [1;35m|[m[1;35m/[m[1;36m|[m [1;35m|[m   
[35m|[m [34m|[m [1;35m|[m [1;36m|[m * [33m47440eba[m Remove component specific health status type parameter.
[35m|[m [34m|[m [1;35m|[m [1;36m|[m * [33m23153a76[m Eureka health status monitoring + embedded cluster code cleanup.
[35m|[m [34m|[m [1;35m|[m [1;36m|[m[1;36m/[m  
[35m|[m [34m|[m [1;35m|[m * [33mc7a26db3[m Implement custom EurekaInterestClient for Eureka Read server.
[35m|[m [34m|[m [1;35m|[m[1;35m/[m  
[35m|[m [34m|[m *   [33m01ade936[m Merge pull request #429 from tbak/2.x
[35m|[m [34m|[m [31m|[m[32m\[m  
[35m|[m [34m|[m [31m|[m * [33m86e36795[m Rename Eureka2 UI resources, so they do not overlapp with 1.x classes.
[35m|[m [34m|[m [31m|[m[31m/[m  
[35m|[m [34m|[m *   [33mb3c82352[m Merge pull request #428 from tbak/2.x
[35m|[m [34m|[m [33m|[m[34m\[m  
[35m|[m [34m|[m [33m|[m * [33m64305102[m Fix Eureka2 UI tab.
[35m|[m [34m|[m [33m|[m[33m/[m  
[35m|[m [34m|[m *   [33m861e6679[m Merge pull request #427 from tbak/2.x
[35m|[m [34m|[m [35m|[m[36m\[m  
[35m|[m [34m|[m [35m|[m * [33m0827997e[m Get rid of blocking call in AuditServiceController.
[35m|[m [34m|[m [35m|[m * [33mf9007d36[m Get rid of blocking subscription in AuditServiceController.
[35m|[m [34m|[m [35m|[m[35m/[m  
[35m|[m [34m|[m *   [33m575d122b[m Merge pull request #426 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m  
[35m|[m [34m|[m [1;31m|[m * [33m48f3a3de[m Updates per comments.
[35m|[m [34m|[m [1;31m|[m * [33m8369e48d[m Eureka Client Refactor. Changes in this pull are: - changes to the client API per github issue #409 - changes to server side selfRegistrationServices due to client API changes - fix for RetryableChannelFactory channels to be able to handle Observable.just() ops. - changes to tests due to client API changes
[35m|[m [34m|[m [1;31m|[m[1;31m/[m  
[35m|[m [34m|[m *   [33m04576d47[m Merge pull request #424 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m  
[35m|[m [34m|[m [1;33m|[m *   [33m1c0a7138[m Merge remote-tracking branch 'upstream/2.x' into 2.x
[35m|[m [34m|[m [1;33m|[m [1;35m|[m[1;33m\[m  
[35m|[m [34m|[m [1;33m|[m [1;35m|[m[1;33m/[m  
[35m|[m [34m|[m [1;33m|[m[1;33m/[m[1;35m|[m   
[35m|[m [34m|[m * [1;35m|[m   [33m269f12a8[m Merge pull request #423 from tbak/refactorings/remove_channel_snapshot_subscription
[35m|[m [34m|[m [31m|[m[32m\[m [1;35m\[m  
[35m|[m [34m|[m [31m|[m * [1;35m|[m [33m7b682bc4[m Apply code review suggestions.
[35m|[m [34m|[m [31m|[m * [1;35m|[m   [33m2e4d1bd2[m Merge branch '2.x' into refactorings/remove_channel_snapshot_subscription
[35m|[m [34m|[m [31m|[m [33m|[m[31m\[m [1;35m\[m  
[35m|[m [34m|[m [31m|[m [33m|[m[31m/[m [1;35m/[m  
[35m|[m [34m|[m [31m|[m[31m/[m[33m|[m [1;35m|[m   
[35m|[m [34m|[m [31m|[m * [1;35m|[m [33m1b1cbbfc[m Remove snapshot subscription logic from the interest channel/transport.
[35m|[m [34m|[m [31m|[m * [1;35m|[m [33me3137f08[m Refactor EurekaServerResolver to use new buffering mechanism, instead of snapshot subscription.
[35m|[m [34m|[m [31m|[m * [1;35m|[m [33m0cfefad5[m Implement observable transformers to convert notification stream with buffering sentinels into stream of lists (delta/snapshot).
[35m|[m [34m|[m [31m|[m [34m|[m * [33m051dd929[m Moving Server to core/utils and removing usage of InetSocketAddress.
[35m|[m [34m|[m [31m|[m [34m|[m[31m/[m  
[35m|[m [34m|[m [31m|[m[31m/[m[34m|[m   
[35m|[m [34m|[m * [34m|[m   [33m1c4681c4[m Merge pull request #403 from tbak/features/interest_channel_with_state_propagation2
[35m|[m [34m|[m [35m|[m[36m\[m [34m\[m  
[35m|[m [34m|[m [35m|[m * [34m\[m   [33m9dbe886a[m Merge remote-tracking branch 'remotes/netflix/2.x' into features/interest_channel_with_state_propagation2
[35m|[m [34m|[m [35m|[m [1;31m|[m[35m\[m [34m\[m  
[35m|[m [34m|[m [35m|[m [1;31m|[m[35m/[m [34m/[m  
[35m|[m [34m|[m [35m|[m[35m/[m[1;31m|[m [34m|[m   
[35m|[m [34m|[m * [1;31m|[m [34m|[m   [33m5c02f677[m Merge pull request #421 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m [1;31m\[m [34m\[m  
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [34m|[m [33m3e2b0949[m more eviction updates
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [34m|[m [33me6fb9b5e[m Some more eviction fixes
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [34m|[m [33ma0c70458[m DnsLookup fix
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [34m|[m [33m78d72da5[m fixes:  - remove typo on configurationNames prefix (extra 's')  - reverting to old eviction mechanism in PreservableRegistry
[35m|[m [34m|[m [1;33m|[m [1;34m|[m * [34m|[m [33mafb4c14b[m Apply code review comments.
[35m|[m [34m|[m [1;33m|[m [1;34m|[m [34m|[m[34m/[m  
[35m|[m [34m|[m [1;33m|[m [1;34m|[m *   [33mfe2350c8[m Merge remote-tracking branch 'remotes/netflix/2.x' into features/interest_channel_with_state_propagation2
[35m|[m [34m|[m [1;33m|[m [1;34m|[m [1;35m|[m[1;33m\[m  
[35m|[m [34m|[m [1;33m|[m [1;34m|[m[1;33m_[m[1;35m|[m[1;33m/[m  
[35m|[m [34m|[m [1;33m|[m[1;33m/[m[1;34m|[m [1;35m|[m   
[35m|[m [34m|[m * [1;34m|[m [1;35m|[m [33ma3069d97[m Merge pull request #420 from qiangdavidliu/2.x
[35m|[m [34m|[m [31m|[m[1;34m\[m[1;34m|[m [1;35m|[m 
[35m|[m [34m|[m [31m|[m * [1;35m|[m [33m6a8da24d[m Updating test to new behaviour
[35m|[m [34m|[m [31m|[m * [1;35m|[m [33md105ead6[m BaseMessageConnection alway shutdown with error on incoming.doOnTerminate as the netty connection never onError.
[35m|[m [34m|[m * [32m|[m [1;35m|[m [33m7bcffea2[m Merge pull request #419 from qiangdavidliu/2.x
[35m|[m [34m|[m [33m|[m[32m\[m[32m|[m [1;35m|[m 
[35m|[m [34m|[m [33m|[m * [1;35m|[m [33m9ad575f1[m Simple handling of dns as txt records (assuming it's a list of hostnames)
[35m|[m [34m|[m * [34m|[m [1;35m|[m [33md291d676[m Merge pull request #417 from qiangdavidliu/2.x
[35m|[m [34m|[m [35m|[m[34m\[m[34m|[m [1;35m|[m 
[35m|[m [34m|[m [35m|[m * [1;35m|[m [33mdbd6c332[m - Updated selfInfoResolvers - Added resolver that periodically refresh datacenter info - Added caching resolver that caches in a BehaviourSubject for   multiple subscribers
[35m|[m [34m|[m [35m|[m * [1;35m|[m   [33m4b573ffb[m Merge remote-tracking branch 'upstream/2.x' into 2.x
[35m|[m [34m|[m [35m|[m [1;31m|[m[1;32m\[m [1;35m\[m  
[35m|[m [34m|[m [35m|[m [1;31m|[m [1;32m|[m * [33m190e22f9[m Implement new client API contract for marking change notification stream buffers.
[35m|[m [34m|[m [35m|[m [1;31m|[m [1;32m|[m *   [33m7570037c[m Merge branch '2.x' into features/interest_channel_with_state_propagation2
[35m|[m [34m|[m [35m|[m [1;31m|[m [1;32m|[m [1;33m|[m[35m\[m  
[35m|[m [34m|[m [35m|[m [1;31m|[m[35m_[m[1;32m|[m[35m_[m[1;33m|[m[35m/[m  
[35m|[m [34m|[m [35m|[m[35m/[m[1;31m|[m [1;32m|[m [1;33m|[m   
[35m|[m [34m|[m * [1;31m|[m [1;32m|[m [1;33m|[m [33md9611530[m Merge pull request #413 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;32m|[m[1;31m\[m[1;31m|[m [1;32m|[m [1;33m|[m 
[35m|[m [34m|[m [1;32m|[m [1;31m|[m[1;32m/[m [1;33m/[m  
[35m|[m [34m|[m [1;32m|[m[1;32m/[m[1;31m|[m [1;33m|[m   
[35m|[m [34m|[m [1;32m|[m * [1;33m|[m [33m159ee268[m Fixes: - client interestChannel now evict older entries once new channel is available - AbstractClientChannel properly handle connection lifecycle
[35m|[m [34m|[m [1;32m|[m [1;36m|[m *   [33m201182d7[m Merge branch '2.x' into features/interest_channel_with_state_propagation2
[35m|[m [34m|[m [1;32m|[m [1;36m|[m [31m|[m[1;32m\[m  
[35m|[m [34m|[m [1;32m|[m [1;36m|[m[1;32m_[m[31m|[m[1;32m/[m  
[35m|[m [34m|[m [1;32m|[m[1;32m/[m[1;36m|[m [31m|[m   
[35m|[m [34m|[m * [1;36m|[m [31m|[m   [33m6ed3b092[m Merge pull request #415 from tbak/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [1;36m\[m [31m\[m  
[35m|[m [34m|[m [33m|[m * [1;36m|[m [31m|[m [33mfc3f8e48[m Replace hardcoded constants with configuration properties.
[35m|[m [34m|[m [33m|[m * [1;36m|[m [31m|[m [33m8f968b54[m Pass to TransportClient EurekaClientMetricFactory, instead of using singleton default.
[35m|[m [34m|[m [33m|[m[33m/[m [1;36m/[m [31m/[m  
[35m|[m [34m|[m * [1;36m|[m [31m|[m [33mc784330d[m Merge pull request #404 from qiangdavidliu/2.x
[35m|[m [34m|[m [35m|[m[1;36m\[m[1;36m|[m [31m|[m 
[35m|[m [34m|[m [35m|[m * [31m|[m [33m14a9aa67[m Updates to names + builder for basic configs
[35m|[m [34m|[m [35m|[m * [31m|[m [33m2fc82c9b[m Refactoring EurekaTransportConfig into the client and server
[35m|[m [34m|[m [35m|[m * [31m|[m [33m1b39928f[m Adding new files
[35m|[m [34m|[m [35m|[m * [31m|[m [33m13661a8a[m - Adding config interface for defining connection level configuration. - Moving registry config into CommonServerConfig - Cleaned up Server Config classes.
[35m|[m [34m|[m * [36m|[m [31m|[m   [33m9579372a[m Merge pull request #411 from tbak/2.x
[35m|[m [34m|[m [36m|[m[1;32m\[m [36m\[m [31m\[m  
[35m|[m [34m|[m [36m|[m [1;32m|[m[36m/[m [31m/[m  
[35m|[m [34m|[m [36m|[m[36m/[m[1;32m|[m [31m|[m   
[35m|[m [34m|[m [36m|[m * [31m|[m [33mc62e6080[m Use Eureka 1.x mock server in bridge integration tests.
[35m|[m [34m|[m [36m|[m[36m/[m [31m/[m  
[35m|[m [34m|[m [36m|[m *   [33mebd31f51[m Merge remote-tracking branch 'remotes/netflix/2.x' into features/interest_channel_with_state_propagation2
[35m|[m [34m|[m [36m|[m [1;33m|[m[36m\[m  
[35m|[m [34m|[m [36m|[m [1;33m|[m[36m/[m  
[35m|[m [34m|[m [36m|[m[36m/[m[1;33m|[m   
[35m|[m [34m|[m * [1;33m|[m   [33m4f07c7e3[m Merge pull request #390 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [1;33m\[m  
[35m|[m [34m|[m [1;35m|[m * [1;33m|[m [33mb28f560a[m Removing EurekaClientTest (as the client now just delegates to the Handlers) and adding the interest tests to the InterestHandlerTest class
[35m|[m [34m|[m [1;35m|[m[1;35m/[m [1;33m/[m  
[35m|[m [34m|[m * [1;33m|[m   [33m244e65b9[m Merge pull request #388 from qiangdavidliu/2.x
[35m|[m [34m|[m [31m|[m[32m\[m [1;33m\[m  
[35m|[m [34m|[m [31m|[m * [1;33m|[m [33mcced0e7c[m Method renaming
[35m|[m [34m|[m [31m|[m * [1;33m|[m [33mf879c2e2[m Commited too early. Adding new mocks needed in test for connectionLifecycle
[35m|[m [34m|[m [31m|[m * [1;33m|[m [33m2b342cfa[m Connecting connection lifecycle to channel lifecycle in AbstractClientChannel.
[35m|[m [34m|[m [31m|[m * [1;33m|[m   [33m99a5fd58[m Merge remote-tracking branch 'upstream/2.x' into 2.x
[35m|[m [34m|[m [31m|[m [33m|[m[31m\[m [1;33m\[m  
[35m|[m [34m|[m [31m|[m [33m|[m[31m/[m [1;33m/[m  
[35m|[m [34m|[m [31m|[m[31m/[m[33m|[m [1;33m|[m   
[35m|[m [34m|[m [31m|[m * [1;33m|[m [33m324fb601[m Moving RetryableConnection and related to eureka-core. Update replication channel to using RetryableConnection.
[35m|[m [34m|[m [31m|[m [34m|[m * [33mcbd0e7b1[m Implementation of interest channel state propagation (batching hints), as described by #384.
[35m|[m [34m|[m [31m|[m [34m|[m[31m/[m  
[35m|[m [34m|[m [31m|[m[31m/[m[34m|[m   
[35m|[m [34m|[m * [34m|[m   [33m1662b6df[m Merge pull request #387 from tbak/2.x
[35m|[m [34m|[m [35m|[m[36m\[m [34m\[m  
[35m|[m [34m|[m [35m|[m * [34m|[m [33mfb7d8281[m Minor cleanup.
[35m|[m [34m|[m [35m|[m[35m/[m [34m/[m  
[35m|[m [34m|[m * [34m|[m   [33ma87c103a[m Merge pull request #386 from tbak/2.x
[35m|[m [34m|[m [34m|[m[1;32m\[m [34m\[m  
[35m|[m [34m|[m [34m|[m [1;32m|[m[34m/[m  
[35m|[m [34m|[m [34m|[m[34m/[m[1;32m|[m   
[35m|[m [34m|[m [34m|[m * [33mdece152b[m Fix dashboard server, and startup integration tests.
[35m|[m [34m|[m [34m|[m[34m/[m  
[35m|[m [34m|[m *   [33m4e68ecc0[m Merge pull request #383 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m  
[35m|[m [34m|[m [1;33m|[m * [33me7ebee98[m Reusing TestChannel and TestChannelFactory in RetryableConnectionFactoryTest
[35m|[m [34m|[m [1;33m|[m[1;33m/[m  
[35m|[m [34m|[m *   [33m548349ef[m Merge pull request #382 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m  
[35m|[m [34m|[m [1;35m|[m * [33mfed4b669[m comment update
[35m|[m [34m|[m [1;35m|[m * [33m856942e1[m Updates
[35m|[m [34m|[m [1;35m|[m * [33mbef2ece3[m Adding comments
[35m|[m [34m|[m [1;35m|[m *   [33mab98082c[m Merge remote-tracking branch 'upstream/2.x' into 2.x
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m\[m  
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m/[m  
[35m|[m [34m|[m [1;35m|[m[1;35m/[m[31m|[m   
[35m|[m [34m|[m * [31m|[m   [33m91d2f573[m Merge pull request #379 from tbak/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [31m\[m  
[35m|[m [34m|[m [33m|[m * [31m|[m [33mbcaca725[m Use TestScheduler in InterestChannelImplTest for better control over the testing process.
[35m|[m [34m|[m [33m|[m[33m/[m [31m/[m  
[35m|[m [34m|[m * [31m|[m   [33m438c9d80[m Merge pull request #378 from tbak/2.x
[35m|[m [34m|[m [35m|[m[36m\[m [31m\[m  
[35m|[m [34m|[m [35m|[m * [31m|[m [33me9e32cb5[m Further metrics cleanup.
[35m|[m [34m|[m [35m|[m[35m/[m [31m/[m  
[35m|[m [34m|[m * [31m|[m   [33m78db9c59[m Merge pull request #377 from tbak/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m [31m\[m  
[35m|[m [34m|[m [1;31m|[m * [31m|[m [33mcc61fd21[m Bug fixes
[35m|[m [34m|[m [1;31m|[m[1;31m/[m [31m/[m  
[35m|[m [34m|[m * [31m|[m   [33mba5bc707[m Merge pull request #375 from tbak/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m [31m\[m  
[35m|[m [34m|[m [1;33m|[m * [31m|[m [33m698f3ca5[m Add timeouts to all unit/integration tests, to prevent build from halting.
[35m|[m [34m|[m [1;33m|[m * [31m|[m [33m129dbe71[m Update dependencies (ocelli).
[35m|[m [34m|[m [1;33m|[m * [31m|[m [33mdef32042[m Fix connection metrics.
[35m|[m [34m|[m [1;33m|[m[1;33m/[m [31m/[m  
[35m|[m [34m|[m * [31m|[m   [33mb145385d[m Merge pull request #374 from tbak/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [31m\[m  
[35m|[m [34m|[m [1;35m|[m * [31m|[m [33m0b8eebb0[m Usage of junit categories defined in eureka2-test-utils, require that the latter package is required as test dependency. Otherwise gradle build fails.
[35m|[m [34m|[m [1;35m|[m * [31m|[m [33m8bcb2732[m Add by default bintray snapshot repository (until first eureka rc release).
[35m|[m [34m|[m [1;35m|[m * [31m|[m [33m77c5c05e[m Use interface base names as metrics class tag value.
[35m|[m [34m|[m [1;35m|[m[1;35m/[m [31m/[m  
[35m|[m [34m|[m * [31m|[m   [33m26662092[m Merge pull request #373 from tbak/2.x
[35m|[m [34m|[m [31m|[m[32m\[m [31m\[m  
[35m|[m [34m|[m [31m|[m * [31m|[m [33md06f304e[m Depend on karyon snapshot releases.
[35m|[m [34m|[m [31m|[m[31m/[m [31m/[m  
[35m|[m [34m|[m [31m|[m * [33m67575c08[m Client channel major refactor: - more consistent channel lifecycles and onComplete/onError - old Retryable channels are not RetryableConnections that can be .retry()-ed on the lifecycle.   for each retry, new channels are created and the old channel shutdown - registrationHandler now takes a stream of InstanceInfos - registrationTracker that bridges between the old register/unregister API and the new   stream based API. EurekaClient API change to the new form is not done as part of this pull   to minimize the change list. It will change in a subsequent pull.
[35m|[m [34m|[m [31m|[m[31m/[m  
[35m|[m [34m|[m *   [33m9ffd8459[m Merge pull request #355 from tbak/2.x
[35m|[m [34m|[m [33m|[m[34m\[m  
[35m|[m [34m|[m [33m|[m * [33mffb10fb7[m Bug fix + additional unit test.
[35m|[m [34m|[m [33m|[m *   [33m2024ea96[m Merge remote-tracking branch 'remotes/netflix/2.x' into 2.x
[35m|[m [34m|[m [33m|[m [35m|[m[33m\[m  
[35m|[m [34m|[m [33m|[m [35m|[m[33m/[m  
[35m|[m [34m|[m [33m|[m[33m/[m[35m|[m   
[35m|[m [34m|[m * [35m|[m   [33m049277f3[m Merge pull request #356 from tbak/refactorings/eureka_client
[35m|[m [34m|[m [1;31m|[m[1;32m\[m [35m\[m  
[35m|[m [34m|[m [1;31m|[m * [35m|[m [33m697038ac[m Eureka API update (Eureka class cleanup).
[35m|[m [34m|[m * [1;32m|[m [35m|[m   [33m3574ab4f[m Merge pull request #354 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;32m|[m[1;34m\[m [1;32m\[m [35m\[m  
[35m|[m [34m|[m [1;32m|[m [1;34m|[m[1;32m/[m [35m/[m  
[35m|[m [34m|[m [1;32m|[m[1;32m/[m[1;34m|[m [35m|[m   
[35m|[m [34m|[m [1;32m|[m * [35m|[m [33mf9841a54[m minor fix
[35m|[m [34m|[m [1;32m|[m * [35m|[m [33mc7e3eed7[m Cleaning up startup/shutdown integ tests + adding more logging for shutdown
[35m|[m [34m|[m [1;32m|[m[1;32m/[m [35m/[m  
[35m|[m [34m|[m [1;32m|[m * [33m5dd4b3a3[m Remove accidently added files.
[35m|[m [34m|[m [1;32m|[m * [33m2ce834af[m Metrics update + metrics unit tests.
[35m|[m [34m|[m [1;32m|[m[1;32m/[m  
[35m|[m [34m|[m *   [33mcafcdd13[m Merge pull request #353 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m  
[35m|[m [34m|[m [1;35m|[m * [33maa015d40[m Un-@Ignoring
[35m|[m [34m|[m [1;35m|[m * [33m3dbfa149[m Integration tests clean up
[35m|[m [34m|[m [1;35m|[m * [33mb5729b09[m Ensure onComplete is only called once
[35m|[m [34m|[m [1;35m|[m[1;35m/[m  
[35m|[m [34m|[m *   [33m8f776539[m Merge pull request #351 from tbak/2.x
[35m|[m [34m|[m [31m|[m[32m\[m  
[35m|[m [34m|[m [31m|[m * [33m554a6640[m Fix flaky WriteServerIntegrationTest integration test.
[35m|[m [34m|[m [31m|[m *   [33m30315c7a[m Merge remote-tracking branch 'netflix/2.x' into 2.x
[35m|[m [34m|[m [31m|[m [33m|[m[31m\[m  
[35m|[m [34m|[m [31m|[m [33m|[m[31m/[m  
[35m|[m [34m|[m [31m|[m[31m/[m[33m|[m   
[35m|[m [34m|[m * [33m|[m   [33m5d9df8e4[m Merge pull request #352 from qiangdavidliu/2.x
[35m|[m [34m|[m [35m|[m[36m\[m [33m\[m  
[35m|[m [34m|[m [35m|[m * [33m|[m [33mfbca862c[m BreakerSwitchOperator now properly onComplete and unsubscribe + tests for this behaviour
[35m|[m [34m|[m [35m|[m [36m|[m * [33m8f074ae4[m Report more information for failing test.
[35m|[m [34m|[m [35m|[m [36m|[m * [33m1aa73986[m Minor update in state transition method contract to make it less confusing.
[35m|[m [34m|[m [35m|[m [36m|[m * [33m6a9cb023[m Metrics update - WIP
[35m|[m [34m|[m [35m|[m [36m|[m * [33m07901664[m Extract API for metrics. Move from servo to spectator. WIP
[35m|[m [34m|[m [35m|[m [36m|[m[35m/[m  
[35m|[m [34m|[m [35m|[m[35m/[m[36m|[m   
[35m|[m [34m|[m * [36m|[m   [33m5ae1104f[m Merge pull request #350 from tbak/2.x
[35m|[m [34m|[m [36m|[m[1;32m\[m [36m\[m  
[35m|[m [34m|[m [36m|[m [1;32m|[m[36m/[m  
[35m|[m [34m|[m [36m|[m[36m/[m[1;32m|[m   
[35m|[m [34m|[m [36m|[m * [33mb7825a20[m Self-unregister of Eureka server during shutdown process. Additional unit/integration tests.
[35m|[m [34m|[m [36m|[m[36m/[m  
[35m|[m [34m|[m *   [33me685f745[m Merge pull request #348 from tbak/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m  
[35m|[m [34m|[m [1;33m|[m * [33ma75fbbde[m Fix bug in DnsResolverBuilder, where the default scheduler is not created.
[35m|[m [34m|[m [1;33m|[m[1;33m/[m  
[35m|[m [34m|[m *   [33m70649dcc[m Merge pull request #347 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m  
[35m|[m [34m|[m [1;35m|[m * [33m7aea717a[m Refactored retry strategy as an util and applied it when useful
[35m|[m [34m|[m [1;35m|[m * [33m1abe4958[m Being more rx-y
[35m|[m [34m|[m [1;35m|[m[1;35m/[m  
[35m|[m [34m|[m *   [33mb61b7890[m Merge pull request #345 from qiangdavidliu/2.x
[35m|[m [34m|[m [31m|[m[32m\[m  
[35m|[m [34m|[m [31m|[m * [33m7460ed3b[m Adding random lifecycle test suite
[35m|[m [34m|[m [31m|[m[31m/[m  
[35m|[m [34m|[m *   [33mf7c825c9[m Merge pull request #344 from qiangdavidliu/2.x
[35m|[m [34m|[m [33m|[m[34m\[m  
[35m|[m [34m|[m [33m|[m * [33md9b1e38d[m test fix
[35m|[m [34m|[m [33m|[m * [33maf72d4e3[m Adding test
[35m|[m [34m|[m [33m|[m * [33me09c92d3[m Increasing test times to account for lag with warming up both write server index and read server index.
[35m|[m [34m|[m [33m|[m * [33m94a72fd3[m Refactoring channel factory and client builder: - bringing together client and server side channel factory interface into a common base - individual channels now have individual factories for modularity - redid EurekaClientBuilder
[35m|[m [34m|[m [33m|[m[33m/[m  
[35m|[m [34m|[m *   [33mc9ffd85d[m Merge pull request #343 from tbak/2.x
[35m|[m [34m|[m [35m|[m[36m\[m  
[35m|[m [34m|[m [35m|[m * [33mb9c08244[m One more update for module renaming.
[35m|[m [34m|[m * [36m|[m [33m2cbfc69c[m Merge pull request #342 from tbak/2.x
[35m|[m [34m|[m [1;31m|[m[36m\[m[36m|[m 
[35m|[m [34m|[m [1;31m|[m * [33m52fd6370[m Align package name between Eureka 1.x and 2.x for sake of the release process. Rename module names from eureka-xxx to eureka2-xxx.
[35m|[m [34m|[m [1;31m|[m[1;31m/[m  
[35m|[m [34m|[m *   [33m7ad568ae[m Merge pull request #340 from tbak/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m  
[35m|[m [34m|[m [1;33m|[m * [33md59c5c1b[m Refactor DnsServerResolver. Add ExternalConnectionTest junit category to isolate tests making external calls (now only DNS).
[35m|[m [34m|[m * [1;34m|[m   [33m41f8aa0f[m Merge pull request #341 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;34m|[m[1;36m\[m [1;34m\[m  
[35m|[m [34m|[m [1;34m|[m [1;36m|[m[1;34m/[m  
[35m|[m [34m|[m [1;34m|[m[1;34m/[m[1;36m|[m   
[35m|[m [34m|[m [1;34m|[m * [33mae72635e[m Adding more bridge tests
[35m|[m [34m|[m [1;34m|[m[1;34m/[m  
[35m|[m [34m|[m *   [33me08cefcf[m Merge pull request #339 from tbak/2.x
[35m|[m [34m|[m [31m|[m[32m\[m  
[35m|[m [34m|[m [31m|[m * [33m31e165ce[m One more fix in flaky WriteClusterIntegrationTest.
[35m|[m [34m|[m [31m|[m[31m/[m  
[35m|[m [34m|[m *   [33mfbfd42cc[m Merge pull request #336 from qiangdavidliu/2.x
[35m|[m [34m|[m [33m|[m[34m\[m  
[35m|[m [34m|[m [33m|[m * [33m0e66ee0d[m Reordering test steps so we can be more deterministic
[35m|[m [34m|[m [33m|[m *   [33ma2d665e5[m Merge remote-tracking branch 'upstream/2.x' into 2.x
[35m|[m [34m|[m [33m|[m [35m|[m[33m\[m  
[35m|[m [34m|[m [33m|[m [35m|[m[33m/[m  
[35m|[m [34m|[m [33m|[m[33m/[m[35m|[m   
[35m|[m [34m|[m * [35m|[m   [33mcc2e9c15[m Merge pull request #335 from tbak/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m [35m\[m  
[35m|[m [34m|[m [1;31m|[m * [35m|[m [33m1141489b[m Fix flaky integration test - third update.
[35m|[m [34m|[m [1;31m|[m * [35m|[m [33m6fafa462[m Fix flaky integration test - second update.
[35m|[m [34m|[m [1;31m|[m * [35m|[m [33md838ea2a[m Fix flaky integration test.
[35m|[m [34m|[m [1;31m|[m * [35m|[m [33m65298aa9[m Remove eureka-ocelli module reference from settings.gradle (the module itself was removed some time ago).
[35m|[m [34m|[m * [1;32m|[m [35m|[m   [33ma1f3d00e[m Merge pull request #338 from rspieldenner/2xgradleplugin
[35m|[m [34m|[m [1;32m|[m[1;34m\[m [1;32m\[m [35m\[m  
[35m|[m [34m|[m [1;32m|[m [1;34m|[m[1;32m/[m [35m/[m  
[35m|[m [34m|[m [1;32m|[m[1;32m/[m[1;34m|[m [35m|[m   
[35m|[m [34m|[m [1;32m|[m * [35m|[m [33mfa1d52af[m Move to nebula.netflixoss 2.2.4 for bintray snapshot fix
[35m|[m [34m|[m [1;32m|[m[1;32m/[m [35m/[m  
[35m|[m [34m|[m * [35m|[m   [33mfde737c3[m Merge pull request #334 from tbak/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [35m\[m  
[35m|[m [34m|[m [1;35m|[m * [35m\[m   [33m6e5df8e2[m Merge remote-tracking branch 'remotes/netflix/2.x' into 2.x
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m\[m [35m\[m  
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m/[m [35m/[m  
[35m|[m [34m|[m [1;35m|[m[1;35m/[m[31m|[m [35m|[m   
[35m|[m [34m|[m * [31m|[m [35m|[m   [33ma15b52c1[m Merge pull request #332 from amit-git/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [31m\[m [35m\[m  
[35m|[m [34m|[m [33m|[m * [31m|[m [35m|[m [33m3e11ad30[m nested cluster ring rendering
[35m|[m [34m|[m * [34m|[m [31m|[m [35m|[m   [33m83aa9ac2[m Merge pull request #333 from qiangdavidliu/2.x
[35m|[m [34m|[m [35m|[m[36m\[m [34m\[m [31m\[m [35m\[m  
[35m|[m [34m|[m [35m|[m [36m|[m [34m|[m * [35m|[m [33m0df56c98[m Test tools update. Separate long running tests from main build with junit categories.
[35m|[m [34m|[m [35m|[m [36m|[m [34m|[m [36m|[m * [33m5453c341[m Comment update too
[35m|[m [34m|[m [35m|[m [36m|[m [34m|[m [36m|[m * [33m48fe6481[m Remove stale import
[35m|[m [34m|[m [35m|[m [36m|[m [34m|[m [36m|[m * [33mb7ab9b29[m Removing EurekaRegistry interface (base interface is now SourcedEurekaRegistry. Refactored Source and SourceMatcher to be more explicit in usage.
[35m|[m [34m|[m [35m|[m [36m|[m [34m|[m[36m_[m[36m|[m[36m/[m  
[35m|[m [34m|[m [35m|[m [36m|[m[36m/[m[34m|[m [36m|[m   
[35m|[m [34m|[m [35m|[m * [34m|[m [36m|[m [33m12069cdd[m Remove test cruft
[35m|[m [34m|[m [35m|[m * [34m|[m [36m|[m [33m2f6d04da[m Removing versioning from InstanceInfo. This is now taken care of by each channel being a unique source instead of recycling localSource and replicationSource(sender).
[35m|[m [34m|[m [35m|[m * [34m|[m [36m|[m [33mba97ad77[m switching replay().refCount() to cache() to avoid extraneous subscription to source observables.
[35m|[m [34m|[m [35m|[m[35m/[m [34m/[m [36m/[m  
[35m|[m [34m|[m * [34m|[m [36m|[m   [33m6c77086f[m Merge pull request #331 from tbak/2.x
[35m|[m [34m|[m [1;31m|[m[36m\[m [34m\[m [36m\[m  
[35m|[m [34m|[m [1;31m|[m [36m|[m [34m|[m[36m/[m  
[35m|[m [34m|[m [1;31m|[m [36m|[m[36m/[m[34m|[m   
[35m|[m [34m|[m [1;31m|[m * [34m|[m   [33m37715ca6[m Merge remote-tracking branch 'remotes/netflix/2.x' into 2.x
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;31m\[m [34m\[m  
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;31m/[m [34m/[m  
[35m|[m [34m|[m [1;31m|[m[1;31m/[m[1;33m|[m [34m|[m   
[35m|[m [34m|[m * [1;33m|[m [34m|[m   [33m6b6df43a[m Merge pull request #330 from qiangdavidliu/2.x-merge-register-update
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [1;33m\[m [34m\[m  
[35m|[m [34m|[m [1;35m|[m * [1;33m|[m [34m|[m [33m8d067675[m Adding unit tests for registration channels
[35m|[m [34m|[m [1;35m|[m * [1;33m|[m [34m|[m [33md67711c0[m Adding tests
[35m|[m [34m|[m [1;35m|[m * [1;33m|[m [34m|[m   [33m782e6bb3[m Merge remote-tracking branch 'upstream/2.x' into 2.x-merge-register-update
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m\[m [1;33m\[m [34m\[m  
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m/[m [1;33m/[m [34m/[m  
[35m|[m [34m|[m [1;35m|[m[1;35m/[m[31m|[m [1;33m|[m [34m|[m   
[35m|[m [34m|[m [1;35m|[m * [1;33m|[m [34m|[m [33m739cdf83[m Various fixes for the registration path to ensure proper ordering of processing.
[35m|[m [34m|[m [1;35m|[m [32m|[m * [34m|[m [33mb82ada87[m Add index compaction, and fix concurrency issues in Index/NotificationSubject.
[35m|[m [34m|[m [1;35m|[m [32m|[m * [34m|[m [33mfb8713ed[m Move test categories to eureka-test-utils package
[35m|[m [34m|[m [1;35m|[m [32m|[m[1;35m/[m [34m/[m  
[35m|[m [34m|[m [1;35m|[m[1;35m/[m[32m|[m [34m|[m   
[35m|[m [34m|[m * [32m|[m [34m|[m   [33m6cb4d66e[m Merge pull request #328 from tbak/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [32m\[m [34m\[m  
[35m|[m [34m|[m [33m|[m * [32m\[m [34m\[m   [33ma4d27ed9[m Merge remote-tracking branch 'netflix/2.x' into 2.x
[35m|[m [34m|[m [33m|[m [35m|[m[33m\[m [32m\[m [34m\[m  
[35m|[m [34m|[m [33m|[m [35m|[m[33m/[m [32m/[m [34m/[m  
[35m|[m [34m|[m [33m|[m[33m/[m[35m|[m [32m|[m [34m|[m   
[35m|[m [34m|[m * [35m|[m [32m|[m [34m|[m   [33m82ac45d7[m Merge pull request #327 from rspieldenner/changelog
[35m|[m [34m|[m [1;31m|[m[1;32m\[m [35m\[m [32m\[m [34m\[m  
[35m|[m [34m|[m [1;31m|[m * [35m|[m [32m|[m [34m|[m [33mbf3e1fed[m Needs a CHANGELOG.md for ease of bintray project creation
[35m|[m [34m|[m [1;31m|[m[1;31m/[m [35m/[m [32m/[m [34m/[m  
[35m|[m [34m|[m [1;31m|[m * [32m|[m [34m|[m   [33md15cbd65[m Merge remote-tracking branch 'remotes/netflix/2.x' into 2.x
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;31m\[m [32m\[m [34m\[m  
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;31m/[m [32m/[m [34m/[m  
[35m|[m [34m|[m [1;31m|[m[1;31m/[m[1;33m|[m [32m|[m [34m|[m   
[35m|[m [34m|[m * [1;33m|[m [32m|[m [34m|[m   [33m664d6144[m Merge pull request #326 from rspieldenner/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [1;33m\[m [32m\[m [34m\[m  
[35m|[m [34m|[m [1;35m|[m * [1;33m|[m [32m|[m [34m|[m [33m369cb314[m Build changes to gradle 2.2.1 and new netflixoss plugin
[35m|[m [34m|[m [1;35m|[m[1;35m/[m [1;33m/[m [32m/[m [34m/[m  
[35m|[m [34m|[m [1;35m|[m * [32m|[m [34m|[m [33m2c324e01[m Optimize AvroCodec (better resource utilization).
[35m|[m [34m|[m [1;35m|[m * [32m|[m [34m|[m [33m061eb849[m Add missing support for metadata serialization.
[35m|[m [34m|[m [1;35m|[m[1;35m/[m [32m/[m [34m/[m  
[35m|[m [34m|[m * [32m|[m [34m|[m [33m311d4eb1[m Merge pull request #324 from qiangdavidliu/2.x-merge-register-update
[35m|[m [34m|[m [31m|[m[32m\[m[32m|[m [34m|[m 
[35m|[m [34m|[m [31m|[m * [34m|[m [33mef5a8087[m Minor updates per comments
[35m|[m [34m|[m [31m|[m * [34m|[m   [33m7962871a[m Merge remote-tracking branch 'upstream/2.x' into 2.x-merge-register-update
[35m|[m [34m|[m [31m|[m [33m|[m[31m\[m [34m\[m  
[35m|[m [34m|[m [31m|[m [33m|[m[31m/[m [34m/[m  
[35m|[m [34m|[m [31m|[m[31m/[m[33m|[m [34m|[m   
[35m|[m [34m|[m * [33m|[m [34m|[m   [33m5b78b168[m Merge pull request #323 from tbak/2.x
[35m|[m [34m|[m [35m|[m[36m\[m [33m\[m [34m\[m  
[35m|[m [34m|[m [35m|[m * [33m|[m [34m|[m [33m10a37ff0[m Updates to the previous commit according to the review comments.
[35m|[m [34m|[m [35m|[m * [33m|[m [34m|[m   [33m8dc2d36d[m Merge remote-tracking branch 'remotes/netflix/2.x' into 2.x
[35m|[m [34m|[m [35m|[m [1;31m|[m[35m\[m [33m\[m [34m\[m  
[35m|[m [34m|[m [35m|[m [1;31m|[m[35m/[m [33m/[m [34m/[m  
[35m|[m [34m|[m [35m|[m[35m/[m[1;31m|[m [33m|[m [34m|[m   
[35m|[m [34m|[m [35m|[m * [33m|[m [34m|[m [33mbf203ad1[m Extend interest subscription protocol to support snapshot subscriptions. Re-implement EurekaServerResolver using SnapshotInterestChannel.
[35m|[m [34m|[m [35m|[m [1;32m|[m * [34m|[m [33ma00b03d5[m Merging Register and Update operations into one for registry, registrationChannel and replicationChannel. Calling this new operation Register for now.
[35m|[m [34m|[m [35m|[m [1;32m|[m[35m/[m [34m/[m  
[35m|[m [34m|[m [35m|[m[35m/[m[1;32m|[m [34m|[m   
[35m|[m [34m|[m * [1;32m|[m [34m|[m   [33m9573030d[m Merge pull request #320 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;32m|[m[1;34m\[m [1;32m\[m [34m\[m  
[35m|[m [34m|[m [1;32m|[m [1;34m|[m[1;32m/[m [34m/[m  
[35m|[m [34m|[m [1;32m|[m[1;32m/[m[1;34m|[m [34m|[m   
[35m|[m [34m|[m [1;32m|[m * [34m|[m [33mf0480994[m Reworked selfInfoResolver and selfRegistrationService to be composible from different streams of updates.
[35m|[m [34m|[m [1;32m|[m * [34m|[m   [33mb570177b[m Merge remote-tracking branch 'upstream/2.x' into 2.x
[35m|[m [34m|[m [1;32m|[m [1;35m|[m[1;32m\[m [34m\[m  
[35m|[m [34m|[m [1;32m|[m [1;35m|[m[1;32m/[m [34m/[m  
[35m|[m [34m|[m [1;32m|[m[1;32m/[m[1;35m|[m [34m|[m   
[35m|[m [34m|[m * [1;35m|[m [34m|[m   [33m90864564[m Merge pull request #322 from tbak/2.x
[35m|[m [34m|[m [31m|[m[32m\[m [1;35m\[m [34m\[m  
[35m|[m [34m|[m [31m|[m * [1;35m|[m [34m|[m [33m4fed76b6[m Add support for DataCenterInfo delta serialization.
[35m|[m [34m|[m [31m|[m[31m/[m [1;35m/[m [34m/[m  
[35m|[m [34m|[m [31m|[m * [34m|[m [33m9a4fa398[m - Renaming SelfRegistrationService interface to SelfIdentityService - Applied the same changes to the bridge
[35m|[m [34m|[m [31m|[m * [34m|[m [33m84e0bd8e[m temporary "fix"ed EurekaClientIntegrationTest
[35m|[m [34m|[m [31m|[m * [34m|[m [33m4b948cac[m Replacing SelfRegistrationService impls with new HealthService
[35m|[m [34m|[m [31m|[m[31m/[m [34m/[m  
[35m|[m [34m|[m * [34m|[m   [33m67364106[m Merge pull request #319 from tbak/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [34m\[m  
[35m|[m [34m|[m [33m|[m * [34m|[m [33mafc8a8da[m Fix Eureka shutdown process.
[35m|[m [34m|[m * [34m|[m [34m|[m [33m1add54ff[m Merge pull request #318 from tbak/2.x
[35m|[m [34m|[m [35m|[m[34m\[m[34m|[m [34m|[m 
[35m|[m [34m|[m [35m|[m * [34m|[m [33m81c3b07b[m Put back shutdown module.
[35m|[m [34m|[m [35m|[m[35m/[m [34m/[m  
[35m|[m [34m|[m * [34m|[m   [33me8438ced[m Merge pull request #317 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m [34m\[m  
[35m|[m [34m|[m [1;31m|[m * [34m|[m [33m03b995cc[m Code clean up
[35m|[m [34m|[m [1;31m|[m[1;31m/[m [34m/[m  
[35m|[m [34m|[m * [34m|[m   [33m9aaddd5d[m Merge pull request #316 from tbak/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m [34m\[m  
[35m|[m [34m|[m [1;33m|[m * [34m|[m [33mc8a14646[m Add Eureka 2 images for Wiki documentation.
[35m|[m [34m|[m [1;33m|[m[1;33m/[m [34m/[m  
[35m|[m [34m|[m * [34m|[m   [33m9b4db1a5[m Merge pull request #315 from tbak/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [34m\[m  
[35m|[m [34m|[m [1;35m|[m * [34m\[m   [33m21a90415[m Merge remote-tracking branch 'remotes/netflix/2.x' into 2.x
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m\[m [34m\[m  
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m/[m [34m/[m  
[35m|[m [34m|[m [1;35m|[m[1;35m/[m[31m|[m [34m|[m   
[35m|[m [34m|[m * [31m|[m [34m|[m   [33mdd67bd61[m Merge pull request #313 from qiangdavidliu/registry-refactor
[35m|[m [34m|[m [33m|[m[34m\[m [31m\[m [34m\[m  
[35m|[m [34m|[m [33m|[m * [31m|[m [34m|[m [33m316103c4[m Rename package name to better reflect it's nature
[35m|[m [34m|[m [33m|[m * [31m|[m [34m|[m [33mccab32c1[m Keep custom count of size in evictionQueueImpl as .size() is not constant time for ConcurrentLinkedQueue
[35m|[m [34m|[m [33m|[m * [31m|[m [34m|[m [33mda4465cc[m Standardizing EurekaRegistry register/update/unregister returns to boolean to denote whether the operation successfully added/removed an entry (whether it be an instanceInfo or a multiSourcedDataHolder). This helps to remove the need of Source from the API interface.
[35m|[m [34m|[m [33m|[m * [31m|[m [34m|[m   [33m140aa20b[m Merge branch 'registry-refactor' of https://github.com/qiangdavidliu/eureka into registry-refactor
[35m|[m [34m|[m [33m|[m [35m|[m[36m\[m [31m\[m [34m\[m  
[35m|[m [34m|[m [33m|[m [35m|[m * [31m|[m [34m|[m [33m6196a707[m - Moving Sourced Registry and Preservable Registry to eureka-core - Using a persistent preservable registry in eureka-client. During interest channel   failover, the registry content is sent to the eviction queue. - Fixed a big with the EvictionSubscriber that drops one item when going into self preservation - Cleaned up close() and shutdown() behaviours for a bunch of classes - Test updates and fixes
[35m|[m [34m|[m [33m|[m [35m|[m * [31m|[m [34m|[m [33mf37ffdd7[m Refactoring Sourced EurekaRegistry into eureka-core
[35m|[m [34m|[m [33m|[m [35m|[m * [31m|[m [34m|[m [33m57f0eb1e[m Fix integTest shutdown
[35m|[m [34m|[m [33m|[m [35m|[m * [31m|[m [34m|[m [33m8fb5bbc1[m Moving InstanceInfo related classes to a new package
[35m|[m [34m|[m [33m|[m * [36m|[m [31m|[m [34m|[m [33mba3a7030[m - Moving Sourced Registry and Preservable Registry to eureka-core - Using a persistent preservable registry in eureka-client. During interest channel   failover, the registry content is sent to the eviction queue. - Fixed a big with the EvictionSubscriber that drops one item when going into self preservation - Cleaned up close() and shutdown() behaviours for a bunch of classes - Test updates and fixes
[35m|[m [34m|[m [33m|[m * [36m|[m [31m|[m [34m|[m [33m8ea4f2e2[m Refactoring Sourced EurekaRegistry into eureka-core
[35m|[m [34m|[m [33m|[m[33m/[m [36m/[m [31m/[m [34m/[m  
[35m|[m [34m|[m * [36m|[m [31m|[m [34m|[m   [33m0c17096a[m Merge pull request #314 from qiangdavidliu/2.x
[35m|[m [34m|[m [36m|[m[1;32m\[m [36m\[m [31m\[m [34m\[m  
[35m|[m [34m|[m [36m|[m [1;32m|[m[36m/[m [31m/[m [34m/[m  
[35m|[m [34m|[m [36m|[m[36m/[m[1;32m|[m [31m|[m [34m|[m   
[35m|[m [34m|[m [36m|[m * [31m|[m [34m|[m [33mb6d2be1e[m Fix integTest shutdown
[35m|[m [34m|[m [36m|[m * [31m|[m [34m|[m [33ma6706d7d[m Moving InstanceInfo related classes to a new package
[35m|[m [34m|[m [36m|[m[36m/[m [31m/[m [34m/[m  
[35m|[m [34m|[m [36m|[m * [34m|[m [33m89a5fe45[m Eureka integration test update.
[35m|[m [34m|[m [36m|[m * [34m|[m [33m269ac84f[m Add an option of using ephemeral ports in the embedded cluster/server.
[35m|[m [34m|[m [36m|[m * [34m|[m [33m75bd72d6[m Update sample data classes.
[35m|[m [34m|[m [36m|[m[36m/[m [34m/[m  
[35m|[m [34m|[m * [34m|[m   [33m3944e1a0[m Merge pull request #312 from tbak/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m [34m\[m  
[35m|[m [34m|[m [1;33m|[m * [34m|[m [33m3b7ea30c[m Integrate eureka 2 UI tab into embedded cluster.
[35m|[m [34m|[m [1;33m|[m[1;33m/[m [34m/[m  
[35m|[m [34m|[m * [34m|[m [33m0e38becb[m Merge pull request #311 from amit-git/2.x
[35m|[m [34m|[m [1;35m|[m[34m\[m[34m|[m 
[35m|[m [34m|[m [1;35m|[m * [33mefa3a3c1[m admin console page for eureka2 client
[35m|[m [34m|[m [1;35m|[m * [33me2dbbbfb[m sync up to netflix 2.x
[35m|[m [34m|[m [1;35m|[m * [33m116d4f49[m local default provider for eureka client
[35m|[m [34m|[m [1;35m|[m *   [33me5570717[m merge commit
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m\[m  
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m/[m  
[35m|[m [34m|[m [1;35m|[m[1;35m/[m[31m|[m   
[35m|[m [34m|[m * [31m|[m   [33m8f96790b[m Merge pull request #308 from qiangdavidliu/channel-refactor
[35m|[m [34m|[m [33m|[m[34m\[m [31m\[m  
[35m|[m [34m|[m [33m|[m * [31m|[m [33m238783cc[m Handle retry for registrationChannel when already unregistered
[35m|[m [34m|[m [33m|[m * [31m|[m [33m29a26740[m Allow .retry() to refresh the currentDelegateChannel on RetryableChannel apis
[35m|[m [34m|[m [33m|[m * [31m|[m [33m895f0125[m Properly unsubscribes from old delegate lifecycle when retry-ing + tests
[35m|[m [34m|[m [33m|[m * [31m|[m [33m35b2ac02[m Moving Client Registry inside InterestChannelImpl (client side) to help with dealing with ordering.
[35m|[m [34m|[m [33m|[m * [31m|[m   [33m41adbcfb[m Merge branch 'channel-refactor' of https://github.com/qiangdavidliu/eureka into channel-refactor
[35m|[m [34m|[m [33m|[m [35m|[m[36m\[m [31m\[m  
[35m|[m [34m|[m [33m|[m [35m|[m * [31m|[m [33m6b31280e[m Updates
[35m|[m [34m|[m [33m|[m [35m|[m * [31m|[m [33mce710359[m Embedded cluster/integration tests update.
[35m|[m [34m|[m [33m|[m [35m|[m * [31m|[m [33m6f4d013c[m Reverting commented out values
[35m|[m [34m|[m [33m|[m [35m|[m * [31m|[m [33me85974d8[m Simplifying and standardizing retryable channels
[35m|[m [34m|[m [33m|[m * [36m|[m [31m|[m [33m4c4fa342[m Updates
[35m|[m [34m|[m [33m|[m * [36m|[m [31m|[m [33m447e578b[m Simplifying and standardizing retryable channels
[35m|[m [34m|[m [33m|[m[33m/[m [36m/[m [31m/[m  
[35m|[m [34m|[m * [36m|[m [31m|[m [33ma6009386[m [Gradle Release Plugin] - new version commit:  '2.0.0-DP5-SNAPSHOT'.
[35m|[m [34m|[m * [36m|[m [31m|[m [33md9d607f8[m[33m ([m[1;33mtag: 2.0.0-DP4[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '2.0.0-DP4'.
[35m|[m [34m|[m * [36m|[m [31m|[m   [33m405d6466[m Merge pull request #310 from tbak/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m [36m\[m [31m\[m  
[35m|[m [34m|[m [1;31m|[m * [36m|[m [31m|[m [33m7baa7609[m Unit test update.
[35m|[m [34m|[m [1;31m|[m * [36m|[m [31m|[m [33m4e64e8ee[m Remove eureka-ocelli module (will stay in ocelli project).
[35m|[m [34m|[m [1;31m|[m[1;31m/[m [36m/[m [31m/[m  
[35m|[m [34m|[m * [36m|[m [31m|[m   [33m12ddef52[m Merge pull request #309 from tbak/2.x
[35m|[m [34m|[m [36m|[m[1;34m\[m [36m\[m [31m\[m  
[35m|[m [34m|[m [36m|[m [1;34m|[m[36m/[m [31m/[m  
[35m|[m [34m|[m [36m|[m[36m/[m[1;34m|[m [31m|[m   
[35m|[m [34m|[m [36m|[m * [31m|[m [33m2ab7be25[m Embedded cluster/integration tests update.
[35m|[m [34m|[m [36m|[m[36m/[m [31m/[m  
[35m|[m [34m|[m * [31m|[m   [33mff4bb9e6[m Merge pull request #307 from tbak/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [31m\[m  
[35m|[m [34m|[m [1;35m|[m * [31m|[m [33m5a5b3b02[m Embedded cluster + junit ExternalResource update.
[35m|[m [34m|[m [1;35m|[m * [31m|[m   [33m962ee63a[m Merge remote-tracking branch 'remotes/netflix/2.x' into 2.x
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m\[m [31m\[m  
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m/[m [31m/[m  
[35m|[m [34m|[m [1;35m|[m[1;35m/[m[31m|[m [31m|[m   
[35m|[m [34m|[m * [31m|[m [31m|[m   [33m7bd19eff[m Merge pull request #306 from qiangdavidliu/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [31m\[m [31m\[m  
[35m|[m [34m|[m [33m|[m * [31m|[m [31m|[m [33m8af70d1f[m Refactoring self closing baseMessageConnection to be a decorator instead.
[35m|[m [34m|[m [33m|[m * [31m|[m [31m|[m [33meadb36ff[m Adding connection self termination for all BaseMessageConnections.
[35m|[m [34m|[m [33m|[m[33m/[m [31m/[m [31m/[m  
[35m|[m [34m|[m [33m|[m * [31m/[m [33m5bd68b75[m Refactor embedded cluster.
[35m|[m [34m|[m [33m|[m[33m/[m [31m/[m  
[35m|[m [34m|[m * [31m|[m   [33m4d21c5a9[m Merge pull request #305 from qiangdavidliu/2.x
[35m|[m [34m|[m [35m|[m[36m\[m [31m\[m  
[35m|[m [34m|[m [35m|[m * [31m|[m [33m830d75fb[m - ReplicationSender retry fix - replication reconnect delay to config - @Singleton for SelfRegistrationServices - Adding auditServer id to audit logs.
[35m|[m [34m|[m [35m|[m[35m/[m [31m/[m  
[35m|[m [34m|[m * [31m|[m   [33m86985a2d[m Merge pull request #304 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m [31m\[m  
[35m|[m [34m|[m [1;31m|[m * [31m|[m [33m24831664[m - Simpifying EurekaClient creation where given write server configuration the client automatically detects read server configuration from the read server vip. - upgrade to ocelli-0.0.6
[35m|[m [34m|[m [1;31m|[m[1;31m/[m [31m/[m  
[35m|[m [34m|[m [1;31m|[m * [33md911430a[m updating eureka-registry ftl path
[35m|[m [34m|[m [1;31m|[m * [33mbfd7c5db[m admin console page for eureka2 with server side data tables handler
[35m|[m [34m|[m [1;31m|[m * [33med4baa6f[m admin console page for eureka2 - first cut
[35m|[m [34m|[m [1;31m|[m[1;31m/[m  
[35m|[m [34m|[m *   [33m711b1dbe[m Merge pull request #303 from tbak/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m  
[35m|[m [34m|[m [1;33m|[m * [33m3200184b[m Extract eureka-testkit module out of eureka-test-utils.
[35m|[m [34m|[m [1;33m|[m[1;33m/[m  
[35m|[m [34m|[m *   [33m04d33422[m Merge pull request #302 from tbak/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m  
[35m|[m [34m|[m [1;35m|[m *   [33m04386fd2[m Merge remote-tracking branch 'remotes/netflix/2.x' into 2.x
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m\[m  
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m/[m  
[35m|[m [34m|[m [1;35m|[m[1;35m/[m[31m|[m   
[35m|[m [34m|[m * [31m|[m   [33m9aebcb11[m Merge pull request #301 from tbak/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [31m\[m  
[35m|[m [34m|[m [33m|[m [34m|[m * [33ma7fa9400[m Ocelli contrib package.
[35m|[m [34m|[m [33m|[m [34m|[m * [33m1172f2c2[m Rename package eureka-extensions to eureka-contrib.
[35m|[m [34m|[m [33m|[m [34m|[m * [33mfdc2806e[m Refactor ServerResolver (contract update) + use ocelli as internal LB.
[35m|[m [34m|[m [33m|[m [34m|[m[34m/[m  
[35m|[m [34m|[m [33m|[m * [33m6c719489[m Move eureka-integration sources to src/main folder.
[35m|[m [34m|[m [33m|[m[33m/[m  
[35m|[m [34m|[m *   [33ma6d6aa80[m Merge pull request #300 from qiangdavidliu/2.x
[35m|[m [34m|[m [35m|[m[36m\[m  
[35m|[m [34m|[m [35m|[m * [33m4726fd95[m - Adding integration (test) module. - Re-enabling tests in RegistryIndexTest - fix NPE in ReplicationPeerAddressesProvider
[35m|[m [34m|[m [35m|[m[35m/[m  
[35m|[m [34m|[m *   [33m4ebc2447[m Merge pull request #299 from tbak/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m  
[35m|[m [34m|[m [1;31m|[m *   [33m8063b8b1[m Merge + bug fix in replication channel.
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;34m\[m  
[35m|[m [34m|[m [1;31m|[m * [1;34m|[m [33ma1afb88e[m More logging in replication channel.
[35m|[m [34m|[m [1;31m|[m * [1;34m|[m   [33m2bf31752[m Merge remote-tracking branch 'remotes/netflix/2.x' into 2.x
[35m|[m [34m|[m [1;31m|[m [1;35m|[m[1;36m\[m [1;34m\[m  
[35m|[m [34m|[m [1;31m|[m * [1;36m|[m [1;34m|[m [33mc14bf93a[m Replication refactoring.
[35m|[m [34m|[m * [1;36m|[m [1;36m|[m [1;34m|[m   [33m5baf08d9[m Merge pull request #298 from amit-git/2.x
[35m|[m [34m|[m [1;34m|[m[32m\[m [1;36m\[m [1;36m\[m [1;34m\[m  
[35m|[m [34m|[m [1;34m|[m [32m|[m[1;34m_[m[1;36m|[m[1;34m_[m[1;36m|[m[1;34m/[m  
[35m|[m [34m|[m [1;34m|[m[1;34m/[m[32m|[m [1;36m|[m [1;36m|[m   
[35m|[m [34m|[m [1;34m|[m * [1;36m|[m [1;36m|[m [33m5d76c0e4[m dashboard update, remove state bug fixes
[35m|[m [34m|[m [1;34m|[m[1;34m/[m [1;36m/[m [1;36m/[m  
[35m|[m [34m|[m * [1;36m|[m [1;36m|[m   [33maa537023[m Merge pull request #296 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;36m|[m[34m\[m [1;36m\[m [1;36m\[m  
[35m|[m [34m|[m [1;36m|[m [34m|[m[1;36m_[m[1;36m|[m[1;36m/[m  
[35m|[m [34m|[m [1;36m|[m[1;36m/[m[34m|[m [1;36m|[m   
[35m|[m [34m|[m [1;36m|[m * [1;36m|[m [33m480e269a[m Fix up server configs
[35m|[m [34m|[m [1;36m|[m * [1;36m|[m [33m704ec466[m clean up
[35m|[m [34m|[m [1;36m|[m[1;36m/[m [1;36m/[m  
[35m|[m [34m|[m * [1;36m|[m   [33m28d4cf5f[m Merge pull request #295 from qiangdavidliu/2.x
[35m|[m [34m|[m [35m|[m[36m\[m [1;36m\[m  
[35m|[m [34m|[m [35m|[m * [1;36m|[m [33m5421eaba[m Server side registry changeNotifications require a Source identification for replication interest stream.
[35m|[m [34m|[m [35m|[m * [1;36m|[m [33m300fd70a[m Align cmdline Parser with new config names
[35m|[m [34m|[m [35m|[m[35m/[m [1;36m/[m  
[35m|[m [34m|[m * [1;36m|[m [33m6602b3c2[m Merge pull request #294 from tbak/2.x
[35m|[m [34m|[m [1;31m|[m[1;36m\[m[1;36m|[m 
[35m|[m [34m|[m [1;31m|[m * [33m04a00ad8[m Upgrade to governator 1.3.3.
[35m|[m [34m|[m [1;31m|[m[1;31m/[m  
[35m|[m [34m|[m *   [33m3f449fc2[m Merge pull request #292 from amit-git/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m  
[35m|[m [34m|[m [1;33m|[m * [33m0c720938[m eureka clusters view first cut
[35m|[m [34m|[m * [1;34m|[m   [33m51a17dea[m Merge pull request #293 from tbak/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [1;34m\[m  
[35m|[m [34m|[m [1;35m|[m * [1;34m|[m [33mdfc69cb8[m Allow for null values in delta updates.
[35m|[m [34m|[m [1;35m|[m[1;35m/[m [1;34m/[m  
[35m|[m [34m|[m * [1;34m|[m   [33mfd4c59fb[m Merge pull request #291 from tbak/2.x
[35m|[m [34m|[m [31m|[m[32m\[m [1;34m\[m  
[35m|[m [34m|[m [31m|[m * [1;34m|[m [33mc6a36b65[m Reorganize classes in packages/projects - cont.
[35m|[m [34m|[m [31m|[m * [1;34m|[m   [33mf86edffa[m Merge remote-tracking branch 'remotes/netflix/2.x' into 2.x
[35m|[m [34m|[m [31m|[m [33m|[m[31m\[m [1;34m\[m  
[35m|[m [34m|[m [31m|[m [33m|[m[31m/[m [1;34m/[m  
[35m|[m [34m|[m [31m|[m[31m/[m[33m|[m [1;34m|[m   
[35m|[m [34m|[m * [33m|[m [1;34m|[m   [33m96a05980[m Merge pull request #289 from tbak/2.x
[35m|[m [34m|[m [35m|[m[36m\[m [33m\[m [1;34m\[m  
[35m|[m [34m|[m * [36m\[m [33m\[m [1;34m\[m   [33m29de8f7e[m Merge pull request #287 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m [36m\[m [33m\[m [1;34m\[m  
[35m|[m [34m|[m [1;31m|[m * [36m|[m [33m|[m [1;34m|[m [33m9e11e460[m Better dummy for the metric
[35m|[m [34m|[m [1;31m|[m * [36m|[m [33m|[m [1;34m|[m [33m31032158[m Removing accidental tabs
[35m|[m [34m|[m [1;31m|[m * [36m|[m [33m|[m [1;34m|[m [33m4cbcce6e[m Adding metrics to TaskInvoker in serverRegistry
[35m|[m [34m|[m [1;31m|[m[1;31m/[m [36m/[m [33m/[m [1;34m/[m  
[35m|[m [34m|[m [1;31m|[m [36m|[m * [1;34m/[m [33mbabe0671[m Reorganize classes in packages/projects.
[35m|[m [34m|[m [1;31m|[m [36m|[m[36m/[m [1;34m/[m  
[35m|[m [34m|[m [1;31m|[m * [1;34m/[m [33m25bf46fd[m Fix resource leak in client registration path.
[35m|[m [34m|[m [1;31m|[m[1;31m/[m [1;34m/[m  
[35m|[m [34m|[m * [1;34m|[m   [33m4536d419[m Merge pull request #286 from tbak/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m [1;34m\[m  
[35m|[m [34m|[m [1;33m|[m * [1;34m|[m [33mfc463bab[m Use governator include, not install to make bindings visible across modules.
[35m|[m [34m|[m [1;33m|[m[1;33m/[m [1;34m/[m  
[35m|[m [34m|[m * [1;34m|[m [33m08aec71b[m Merge pull request #285 from amit-git/2.x
[35m|[m [34m|[m [1;35m|[m[1;34m\[m[1;34m|[m 
[35m|[m [34m|[m [1;35m|[m * [33md839d988[m tests added for registry cache
[35m|[m [34m|[m [1;35m|[m * [33mf8e3cd2c[m registry cache streaming, improved initial load numbers
[35m|[m [34m|[m [1;35m|[m * [33mbf13f87a[m eureka stream buffering, client buffering and render cycle throttling
[35m|[m [34m|[m * [1;36m|[m   [33m9d65e91e[m Merge pull request #284 from qiangdavidliu/2.x
[35m|[m [34m|[m [31m|[m[32m\[m [1;36m\[m  
[35m|[m [34m|[m [31m|[m * [1;36m|[m [33mab04bc5d[m fix: Binding base class to config instance in DashboardModule
[35m|[m [34m|[m [31m|[m[31m/[m [1;36m/[m  
[35m|[m [34m|[m * [1;36m|[m   [33m50f40053[m Merge pull request #282 from qiangdavidliu/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [1;36m\[m  
[35m|[m [34m|[m [33m|[m * [1;36m|[m [33mf6b327d3[m Moving delegated update to execute inline instead of reenqueue as task in NotifyingInstanceInfoHolder
[35m|[m [34m|[m [33m|[m * [1;36m|[m [33m935dc583[m One implementation of removing the multisource data holder on removal of last copy
[35m|[m [34m|[m [33m|[m * [1;36m|[m [33m765a67eb[m Renaming replicationChannel impls for more clarity
[35m|[m [34m|[m [33m|[m * [1;36m|[m [33m4825e596[m Removing unnecessary test scaffolding
[35m|[m [34m|[m [33m|[m [1;36m|[m[1;36m/[m  
[35m|[m [34m|[m * [1;36m|[m   [33m4a1ad6bb[m Merge pull request #283 from tbak/2.x
[35m|[m [34m|[m [1;36m|[m[36m\[m [1;36m\[m  
[35m|[m [34m|[m [1;36m|[m [36m|[m[1;36m/[m  
[35m|[m [34m|[m [1;36m|[m[1;36m/[m[36m|[m   
[35m|[m [34m|[m [1;36m|[m *   [33m977c59f3[m Merge remote-tracking branch 'remotes/netflix/2.x' into 2.x
[35m|[m [34m|[m [1;36m|[m [1;31m|[m[1;36m\[m  
[35m|[m [34m|[m [1;36m|[m [1;31m|[m[1;36m/[m  
[35m|[m [34m|[m [1;36m|[m[1;36m/[m[1;31m|[m   
[35m|[m [34m|[m * [1;31m|[m   [33m3e48dbbd[m Merge pull request #281 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m [1;31m\[m  
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [33maf90e5a1[m Fix a terrible typo that causes discovery port to be used instead of replication
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [33mbfa32533[m Adding additional channel state metrics to bridge channel
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [33m57f82ecc[m Bridge channel fix to reduce statefullness of currentSnapshot
[35m|[m [34m|[m [1;33m|[m[1;33m/[m [1;31m/[m  
[35m|[m [34m|[m * [1;31m|[m   [33m1abca610[m Merge pull request #280 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [1;31m\[m  
[35m|[m [34m|[m [1;35m|[m * [1;31m|[m [33m99b8061c[m Config refactor fixes
[35m|[m [34m|[m [1;35m|[m[1;35m/[m [1;31m/[m  
[35m|[m [34m|[m [1;35m|[m * [33mef4290d4[m Move archaius initialization to overridable method, so different configuration providers can be injected.
[35m|[m [34m|[m [1;35m|[m[1;35m/[m  
[35m|[m [34m|[m *   [33m8f159516[m Merge pull request #278 from amit-git/2.x
[35m|[m [34m|[m [31m|[m[32m\[m  
[35m|[m [34m|[m [31m|[m * [33m265defa8[m eureka client stream error sent back. Retry in websocket client.
[35m|[m [34m|[m * [32m|[m   [33m323ee675[m Merge pull request #279 from qiangdavidliu/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [32m\[m  
[35m|[m [34m|[m [33m|[m * [32m|[m [33mb99f6519[m Refactored server-side config loading + code cleanup
[35m|[m [34m|[m [33m|[m [32m|[m[32m/[m  
[35m|[m [34m|[m * [32m|[m   [33m0d970af1[m Merge pull request #277 from tbak/2.x
[35m|[m [34m|[m [32m|[m[36m\[m [32m\[m  
[35m|[m [34m|[m [32m|[m [36m|[m[32m/[m  
[35m|[m [34m|[m [32m|[m[32m/[m[36m|[m   
[35m|[m [34m|[m [32m|[m * [33mc68aecb3[m Support for configuration file includes in Eureka CLI + configuration reload.
[35m|[m [34m|[m [32m|[m[32m/[m  
[35m|[m [34m|[m *   [33m6c79f984[m Merge pull request #276 from amit-git/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m  
[35m|[m [34m|[m [1;31m|[m * [33m997d1fbb[m cleanup config
[35m|[m [34m|[m [1;31m|[m *   [33m710d688d[m Merge branch 'retry-logic' into 2.x
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;34m\[m  
[35m|[m [34m|[m [1;31m|[m [1;33m|[m * [33mdc892500[m resubscribe logic on error
[35m|[m [34m|[m [1;31m|[m [1;33m|[m * [33mad74484d[m reconnect logic attempt
[35m|[m [34m|[m * [1;33m|[m [1;34m|[m [33macb5615f[m Merge pull request #275 from amit-git/2.x
[35m|[m [34m|[m [1;35m|[m[1;33m\[m[1;33m|[m [1;34m|[m 
[35m|[m [34m|[m [1;35m|[m * [1;34m|[m [33mb205f74e[m layout bug fix
[35m|[m [34m|[m [1;35m|[m [1;34m|[m[1;34m/[m  
[35m|[m [34m|[m * [1;34m|[m [33m472d3656[m Merge pull request #274 from amit-git/2.x
[35m|[m [34m|[m [31m|[m[1;34m\[m[1;34m|[m 
[35m|[m [34m|[m [31m|[m * [33mda13a1d5[m websocket port config endpoint fix
[35m|[m [34m|[m [31m|[m *   [33m9f3a6594[m Merge branch '2.x' of https://github.com/Netflix/eureka into 2.x
[35m|[m [34m|[m [31m|[m [33m|[m[31m\[m  
[35m|[m [34m|[m [31m|[m [33m|[m[31m/[m  
[35m|[m [34m|[m [31m|[m[31m/[m[33m|[m   
[35m|[m [34m|[m * [33m|[m [33mda913301[m [Gradle Release Plugin] - new version commit:  '2.0.0-DP4-SNAPSHOT'.
[35m|[m [34m|[m * [33m|[m [33mf6fe2cca[m[33m ([m[1;33mtag: 2.0.0-DP3[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '2.0.0-DP3'.
[35m|[m [34m|[m * [33m|[m   [33m38f0d5f3[m Merge pull request #270 from tbak/2.x
[35m|[m [34m|[m [35m|[m[36m\[m [33m\[m  
[35m|[m [34m|[m [35m|[m * [33m\[m   [33m902f8792[m Merge remote-tracking branch 'remotes/netflix/2.x' into 2.x
[35m|[m [34m|[m [35m|[m [1;31m|[m[35m\[m [33m\[m  
[35m|[m [34m|[m [35m|[m [1;31m|[m[35m/[m [33m/[m  
[35m|[m [34m|[m [35m|[m[35m/[m[1;31m|[m [33m|[m   
[35m|[m [34m|[m * [1;31m|[m [33m|[m   [33m050097c3[m Merge pull request #269 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m [1;31m\[m [33m\[m  
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [33m|[m [33ma9412095[m Adding a "dummy" replication port to the bridge server config
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [33m|[m [33m12f489da[m More config refactoring
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [33m|[m [33m9eae909a[m Server boostrap config refactor + moved some files around to the proper package
[35m|[m [34m|[m [1;33m|[m[1;33m/[m [1;31m/[m [33m/[m  
[35m|[m [34m|[m * [1;31m|[m [33m|[m   [33m5174242f[m Merge pull request #268 from tbak/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [1;31m\[m [33m\[m  
[35m|[m [34m|[m [1;35m|[m [1;36m|[m * [33m|[m [33m6a509e48[m Patch static content handler to resolve properly resource URI and read from jar file.
[35m|[m [34m|[m [1;35m|[m [1;36m|[m[1;36m/[m [33m/[m  
[35m|[m [34m|[m [1;35m|[m * [33m|[m [33m8220e6ed[m Apply Eureka server abstraction to the dashboard server.
[35m|[m [34m|[m [1;35m|[m * [33m|[m   [33m535bbb47[m Merge remote-tracking branch 'remotes/netflix/2.x' into 2.x
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m\[m [33m\[m  
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m/[m [33m/[m  
[35m|[m [34m|[m [1;35m|[m[1;35m/[m[31m|[m [33m|[m   
[35m|[m [34m|[m * [31m|[m [33m|[m   [33mac738a00[m Merge pull request #267 from amit-git/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [31m\[m [33m\[m  
[35m|[m [34m|[m [33m|[m [34m|[m * [33m|[m [33m7cf61510[m More robust Kafka audit service implementation. Refactored Eureka CLI.
[35m|[m [34m|[m [33m|[m [34m|[m [34m|[m * [33m0250c0dd[m live streaming feed view
[35m|[m [34m|[m [33m|[m [34m|[m [34m|[m[34m/[m  
[35m|[m [34m|[m [33m|[m [34m|[m[34m/[m[34m|[m   
[35m|[m [34m|[m [33m|[m * [34m|[m [33m1d6b4fed[m localhost config
[35m|[m [34m|[m [33m|[m * [34m|[m   [33mf6622f7c[m Merge branch '2.x' of https://github.com/Netflix/eureka into 2.x
[35m|[m [34m|[m [33m|[m [35m|[m[33m\[m [34m\[m  
[35m|[m [34m|[m [33m|[m [35m|[m[33m/[m [34m/[m  
[35m|[m [34m|[m [33m|[m[33m/[m[35m|[m [34m|[m   
[35m|[m [34m|[m * [35m|[m [34m|[m   [33m4ea82f75[m Merge pull request #266 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m [35m\[m [34m\[m  
[35m|[m [34m|[m [1;31m|[m * [35m|[m [34m|[m [33m21d3b7a5[m Upgrading to rxjava 1.0.0
[35m|[m [34m|[m * [1;32m|[m [35m|[m [34m|[m   [33m81e625e0[m Merge pull request #264 from tbak/2.x
[35m|[m [34m|[m [1;32m|[m[34m\[m [1;32m\[m [35m\[m [34m\[m  
[35m|[m [34m|[m [1;32m|[m [34m|[m[1;32m/[m [35m/[m [34m/[m  
[35m|[m [34m|[m [1;32m|[m[1;32m/[m[34m|[m [35m|[m [34m/[m   
[35m|[m [34m|[m [1;32m|[m [34m|[m [35m|[m[34m/[m    
[35m|[m [34m|[m [1;32m|[m [34m|[m[34m/[m[35m|[m     
[35m|[m [34m|[m [1;32m|[m * [35m|[m [33m363c8d0d[m Add registration failover/reconnect mechanism.
[35m|[m [34m|[m [1;32m|[m * [35m|[m [33me5b848d4[m Add registry failover/reconnect mechanism.
[35m|[m [34m|[m [1;32m|[m * [35m|[m [33m5199e7bc[m Eureka-client refactoring.
[35m|[m [34m|[m [1;32m|[m * [35m|[m [33maf82472a[m Remove legacy code.
[35m|[m [34m|[m [1;32m|[m[1;32m/[m [35m/[m  
[35m|[m [34m|[m * [35m|[m   [33m35a403cf[m Merge pull request #261 from tbak/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [35m\[m  
[35m|[m [34m|[m [1;35m|[m * [35m|[m [33mb69261be[m Upgrade to latest karyon/nf-karyon version.
[35m|[m [34m|[m [1;35m|[m[1;35m/[m [35m/[m  
[35m|[m [34m|[m * [35m|[m   [33maa23852e[m Merge pull request #259 from qiangdavidliu/2.x
[35m|[m [34m|[m [31m|[m[32m\[m [35m\[m  
[35m|[m [34m|[m [31m|[m * [35m|[m [33ma5b35b98[m Adding metrics for bridge server
[35m|[m [34m|[m [31m|[m[31m/[m [35m/[m  
[35m|[m [34m|[m * [35m|[m   [33m49999d56[m Merge pull request #258 from tbak/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [35m\[m  
[35m|[m [34m|[m [33m|[m * [35m\[m   [33m669da487[m Merge branch '2.x' into workspace
[35m|[m [34m|[m [33m|[m [35m|[m[33m\[m [35m\[m  
[35m|[m [34m|[m [33m|[m [35m|[m[33m/[m [35m/[m  
[35m|[m [34m|[m [33m|[m[33m/[m[35m|[m [35m|[m   
[35m|[m [34m|[m * [35m|[m [35m|[m [33m4be41c31[m [Gradle Release Plugin] - new version commit:  '2.0.0-DP3-SNAPSHOT'.
[35m|[m [34m|[m * [35m|[m [35m|[m [33m4ee5abab[m[33m ([m[1;33mtag: 2.0.0-DP2[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '2.0.0-DP2'.
[35m|[m [34m|[m * [35m|[m [35m|[m   [33m12c75c46[m Merge pull request #257 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m [35m\[m [35m\[m  
[35m|[m [34m|[m [1;31m|[m * [35m|[m [35m|[m [33m1d5aa430[m log.info -> log.debug
[35m|[m [34m|[m [1;31m|[m * [35m|[m [35m|[m [33mf7f9c8bf[m Simple system property settings for both registration and discovery heartbeats, for client and server.
[35m|[m [34m|[m [1;31m|[m[1;31m/[m [35m/[m [35m/[m  
[35m|[m [34m|[m * [35m|[m [35m|[m   [33m541b6b10[m[33m ([m[1;33mtag: 2.0.0-DP1[m[33m)[m Merge pull request #256 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m [35m\[m [35m\[m  
[35m|[m [34m|[m [1;33m|[m * [35m|[m [35m|[m [33m0bd8b826[m new version commit: '2.0.0-DP2-SNAPSHOT'
[35m|[m [34m|[m [1;33m|[m[1;33m/[m [35m/[m [35m/[m  
[35m|[m [34m|[m [1;33m|[m * [35m|[m [33m0ae30731[m Add eviction queue/self preservation metrics + configuration parameters.
[35m|[m [34m|[m [1;33m|[m * [35m|[m [33mf97fb817[m Minor update in eviction queue handling + related unit tests.
[35m|[m [34m|[m [1;33m|[m * [35m|[m   [33m24beab56[m Merge branch '2.x' into workspace
[35m|[m [34m|[m [1;33m|[m [1;35m|[m[1;33m\[m [35m\[m  
[35m|[m [34m|[m [1;33m|[m [1;35m|[m[1;33m/[m [35m/[m  
[35m|[m [34m|[m [1;33m|[m[1;33m/[m[1;35m|[m [35m|[m   
[35m|[m [34m|[m * [1;35m|[m [35m|[m   [33mf58ebaf5[m Merge pull request #255 from qiangdavidliu/2.x
[35m|[m [34m|[m [31m|[m[32m\[m [1;35m\[m [35m\[m  
[35m|[m [34m|[m [31m|[m * [1;35m|[m [35m|[m [33m6ee0f17f[m Reading heartbeat and eviction thresholds from system props
[35m|[m [34m|[m [31m|[m[31m/[m [1;35m/[m [35m/[m  
[35m|[m [34m|[m * [1;35m|[m [35m|[m   [33m77ca3297[m Merge pull request #254 from qiangdavidliu/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [1;35m\[m [35m\[m  
[35m|[m [34m|[m [33m|[m * [1;35m|[m [35m|[m [33mb41c007f[m Rename eureka-compatibility to eureka-bridge
[35m|[m [34m|[m [33m|[m[33m/[m [1;35m/[m [35m/[m  
[35m|[m [34m|[m * [1;35m|[m [35m|[m   [33mafa15edd[m Merge pull request #253 from qiangdavidliu/2.x
[35m|[m [34m|[m [35m|[m[36m\[m [1;35m\[m [35m\[m  
[35m|[m [34m|[m [35m|[m * [1;35m\[m [35m\[m   [33mc0102bd8[m Merge branch '2.x' of https://github.com/qiangdavidliu/eureka into 2.x
[35m|[m [34m|[m [35m|[m [1;31m|[m[1;32m\[m [1;35m\[m [35m\[m  
[35m|[m [34m|[m [35m|[m [1;31m|[m * [1;35m|[m [35m|[m [33mcfd1ead5[m Add blocking in unit tests for more determinism
[35m|[m [34m|[m [35m|[m * [1;32m|[m [1;35m|[m [35m|[m [33ma2b3dc43[m Add blocking in unit tests for more determinism
[35m|[m [34m|[m * [1;32m|[m [1;32m|[m [1;35m|[m [35m|[m   [33maa8b1bdc[m Merge pull request #252 from NiteshKant/2.x
[35m|[m [34m|[m [1;32m|[m[1;34m\[m [1;32m\[m [1;32m\[m [1;35m\[m [35m\[m  
[35m|[m [34m|[m [1;32m|[m [1;34m|[m[1;32m/[m [1;32m/[m [1;35m/[m [35m/[m  
[35m|[m [34m|[m [1;32m|[m[1;32m/[m[1;34m|[m [1;32m|[m [1;35m|[m [35m|[m   
[35m|[m [34m|[m [1;32m|[m * [1;32m|[m [1;35m|[m [35m|[m [33m2ed05484[m Upgrade to latest rxnetty version
[35m|[m [34m|[m [1;32m|[m [1;34m|[m [1;32m|[m * [35m|[m [33mf1364d0f[m Change implementation of SerializedTaskInvoker to be non-blocking.
[35m|[m [34m|[m [1;32m|[m [1;34m|[m[1;32m_[m[1;32m|[m[1;32m/[m [35m/[m  
[35m|[m [34m|[m [1;32m|[m[1;32m/[m[1;34m|[m [1;32m|[m [35m|[m   
[35m|[m [34m|[m [1;32m|[m [1;34m|[m [1;32m|[m * [33me8b55b52[m utils.js renamed to match repo
[35m|[m [34m|[m [1;32m|[m [1;34m|[m [1;32m|[m * [33m2a4ec42c[m clean up
[35m|[m [34m|[m [1;32m|[m [1;34m|[m [1;32m|[m * [33m3b2569cb[m first cut - eureka dashboard on rxnetty stack
[35m|[m [34m|[m [1;32m|[m [1;34m|[m [1;32m|[m * [33mc233327c[m starting out with basic framework for eurka dashboard
[35m|[m [34m|[m [1;32m|[m [1;34m|[m[1;32m_[m[1;32m|[m[1;32m/[m  
[35m|[m [34m|[m [1;32m|[m[1;32m/[m[1;34m|[m [1;32m|[m   
[35m|[m [34m|[m * [1;34m|[m [1;32m|[m   [33mdcdc6919[m Merge pull request #251 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;34m|[m[1;32m\[m [1;34m\[m [1;32m\[m  
[35m|[m [34m|[m [1;34m|[m [1;32m|[m[1;34m/[m [1;32m/[m  
[35m|[m [34m|[m [1;34m|[m[1;34m/[m[1;32m|[m [1;32m/[m   
[35m|[m [34m|[m [1;34m|[m [1;32m|[m[1;32m/[m    
[35m|[m [34m|[m [1;34m|[m * [33mf93600c5[m ReplicationService should use port from the resolver
[35m|[m [34m|[m [1;34m|[m[1;34m/[m  
[35m|[m [34m|[m *   [33mcef93791[m Merge pull request #250 from tbak/2.x
[35m|[m [34m|[m [31m|[m[32m\[m  
[35m|[m [34m|[m [31m|[m * [33me34a59c4[m Fix issue with update notifications in the interest channel. Diff.size == 0 causes NullPointerException.
[35m|[m [34m|[m [31m|[m[31m/[m  
[35m|[m [34m|[m *   [33mcd691988[m Merge pull request #249 from NiteshKant/2.x
[35m|[m [34m|[m [33m|[m[34m\[m  
[35m|[m [34m|[m [33m|[m * [33m9384f7ab[m Renaming package to com.netflix.eureka2
[35m|[m [34m|[m [33m|[m * [33m03a10968[m Removed rx from module names
[35m|[m [34m|[m [33m|[m[33m/[m  
[35m|[m [34m|[m *   [33me2f2f893[m Merge pull request #248 from tbak/2.x
[35m|[m [34m|[m [35m|[m[36m\[m  
[35m|[m [34m|[m [35m|[m * [33m279239f5[m Remove deps file added accidently.
[35m|[m [34m|[m [35m|[m * [33m7c150e67[m Fix VipInterest matcher (vip can be null).
[35m|[m [34m|[m [35m|[m *   [33m4665cead[m Merge remote-tracking branch 'remotes/netflix/2.x' into 2.x
[35m|[m [34m|[m [35m|[m [1;31m|[m[35m\[m  
[35m|[m [34m|[m [35m|[m [1;31m|[m[35m/[m  
[35m|[m [34m|[m [35m|[m[35m/[m[1;31m|[m   
[35m|[m [34m|[m * [1;31m|[m   [33md6ef8348[m Merge pull request #247 from NiteshKant/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m [1;31m\[m  
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [33m3a8702a2[m Simplified resolver.
[35m|[m [34m|[m [1;33m|[m[1;33m/[m [1;31m/[m  
[35m|[m [34m|[m * [1;31m|[m   [33m8be04dfd[m Merge pull request #246 from tbak/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [1;31m\[m  
[35m|[m [34m|[m [1;35m|[m [1;36m|[m * [33m5624571c[m Add eviction queue and self preservation on the server side. Extrend EurekaRegistry class hierarchy with EurekaClientRegistry and EurekaServerRegistry. Upgrade to latest RxJava/RxNetty/Ribbon.
[35m|[m [34m|[m [1;35m|[m [1;36m|[m[1;36m/[m  
[35m|[m [34m|[m [1;35m|[m *   [33md8cd6781[m Merge remote-tracking branch 'remotes/netflix/2.x' into 2.x
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m\[m  
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m/[m  
[35m|[m [34m|[m [1;35m|[m[1;35m/[m[31m|[m   
[35m|[m [34m|[m * [31m|[m   [33m221c310d[m Merge pull request #245 from qiangdavidliu/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [31m\[m  
[35m|[m [34m|[m [33m|[m * [31m|[m [33mcf398f9d[m MultiSourcedDataHolder interface update
[35m|[m [34m|[m [33m|[m * [31m|[m [33mf6b798af[m Adding new data type for Eureka registry that stores multiple copies of instanceInfo data w.r.t. to different input sources
[35m|[m [34m|[m [33m|[m[33m/[m [31m/[m  
[35m|[m [34m|[m [33m|[m * [33m48c3705a[m Remove duplication in transport (ClientConnection&ServerConnection vs MessageBroker). Move heartbeat handling outside of channel abstraction, down to the transport level.
[35m|[m [34m|[m [33m|[m[33m/[m  
[35m|[m [34m|[m *   [33maafb4925[m Merge pull request #239 from tbak/2.x
[35m|[m [34m|[m [35m|[m[36m\[m  
[35m|[m [34m|[m [35m|[m * [33md18f2a76[m Update jackson serialization configuration rules.
[35m|[m [34m|[m [35m|[m[35m/[m  
[35m|[m [34m|[m *   [33mbaf794bc[m Merge pull request #238 from tbak/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m  
[35m|[m [34m|[m [1;31m|[m *   [33m5e961fad[m Merge branch '2.x' into features/server_resolver_lazy
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;31m\[m  
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;31m/[m  
[35m|[m [34m|[m [1;31m|[m[1;31m/[m[1;33m|[m   
[35m|[m [34m|[m * [1;33m|[m   [33mbefcc37f[m Merge pull request #237 from tbak/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [1;33m\[m  
[35m|[m [34m|[m [1;35m|[m * [1;33m|[m [33m27464609[m InstanceInfo model update.
[35m|[m [34m|[m * [1;36m|[m [1;33m|[m [33mec58d105[m Merge pull request #236 from tbak/features/EurekaClients_update
[35m|[m [34m|[m [31m|[m[1;36m\[m[1;36m|[m [1;33m|[m 
[35m|[m [34m|[m [31m|[m [1;36m|[m * [33mabd1b9ad[m ServerResolver lazy startup.
[35m|[m [34m|[m [31m|[m [1;36m|[m[1;36m/[m  
[35m|[m [34m|[m [31m|[m * [33mef087467[m EurekaClients should return EurekaClient instance, not an observable of it.
[35m|[m [34m|[m [31m|[m[31m/[m  
[35m|[m [34m|[m *   [33m09d4fe5e[m Merge pull request #233 from tbak/2.x
[35m|[m [34m|[m [33m|[m[34m\[m  
[35m|[m [34m|[m [33m|[m * [33m00833700[m Update to the self registration process.
[35m|[m [34m|[m [33m|[m * [33m776a2430[m Cleanup codec configuration process
[35m|[m [34m|[m [33m|[m * [33mcf21c5ee[m Configure metrics for Eureka bridge.
[35m|[m [34m|[m [33m|[m[33m/[m  
[35m|[m [34m|[m *   [33m929997e1[m Merge pull request #232 from tbak/2.x
[35m|[m [34m|[m [35m|[m[36m\[m  
[35m|[m [34m|[m [35m|[m * [33m6bb232df[m Add regexp support to the interests model.
[35m|[m [34m|[m [35m|[m * [33m184cf7dc[m Update audit service.
[35m|[m [34m|[m [35m|[m[35m/[m  
[35m|[m [34m|[m *   [33m0ef6bd95[m Merge pull request #231 from tbak/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m  
[35m|[m [34m|[m [1;31m|[m * [33m1d373018[m Add client metrics.
[35m|[m [34m|[m [1;31m|[m[1;31m/[m  
[35m|[m [34m|[m *   [33m91fbaef5[m Merge pull request #229 from tbak/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m  
[35m|[m [34m|[m [1;33m|[m * [33mccf93b07[m Eureka metrics update.
[35m|[m [34m|[m [1;33m|[m[1;33m/[m  
[35m|[m [34m|[m *   [33m834c9158[m Merge pull request #228 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m  
[35m|[m [34m|[m [1;35m|[m * [33md3c44dc8[m Binding metrics to BridgeServerModule
[35m|[m [34m|[m [1;35m|[m[1;35m/[m  
[35m|[m [34m|[m *   [33mc89c1c6e[m Merge pull request #227 from tbak/2.x
[35m|[m [34m|[m [31m|[m[32m\[m  
[35m|[m [34m|[m [31m|[m * [33mfe556eb0[m Adjust metric names to be more readable in the monitoring system.
[35m|[m [34m|[m * [32m|[m [33mec7db591[m Merge pull request #226 from tbak/2.x
[35m|[m [34m|[m [33m|[m[32m\[m[32m|[m 
[35m|[m [34m|[m [33m|[m *   [33m1c9c6983[m Merge remote-tracking branch 'remotes/netflix/2.x' into 2.x
[35m|[m [34m|[m [33m|[m [35m|[m[33m\[m  
[35m|[m [34m|[m [33m|[m [35m|[m[33m/[m  
[35m|[m [34m|[m [33m|[m[33m/[m[35m|[m   
[35m|[m [34m|[m * [35m|[m   [33mbf3e10b3[m Merge pull request #225 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m [35m\[m  
[35m|[m [34m|[m [1;31m|[m * [35m|[m [33mdd0158ba[m Changing default port numbers yet again. Also giving Bridge Server it's own SelfRegistrationService
[35m|[m [34m|[m [1;31m|[m[1;31m/[m [35m/[m  
[35m|[m [34m|[m * [35m|[m   [33meb1d6f3c[m Merge pull request #224 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m [35m\[m  
[35m|[m [34m|[m [1;33m|[m * [35m|[m [33m314d7c3f[m Adding bridge instance shutdown in embedded cluster
[35m|[m [34m|[m [1;33m|[m * [35m|[m [33mfa9229dc[m Updating gradle dependency
[35m|[m [34m|[m [1;33m|[m * [35m|[m [33mceef7748[m Adding bridge server to embedded eureka cluster in test-utils
[35m|[m [34m|[m [1;33m|[m[1;33m/[m [35m/[m  
[35m|[m [34m|[m * [35m|[m   [33m0d4a1a1b[m Merge pull request #222 from tbak/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [35m\[m  
[35m|[m [34m|[m [1;35m|[m [1;36m|[m * [33m54551fba[m Add server side servo metrics.
[35m|[m [34m|[m [1;35m|[m [1;36m|[m[1;36m/[m  
[35m|[m [34m|[m [1;35m|[m * [33mddee8276[m Use constants for ports. Fix module boostrapping issue.
[35m|[m [34m|[m [1;35m|[m *   [33m9ec58867[m Merge remote-tracking branch 'netflix/2.x' into 2.x
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m\[m  
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m/[m  
[35m|[m [34m|[m [1;35m|[m[1;35m/[m[31m|[m   
[35m|[m [34m|[m * [31m|[m   [33m579892fd[m Merge pull request #223 from qiangdavidliu/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [31m\[m  
[35m|[m [34m|[m [33m|[m * [31m|[m [33m33edeaf6[m Adding eureka-compatibility module with BridgeServer that bridges data from v1 to rx/v2.
[35m|[m [34m|[m [33m|[m[33m/[m [31m/[m  
[35m|[m [34m|[m [33m|[m * [33mef50d33c[m Move eureka ports to a different range to avoid overlapping with other services.
[35m|[m [34m|[m [33m|[m[33m/[m  
[35m|[m [34m|[m *   [33m93bf75e9[m Merge pull request #221 from tbak/2.x
[35m|[m [34m|[m [35m|[m[36m\[m  
[35m|[m [34m|[m [35m|[m * [33m2c609dab[m Move classes from com.netflix.eureka to com.netflix.rx.eureka package. Add "rx-" prefix to gradle module names.
[35m|[m [34m|[m [35m|[m[35m/[m  
[35m|[m [34m|[m *   [33m8420634d[m Merge pull request #216 from tbak/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m  
[35m|[m [34m|[m [1;31m|[m * [33m02683858[m Make configuration archaius friendly.
[35m|[m [34m|[m [1;31m|[m * [33m74d55489[m Ext dependency versions update.
[35m|[m [34m|[m [1;31m|[m[1;31m/[m  
[35m|[m [34m|[m *   [33m5a2429b9[m Merge pull request #215 from tbak/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m  
[35m|[m [34m|[m [1;33m|[m * [33mb9d55e8b[m Implement replication mechanism.
[35m|[m [34m|[m [1;33m|[m[1;33m/[m  
[35m|[m [34m|[m *   [33m8c7b33aa[m Merge pull request #213 from tbak/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m  
[35m|[m [34m|[m [1;35m|[m *   [33m698ca29f[m Merge remote-tracking branch 'remotes/netflix/2.x' into tbak/2.x
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m\[m  
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m/[m  
[35m|[m [34m|[m [1;35m|[m[1;35m/[m[31m|[m   
[35m|[m [34m|[m * [31m|[m   [33m4841674c[m Merge pull request #212 from qiangdavidliu/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [31m\[m  
[35m|[m [34m|[m [33m|[m * [31m|[m [33m7d76e4ee[m Added server-side versioning and clientInterestChannel checks to deal with duplicates. Removed lease times from data model as it will be handled by the channel.
[35m|[m [34m|[m [33m|[m[33m/[m [31m/[m  
[35m|[m [34m|[m [33m|[m * [33md1d87a73[m Eureka read/write server self registration + eureka client update.
[35m|[m [34m|[m [33m|[m[33m/[m  
[35m|[m [34m|[m *   [33m33d55b0f[m Merge pull request #210 from tbak/2.x
[35m|[m [34m|[m [35m|[m[36m\[m  
[35m|[m [34m|[m [35m|[m * [33m2648c653[m Replication related API update - WIP
[35m|[m [34m|[m * [36m|[m   [33m09d24f2a[m Merge pull request #211 from qiangdavidliu/2.x
[35m|[m [34m|[m [36m|[m[1;32m\[m [36m\[m  
[35m|[m [34m|[m [36m|[m [1;32m|[m[36m/[m  
[35m|[m [34m|[m [36m|[m[36m/[m[1;32m|[m   
[35m|[m [34m|[m [36m|[m * [33md9176cf2[m Remove dead code
[35m|[m [34m|[m [36m|[m * [33m946c3967[m Refactor of InterestChannel to consolidate apis
[35m|[m [34m|[m [36m|[m[36m/[m  
[35m|[m [34m|[m *   [33m3dcdc702[m Merge pull request #209 from tbak/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m  
[35m|[m [34m|[m [1;33m|[m * [33m67b5c7de[m Upgrade to latest ribbon/rxnetty/karyon version (2.0-RC9, 0.3.13, 2.1.00-RC5 respectively).
[35m|[m [34m|[m [1;33m|[m[1;33m/[m  
[35m|[m [34m|[m *   [33m5485d392[m Merge pull request #208 from tbak/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m  
[35m|[m [34m|[m [1;35m|[m * [33m2899932e[m The modifications in this commit should be part of the previous one (42ea54c2d03b81a4c2631bf8bb142aeb428f01dd), but due to my mistake were not added to the change set.
[35m|[m [34m|[m * [1;36m|[m [33m7cde0ecf[m Merge pull request #207 from tbak/2.x
[35m|[m [34m|[m [31m|[m[1;36m\[m[1;36m|[m 
[35m|[m [34m|[m [31m|[m * [33m42ea54c2[m Further work on eureka-client API + example application.
[35m|[m [34m|[m [31m|[m * [33m64f691e5[m Replace SuroAuditService with KafkaAuditService + integrate it with write server. Implement extensibility framework with module auto loading mechanism.
[35m|[m [34m|[m [31m|[m *   [33mbfdcdcfd[m Merge remote-tracking branch 'remotes/netflix/2.x' into 2.x
[35m|[m [34m|[m [31m|[m [33m|[m[31m\[m  
[35m|[m [34m|[m [31m|[m [33m|[m[31m/[m  
[35m|[m [34m|[m [31m|[m[31m/[m[33m|[m   
[35m|[m [34m|[m * [33m|[m   [33m1a764472[m Merge pull request #206 from NiteshKant/2.x
[35m|[m [34m|[m [35m|[m[36m\[m [33m\[m  
[35m|[m [34m|[m [35m|[m * [33m|[m [33mb9ba9f56[m Review comments & test fix
[35m|[m [34m|[m [35m|[m * [33m|[m [33m26033a24[m Merged with master.
[35m|[m [34m|[m [35m|[m * [33m|[m   [33m112c5124[m Merged with master.
[35m|[m [34m|[m [35m|[m [1;31m|[m[35m\[m [33m\[m  
[35m|[m [34m|[m [35m|[m [1;31m|[m[35m/[m [33m/[m  
[35m|[m [34m|[m [35m|[m[35m/[m[1;31m|[m [33m|[m   
[35m|[m [34m|[m * [1;31m|[m [33m|[m   [33mdc89e23b[m Merge pull request #205 from tbak/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m [1;31m\[m [33m\[m  
[35m|[m [34m|[m [1;33m|[m [1;34m|[m * [33m|[m [33mfb7337ac[m Client side refactoring
[35m|[m [34m|[m [1;33m|[m [1;34m|[m [1;34m|[m * [33mb6bbdab0[m Add AuditService API with Suro implementation - WIP
[35m|[m [34m|[m [1;33m|[m [1;34m|[m [1;34m|[m[1;34m/[m  
[35m|[m [34m|[m [1;33m|[m [1;34m|[m[1;34m/[m[1;34m|[m   
[35m|[m [34m|[m [1;33m|[m * [1;34m|[m [33mfe229975[m Add runCluster task to gradle.
[35m|[m [34m|[m [1;33m|[m[1;33m/[m [1;34m/[m  
[35m|[m [34m|[m * [1;34m|[m   [33m7ef8f672[m Merge pull request #204 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;34m|[m[1;36m\[m [1;34m\[m  
[35m|[m [34m|[m [1;34m|[m [1;36m|[m[1;34m/[m  
[35m|[m [34m|[m [1;34m|[m[1;34m/[m[1;36m|[m   
[35m|[m [34m|[m [1;34m|[m * [33m183165a5[m - Do not subscribe to client channel stream for all users - fix test failures (change in behaviour to close(), define behaviour first)
[35m|[m [34m|[m [1;34m|[m * [33me50a22e4[m Fix bug in client side interestChannelImpl not propagating delta
[35m|[m [34m|[m [1;34m|[m * [33m3b090625[m Some more unit tests
[35m|[m [34m|[m [1;34m|[m[1;34m/[m  
[35m|[m [34m|[m *   [33m79dc6f2e[m Merge pull request #202 from tbak/2.x
[35m|[m [34m|[m [31m|[m[32m\[m  
[35m|[m [34m|[m [31m|[m *   [33md75550ee[m Merge remote-tracking branch 'remotes/netflix/2.x' into tbak/2.x
[35m|[m [34m|[m [31m|[m [33m|[m[31m\[m  
[35m|[m [34m|[m [31m|[m [33m|[m[31m/[m  
[35m|[m [34m|[m [31m|[m[31m/[m[33m|[m   
[35m|[m [34m|[m * [33m|[m   [33mdbd0af5f[m Merge pull request #201 from qiangdavidliu/2.x
[35m|[m [34m|[m [35m|[m[36m\[m [33m\[m  
[35m|[m [34m|[m [35m|[m * [33m|[m [33m3f679b84[m Increase wait time in test
[35m|[m [34m|[m [35m|[m * [33m|[m [33m82f2bd1a[m Reworked client impl of interest
[35m|[m [34m|[m [35m|[m[35m/[m [33m/[m  
[35m|[m [34m|[m [35m|[m * [33mcfac6bfe[m Add read server - WIP + refactor the code to be more guice friendly.
[35m|[m [34m|[m [35m|[m * [33m1374a91e[m Add EmbeddedEurekaCluster, to run full cluster in one JVM.
[35m|[m [34m|[m [35m|[m[35m/[m  
[35m|[m [34m|[m *   [33m3b8d07fa[m Merge pull request #200 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m  
[35m|[m [34m|[m [1;31m|[m * [33m35053798[m moving EurekaRegistry instantiation outside of EurekaService on the client
[35m|[m [34m|[m [1;31m|[m[1;31m/[m  
[35m|[m [34m|[m *   [33mf5ee143e[m Merge pull request #199 from tbak/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m  
[35m|[m [34m|[m [1;33m|[m * [33ma4137f52[m Remove MessageBrokerServer and MessageBrokerBuilder abstractions, which are no longer needed.
[35m|[m [34m|[m * [1;34m|[m [33m74088ed7[m Merge pull request #197 from tbak/2.x
[35m|[m [34m|[m [1;35m|[m[1;34m\[m[1;34m|[m 
[35m|[m [34m|[m [1;35m|[m * [33m34bf3b6a[m Get rid of easymock (use mockito instead).
[35m|[m [34m|[m [1;35m|[m * [33m83db9076[m Minor server resolver update.
[35m|[m [34m|[m [1;35m|[m * [33mf945afb2[m Yet another InterestNotificationMultiplexer implementation.
[35m|[m [34m|[m [1;35m|[m * [33m6a20d76a[m Fix InterestNotificationMultiplexer implementation.
[35m|[m [34m|[m [1;35m|[m * [33m0e460161[m Reimplement InterestNotificationMultiplexer to be thread safe.
[35m|[m [34m|[m [1;35m|[m * [33m58f4e5ea[m Increase timeouts in test.
[35m|[m [34m|[m [1;35m|[m *   [33m146c6c70[m Merge tbak/2.x with netflix/2.x
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m\[m  
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m/[m  
[35m|[m [34m|[m [1;35m|[m[1;35m/[m[31m|[m   
[35m|[m [34m|[m * [31m|[m   [33m9a8cad76[m Merge pull request #196 from qiangdavidliu/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [31m\[m  
[35m|[m [34m|[m [33m|[m * [31m|[m [33m088eb7bf[m Removing need for lock in EurekaClient
[35m|[m [34m|[m [33m|[m * [31m|[m [33m5d027915[m Initial client-side interest impl
[35m|[m [34m|[m [33m|[m[33m/[m [31m/[m  
[35m|[m [34m|[m * [31m|[m   [33mbeca56af[m Merge pull request #195 from tbak/2.x
[35m|[m [34m|[m [35m|[m[36m\[m [31m\[m  
[35m|[m [34m|[m * [36m\[m [31m\[m   [33me881af2a[m Merge pull request #194 from tbak/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m [36m\[m [31m\[m  
[35m|[m [34m|[m [1;31m|[m [1;32m|[m [36m|[m * [33mc1e9e707[m Use Ribbon transport in eureka-client.
[35m|[m [34m|[m [1;31m|[m [1;32m|[m [36m|[m * [33m71fdf480[m Implement composite interest index as an aggregate of atomic indexes.
[35m|[m [34m|[m [1;31m|[m [1;32m|[m [36m|[m[36m/[m  
[35m|[m [34m|[m [1;31m|[m [1;32m|[m * [33mec547944[m Disable failing test that depends on DNS access.
[35m|[m [34m|[m [1;31m|[m [1;32m|[m * [33m4fee6a17[m Implement bootstrap resolvers. EurekaServerResolver still neds to be done + some extensions to StaticServerResolver are required.
[35m|[m [34m|[m [1;31m|[m [1;32m|[m * [33m7d58cb03[m Implement AwsDataCenterInfo provider.
[35m|[m [34m|[m [1;31m|[m [1;32m|[m[1;32m/[m  
[35m|[m [34m|[m [1;31m|[m * [33mf0aa3c53[m Fix bug in InterestNotificationMultiplexer.
[35m|[m [34m|[m [1;31m|[m *   [33mac11e65a[m Merge remote-tracking branch 'remotes/netflix/2.x' into tbak/2.x
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;31m\[m  
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;31m/[m  
[35m|[m [34m|[m [1;31m|[m[1;31m/[m[1;33m|[m   
[35m|[m [34m|[m * [1;33m|[m   [33mcbd6e44e[m Merge pull request #193 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [1;33m\[m  
[35m|[m [34m|[m [1;35m|[m * [1;33m|[m [33m0cc76722[m Test framework updates: - added interest command to CLI tool - added testEurekaServer with pre-registered apps - minor package refactoring
[35m|[m [34m|[m [1;35m|[m[1;35m/[m [1;33m/[m  
[35m|[m [34m|[m * [1;33m|[m   [33mf377cfa5[m Merge pull request #192 from qiangdavidliu/2.x
[35m|[m [34m|[m [31m|[m[32m\[m [1;33m\[m  
[35m|[m [34m|[m [31m|[m * [1;33m|[m [33md94b132c[m Standardize InstanceInfoField names
[35m|[m [34m|[m [31m|[m[31m/[m [1;33m/[m  
[35m|[m [34m|[m * [1;33m|[m   [33mdc540356[m Merge pull request #191 from tbak/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [1;33m\[m  
[35m|[m [34m|[m [33m|[m [34m|[m * [33ma852ca94[m Implement interest channel upgrade.
[35m|[m [34m|[m [33m|[m [34m|[m * [33mece0c722[m A few improvements to Eureka CLI, to speed up manual testing process.
[35m|[m [34m|[m [33m|[m [34m|[m[34m/[m  
[35m|[m [34m|[m [33m|[m * [33m2b12105b[m Channel/transport update - WIP.
[35m|[m [34m|[m [33m|[m[33m/[m  
[35m|[m [34m|[m *   [33m368d538a[m Merge pull request #188 from tbak/2.x
[35m|[m [34m|[m [35m|[m[36m\[m  
[35m|[m [34m|[m [35m|[m * [33m7f7fb52e[m Reimplement MessageBroker acknowledgement timeout mechanism. Get rid of acknowledgement correlation id.
[35m|[m [34m|[m [35m|[m * [33m33eb0077[m Channel/transport updates - WIP
[35m|[m [34m|[m [35m|[m * [33md20c1235[m Fix failing tests.
[35m|[m [34m|[m [35m|[m * [33m9ddb0609[m WIP
[35m|[m [34m|[m [35m|[m *   [33me44448ed[m Merge branch '2.x' of https://github.com/Netflix/eureka into 2.x-channels
[35m|[m [34m|[m [35m|[m [1;31m|[m[35m\[m  
[35m|[m [34m|[m [35m|[m [1;31m|[m[35m/[m  
[35m|[m [34m|[m [35m|[m[35m/[m[1;31m|[m   
[35m|[m [34m|[m * [1;31m|[m   [33m93d63dbf[m Merge pull request #186 from tbak/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m [1;31m\[m  
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [33m6191a2e3[m Enable tests there were accidently commented out.
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m   [33m1f468819[m Merge remote-tracking branch 'netflix/2.x' into 2.x
[35m|[m [34m|[m [1;33m|[m [1;35m|[m[1;33m\[m [1;31m\[m  
[35m|[m [34m|[m [1;33m|[m [1;35m|[m[1;33m/[m [1;31m/[m  
[35m|[m [34m|[m [1;33m|[m[1;33m/[m[1;35m|[m [1;31m|[m   
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [33m40465fec[m Add DataCenterInfo and a few other abstractions: * NetworkAddress - to represent multiple NICs on a server associated with                    private and public IP and/or hostname * InstanceInfoProvider - provides local InstanceInfo information * DataCenterInfoProvider - provides information about server's own data center
[35m|[m [34m|[m [1;33m|[m [1;36m|[m * [33m9bdd9a97[m Working on channels (WIP)
[35m|[m [34m|[m [1;33m|[m [1;36m|[m[1;33m/[m  
[35m|[m [34m|[m [1;33m|[m[1;33m/[m[1;36m|[m   
[35m|[m [34m|[m * [1;36m|[m [33m95f26062[m Merge pull request #183 from tbak/2.x
[35m|[m [34m|[m [31m|[m[1;36m\[m[1;36m|[m 
[35m|[m [34m|[m [31m|[m * [33mb6f21528[m Add missing pieces to run Eureka client/server for the current code base.
[35m|[m [34m|[m [31m|[m[31m/[m  
[35m|[m [34m|[m *   [33m17fa554e[m Merge pull request #182 from tbak/2.x
[35m|[m [34m|[m [33m|[m[34m\[m  
[35m|[m [34m|[m [33m|[m * [33m595a36c9[m Upgrade to Java7 and remove redundancy from gradle scripts.
[35m|[m [34m|[m [33m|[m[33m/[m  
[35m|[m [34m|[m *   [33m8fdaba11[m Merge pull request #180 from qiangdavidliu/2.x
[35m|[m [34m|[m [35m|[m[36m\[m  
[35m|[m [34m|[m [35m|[m * [33mdb61c67e[m Reworked InstanceInfoField so reflection is not used to set InstanceInfo Removed unused classes
[35m|[m [34m|[m [35m|[m[35m/[m  
[35m|[m [34m|[m *   [33m3793bf1b[m Merge pull request #178 from tbak/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m  
[35m|[m [34m|[m [1;31m|[m *   [33mfa982e35[m Merge
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;31m\[m  
[35m|[m [34m|[m [1;31m|[m [1;33m|[m[1;31m/[m  
[35m|[m [34m|[m [1;31m|[m[1;31m/[m[1;33m|[m   
[35m|[m [34m|[m * [1;33m|[m   [33m1763c444[m Merge pull request #177 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m [1;33m\[m  
[35m|[m [34m|[m [1;35m|[m * [1;33m|[m [33m4ece5cf0[m Update version when applying Delta in InstanceInfo.Builder.
[35m|[m [34m|[m [1;35m|[m * [1;33m|[m [33mf7c22bdd[m Removing old usages of Java serialization
[35m|[m [34m|[m [1;35m|[m * [1;33m|[m [33me43539a8[m Test clean up with SampleDelta and SampleInstanceInfo
[35m|[m [34m|[m [1;35m|[m * [1;33m|[m [33m925367b0[m Adding diff methods to InstanceInfo to generate sets of Deltas from two instanceInfos. Removing delta tests for Long type as they are no longer a supported delta variable type.
[35m|[m [34m|[m [1;35m|[m * [1;33m|[m [33m875fc737[m Delta should be serializable
[35m|[m [34m|[m [1;35m|[m * [1;33m|[m [33maf295375[m Comment out mavenLocal()
[35m|[m [34m|[m [1;35m|[m[1;35m/[m [1;33m/[m  
[35m|[m [34m|[m * [1;33m|[m   [33m8abcf364[m Merge pull request #175 from tbak/2.x
[35m|[m [34m|[m [31m|[m[32m\[m [1;33m\[m  
[35m|[m [34m|[m * [32m\[m [1;33m\[m   [33m834d30b8[m Merge pull request #171 from tbak/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [32m\[m [1;33m\[m  
[35m|[m [34m|[m [33m|[m [34m|[m [32m|[m * [33md431b0dc[m Integrate discovery server transport layer with InterestChannel.
[35m|[m [34m|[m [33m|[m [34m|[m [32m|[m[32m/[m  
[35m|[m [34m|[m [33m|[m [34m|[m * [33m48149b0d[m Configure junit test timeouts for eureka-server tests.
[35m|[m [34m|[m [33m|[m [34m|[m * [33mf5e01cd8[m Update eureka-client to use Delta class. Update avro/json codecs to deal with modified data model.
[35m|[m [34m|[m [33m|[m [34m|[m[34m/[m  
[35m|[m [34m|[m [33m|[m *   [33m32470a7c[m Merge #171 with 2.x latest commit.
[35m|[m [34m|[m [33m|[m [35m|[m[33m\[m  
[35m|[m [34m|[m [33m|[m [35m|[m[33m/[m  
[35m|[m [34m|[m [33m|[m[33m/[m[35m|[m   
[35m|[m [34m|[m * [35m|[m   [33m0bde2919[m Merge pull request #169 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m [35m\[m  
[35m|[m [34m|[m [1;31m|[m * [35m|[m [33m9c3e65a9[m Use interface TypeVariable instead of proprietary Impl
[35m|[m [34m|[m [1;31m|[m * [35m|[m [33m45bcab8b[m Reworked delta (for InstanceInfo)
[35m|[m [34m|[m [1;31m|[m * [35m|[m [33m87b9e72f[m update comments
[35m|[m [34m|[m [1;31m|[m * [35m|[m [33m2e50a393[m Increasing heartbeatLatch await time for test case.
[35m|[m [34m|[m [1;31m|[m * [35m|[m [33ma97efad0[m Another implementation of delta and deltaInstanceInfo
[35m|[m [34m|[m [1;31m|[m * [35m|[m [33me97a1321[m Adding a forChanges in DeltaInstanceInfo to return stream of Delta ChangeNotifications Cleaned up tests a little
[35m|[m [34m|[m [1;31m|[m * [35m|[m [33m8a8619be[m Initial proposal for DeltaInstanceInfo
[35m|[m [34m|[m [1;31m|[m[1;31m/[m [35m/[m  
[35m|[m [34m|[m [1;31m|[m * [33m59708569[m Integrate registration protocol transport with EurekaService API.
[35m|[m [34m|[m [1;31m|[m * [33m2927dd23[m Eureka client transport update.
[35m|[m [34m|[m [1;31m|[m[1;31m/[m  
[35m|[m [34m|[m *   [33mcbc9f65c[m Merge pull request #170 from tbak/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m  
[35m|[m [34m|[m [1;33m|[m * [33mb4df2a68[m Shift back Karyon version to the latest release so we can merge this code into the main repo. Some Karyon code was commented out. We will be able to uncomment it when the new Karyon version is released.
[35m|[m [34m|[m [1;33m|[m * [33m6b212a81[m Joined refactoring related to the new channel abstraction and transport layer.
[35m|[m [34m|[m [1;33m|[m * [33mc3690306[m EurekaServer stub.
[35m|[m [34m|[m [1;33m|[m * [33m61cb6c8a[m Update build system files - extract common parts.
[35m|[m [34m|[m [1;33m|[m * [33mfb7c8377[m Move remaining common test classes to eureka-test-utils.
[35m|[m [34m|[m [1;33m|[m * [33m4aca6fae[m Better avro codec error handling.
[35m|[m [34m|[m [1;33m|[m[1;33m/[m  
[35m|[m [34m|[m *   [33m60179312[m Merge pull request #168 from NiteshKant/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m  
[35m|[m [34m|[m [1;35m|[m * [33mc6602b52[m Added stub implementations for EurekaService & ServiceChannel.
[35m|[m [34m|[m [1;35m|[m *   [33m4f220cb6[m Merge branch '2.x' of https://github.com/Netflix/eureka into 2.x
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m\[m  
[35m|[m [34m|[m [1;35m|[m [31m|[m[1;35m/[m  
[35m|[m [34m|[m [1;35m|[m[1;35m/[m[31m|[m   
[35m|[m [34m|[m * [31m|[m   [33m35839fb0[m Merge pull request #167 from qiangdavidliu/2.x
[35m|[m [34m|[m [33m|[m[34m\[m [31m\[m  
[35m|[m [34m|[m [33m|[m * [31m|[m [33m22ace95c[m Adding instanceLocation to InstanceInfo.toString, equal, hascode etc.
[35m|[m [34m|[m [33m|[m * [31m|[m [33maa4b6379[m Adding an initial impl of InstanceLocation. Adding a way to retrieve an eventual snapshot of current registry.
[35m|[m [34m|[m [33m|[m[33m/[m [31m/[m  
[35m|[m [34m|[m * [31m|[m   [33m85e44a7b[m Merge pull request #166 from NiteshKant/2.x
[35m|[m [34m|[m [35m|[m[36m\[m [31m\[m  
[35m|[m [34m|[m [35m|[m [36m|[m * [33m0603a9c9[m (WIP) Introducing the concept of EurekaService and ServiceChannel.
[35m|[m [34m|[m [35m|[m [36m|[m[36m/[m  
[35m|[m [34m|[m [35m|[m * [33mad461ad3[m Increasing the maximum wait time for the test.
[35m|[m [34m|[m [35m|[m * [33m7bacb9ea[m Removing the unused Index enum.
[35m|[m [34m|[m [35m|[m[35m/[m  
[35m|[m [34m|[m *   [33m9226eb49[m Merge pull request #165 from tbak/2.x
[35m|[m [34m|[m [1;31m|[m[1;32m\[m  
[35m|[m [34m|[m [1;31m|[m * [33m649794e4[m Fix race condition in transport unit test.
[35m|[m [34m|[m [1;31m|[m * [33m2389f690[m Transport update.
[35m|[m [34m|[m [1;31m|[m[1;31m/[m  
[35m|[m [34m|[m *   [33m56e4c968[m Merge pull request #164 from tbak/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m  
[35m|[m [34m|[m [1;33m|[m * [33mfc90f2a6[m Fix Json codec.
[35m|[m [34m|[m [1;33m|[m * [33m3a1380a7[m Eliminate type parameters from MessageBroker framework.
[35m|[m [34m|[m [1;33m|[m * [33m439e701f[m Refactor asynchronous transport (get rid of Message hierarchy).
[35m|[m [34m|[m [1;33m|[m * [33mc4c45134[m Fix avro encoding for class hierarchy.
[35m|[m [34m|[m [1;33m|[m * [33m7c9ca106[m Eureka transport - discovery server.
[35m|[m [34m|[m [1;33m|[m[1;33m/[m  
[35m|[m [34m|[m *   [33mbce4fb05[m Merge pull request #163 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m  
[35m|[m [34m|[m [1;35m|[m * [33mfc84bcc0[m Merged EurekaRegistryImpl and InstanceRegistry, and renaming to LeasedInstanceRegistry for better name context.
[35m|[m [34m|[m [1;35m|[m * [33m9a9a00bb[m Switching sample notification generation in test to SampleChangeNotification
[35m|[m [34m|[m [1;35m|[m[1;35m/[m  
[35m|[m [34m|[m *   [33me5a1041f[m Merge pull request #161 from qiangdavidliu/2.x
[35m|[m [34m|[m [31m|[m[32m\[m  
[35m|[m [34m|[m [31m|[m * [33m751e17ab[m Adding initial implementations to partially implemented model classes
[35m|[m [34m|[m * [32m|[m   [33mdeee3576[m Merge pull request #162 from NiteshKant/2.x
[35m|[m [34m|[m [32m|[m[34m\[m [32m\[m  
[35m|[m [34m|[m [32m|[m [34m|[m[32m/[m  
[35m|[m [34m|[m [32m|[m[32m/[m[34m|[m   
[35m|[m [34m|[m [32m|[m * [33m7269be0c[m Implementing init state & real time state consistency.
[35m|[m [34m|[m * [34m|[m [33mad6b7603[m Merge pull request #160 from NiteshKant/2.x
[35m|[m [34m|[m [35m|[m[34m\[m[34m|[m 
[35m|[m [34m|[m [35m|[m * [33mc72fb4f2[m Interests infra (WIP)
[35m|[m [34m|[m [35m|[m * [33m8d0107bf[m Interests infra (WIP)
[35m|[m [34m|[m [35m|[m * [33md874584e[m Update for the interests changes
[35m|[m [34m|[m [35m|[m *   [33m8a6665c2[m Merge branch '2.x' of https://github.com/Netflix/eureka into 2.x
[35m|[m [34m|[m [35m|[m [1;31m|[m[35m\[m  
[35m|[m [34m|[m [35m|[m [1;31m|[m[35m/[m  
[35m|[m [34m|[m [35m|[m[35m/[m[1;31m|[m   
[35m|[m [34m|[m * [1;31m|[m   [33m7eef8244[m Merge pull request #159 from tbak/2.x
[35m|[m [34m|[m [1;33m|[m[1;34m\[m [1;31m\[m  
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [33mec7b857b[m Registration/discovery transport implementation - work in progress.
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [33m85321fb9[m Add JSON codec for testing purposes.
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [33mb4df2e1b[m Refactor transport implementation to be more flexible with different protocol/codec implementations.
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [33me32024a8[m Fix avro message broker failing tests.
[35m|[m [34m|[m [1;33m|[m * [1;31m|[m [33m33da1fde[m Update registration/discovery protocol classes + verify transport compatibility.
[35m|[m [34m|[m [1;33m|[m[1;33m/[m [1;31m/[m  
[35m|[m [34m|[m [1;33m|[m * [33m7bee2b0c[m Interests infra (WIP)
[35m|[m [34m|[m [1;33m|[m[1;33m/[m  
[35m|[m [34m|[m *   [33m194e1f46[m Merge pull request #156 from qiangdavidliu/2.x
[35m|[m [34m|[m [1;35m|[m[1;36m\[m  
[35m|[m [34m|[m [1;35m|[m * [33m75730422[m @Ignore all tests in AvroMessageBrokerTest for now
[35m|[m [34m|[m [1;35m|[m * [33mbb8b10dc[m @Ignore failing avro test for now
[35m|[m [34m|[m [1;35m|[m * [33m5cb0cfa1[m Initial example interface/implementation of model and registry
[35m|[m [34m|[m [1;35m|[m[1;35m/[m  
[35m|[m [34m|[m *   [33m8ff63163[m Merge pull request #155 from tbak/2.x
[35m|[m [34m|[m [31m|[m[32m\[m  
[35m|[m [34m|[m [31m|[m * [33me4a25b3d[m Make sure project compiles under Java6.
[35m|[m [34m|[m [31m|[m * [33mf6fb7de6[m Move content of eureka-transport project to eureka-core.
[35m|[m [34m|[m [31m|[m * [33m86bb09bf[m Eureka 2.0 client transport prototype.
[35m|[m [34m|[m [31m|[m * [33m17e2ad6d[m Eureka asynchronous transport - initial version.
[35m|[m [34m|[m [31m|[m[31m/[m  
[35m|[m [34m|[m * [33m8f83055e[m Merge pull request #154 from NiteshKant/2.x
[35m|[m [34m|[m[35m/[m[34m|[m 
[35m|[m[35m/[m[34m|[m [34m|[m 
[35m|[m [34m|[m * [33md1adf961[m Adding placeholder test files to keep cloudbees happy.
[35m|[m [34m|[m * [33mde952936[m Adding a placeholder java file in each module.
[35m|[m [34m|[m * [33m10d8c213[m Skeletal changes for eureka 2.X.
[35m|[m [34m|[m[35m/[m  
[35m|[m[35m/[m[34m|[m   
* [34m|[m [33mdc63d511[m [Gradle Release Plugin] - new version commit:  '1.1.138-SNAPSHOT'.
* [34m|[m [33m00a14374[m[33m ([m[1;33mtag: 1.1.137[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.137'.
* [34m|[m   [33m4e229bcd[m Merge pull request #151 from qiangdavidliu/minorfixes
[35m|[m[36m\[m [34m\[m  
[35m|[m * [34m|[m [33mbd86f520[m - change periodic info logs to debug logs in DiscoveryClient - remove clientId logging in discovery server
[35m|[m[35m/[m [34m/[m  
* [34m|[m [33m27af44d6[m Merge pull request #150 from NiteshKant/master
[1;31m|[m[34m\[m[34m|[m 
[1;31m|[m * [33me38a56a6[m Enabling registration for non-amazon datacenters on server startup.
[1;31m|[m[1;31m/[m  
* [33m619e57d8[m [Gradle Release Plugin] - new version commit:  '1.1.137-SNAPSHOT'.
* [33m51a5993b[m[33m ([m[1;33mtag: 1.1.136[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.136'.
*   [33m63f6025d[m Merge pull request #142 from qiangdavidliu/add-auth-headers
[1;33m|[m[1;34m\[m  
[1;33m|[m * [33m295f2574[m Removing config for identity header filters. Changing default config for server identity logging to true.
[1;33m|[m * [33m7c1d26b1[m Renaming of classes and filters for more clarity
[1;33m|[m * [33mbceb64bd[m Adding auth headers to eureka client and server outbound requests. Adding filter to optionally log auth headers in eureka server.
[1;33m|[m[1;33m/[m  
* [33md852213d[m [Gradle Release Plugin] - new version commit:  '1.1.136-SNAPSHOT'.
* [33m4efe93e6[m[33m ([m[1;33mtag: 1.1.135[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.135'.
*   [33mf7681c95[m Merge pull request #148 from NiteshKant/master
[1;35m|[m[1;36m\[m  
[1;35m|[m * [33m466d8922[m Fixes issue #147
* [1;36m|[m [33m95ab3e92[m Merge pull request #146 from NiteshKant/master
[31m|[m[1;36m\[m[1;36m|[m 
[31m|[m * [33mdd6a885a[m Fixes issue #145
[31m|[m * [33m721faafb[m Fixes issue #145
[31m|[m[31m/[m  
*   [33mdfc92ab2[m Merge pull request #144 from elandau/master
[33m|[m[34m\[m  
[33m|[m * [33mc683ff9b[m Fix NPE
[33m|[m * [33m9880756b[m Use Provider<HealthCheckCallback> to avoid circular dependencies
[33m|[m * [33m32206992[m Make HealthCheckCallback injectable
* [34m|[m   [33m48479480[m Merge pull request #143 from qiangdavidliu/better-locking
[35m|[m[36m\[m [34m\[m  
[35m|[m * [34m|[m [33m7152ff09[m Adding log line for when client is configured to not register with the server
[35m|[m * [34m|[m [33mb9009c0d[m Refactored periodic registry update locking to: - use a better name for the generational counter - added additional fine grained locking around the getDelta code path   to ensure more correct synchronisation
[35m|[m * [34m|[m [33mbe8cfd70[m Log msg update
[35m|[m * [34m|[m [33m0b5bfa5e[m Switch to a lock for registry updates for better concurrency control
[35m|[m[35m/[m [34m/[m  
* [34m|[m   [33mc5eb94b2[m Merge pull request #141 from qiangdavidliu/fallback-for-stuck-heartbeat-threads
[1;31m|[m[1;32m\[m [34m\[m  
[1;31m|[m * [34m|[m [33m5d91ba28[m Adding new files
[1;31m|[m * [34m|[m [33mbfde56cf[m Wrapping the discoveryClient's heartbeat and cacheRefresh threads in a supervisor thread that enforces timeouts.
[1;31m|[m [34m|[m[34m/[m  
* [34m|[m   [33m4c7763ff[m Merge pull request #140 from aspyker/zero_wait_for_initial_registration
[34m|[m[1;34m\[m [34m\[m  
[34m|[m [1;34m|[m[34m/[m  
[34m|[m[34m/[m[1;34m|[m   
[34m|[m * [33mf497ad49[m add eureka.appinfo.initial.replicate.time property to allow faster initial registration
[34m|[m[34m/[m  
* [33mc1bd1923[m [Gradle Release Plugin] - new version commit:  '1.1.135-SNAPSHOT'.
* [33mffd64b38[m[33m ([m[1;33mtag: 1.1.134[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.134'.
*   [33md4300701[m Merge pull request #136 from NiteshKant/master
[1;35m|[m[1;36m\[m  
[1;35m|[m * [33mf58a8cfc[m Removing range dependencies.
* [1;36m|[m [33m3ec4800c[m [Gradle Release Plugin] - new version commit:  '1.1.134-SNAPSHOT'.
* [1;36m|[m [33mf8979dad[m[33m ([m[1;33mtag: 1.1.133[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.133'.
* [1;36m|[m   [33m6b0357ca[m Merge pull request #133 from qiangdavidliu/single-app-registry-refresh
[31m|[m[32m\[m [1;36m\[m  
[31m|[m * [1;36m\[m   [33m01e1ae2c[m Merge branch 'single-app-registry-refresh' of https://github.com/qiangdavidliu/eureka into single-app-registry-refresh
[31m|[m [33m|[m[34m\[m [1;36m\[m  
[31m|[m [33m|[m * [1;36m|[m [33m6333a71d[m Adding config override in eureka-client to force registry refresh to only pick up data for a single app (specified by the config).
[31m|[m * [34m|[m [1;36m|[m [33m526d3b1e[m Adding config override in eureka-client to force registry refresh to only pick up data for a single app (specified by the config).
[31m|[m[31m/[m [34m/[m [1;36m/[m  
* [34m|[m [1;36m|[m   [33m0f4960d4[m Merge pull request #130 from Knewton/fix-instance-count-log
[34m|[m[36m\[m [34m\[m [1;36m\[m  
[34m|[m [36m|[m[34m/[m [1;36m/[m  
[34m|[m[34m/[m[36m|[m [1;36m|[m   
[34m|[m * [1;36m|[m [33m26d94654[m Fix appsHashCode not getting updated
[34m|[m * [1;36m|[m [33m472ea0f9[m Eureka should log the total number of instances
[34m|[m[34m/[m [1;36m/[m  
* [1;36m|[m   [33m7f681efc[m Merge pull request #129 from tommack/patch-1
[1;31m|[m[1;32m\[m [1;36m\[m  
[1;31m|[m * [1;36m|[m [33me8b4057b[m Update CloudInstanceConfig.java
* [1;32m|[m [1;36m|[m   [33m17742f3a[m Merge pull request #128 from elandau/master
[1;32m|[m[1;34m\[m [1;32m\[m [1;36m\[m  
[1;32m|[m [1;34m|[m[1;32m/[m [1;36m/[m  
[1;32m|[m[1;32m/[m[1;34m|[m [1;36m|[m   
[1;32m|[m * [1;36m|[m [33m1adea02a[m Scheduled executor should be a daemon
[1;32m|[m[1;32m/[m [1;36m/[m  
* [1;36m|[m [33ma1efd720[m [Gradle Release Plugin] - new version commit:  '1.1.133-SNAPSHOT'.
* [1;36m|[m [33m523e5917[m[33m ([m[1;33mtag: 1.1.132[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.132'.
* [1;36m|[m [33mce4c2bc9[m Merge pull request #127 from NiteshKant/master
[1;35m|[m[1;36m\[m[1;36m|[m 
[1;35m|[m * [33m297643c4[m Fixing build failures
[1;35m|[m[1;35m/[m  
*   [33mdce801ba[m Merge pull request #126 from elandau/master
[31m|[m[32m\[m  
[31m|[m * [33m48b1b5dc[m Minor cleanup
[31m|[m * [33m53ca660c[m Fix injecting of EventBus into DiscoveryClient
* [32m|[m [33maeb7500b[m Merge pull request #125 from elandau/master
[33m|[m[32m\[m[32m|[m 
[33m|[m * [33mcf5a756e[m Fix Providers to cache and return the same instance
[33m|[m[33m/[m  
* [33m927c5019[m [Gradle Release Plugin] - new version commit:  '1.1.132-SNAPSHOT'.
* [33m4bf35317[m[33m ([m[1;33mtag: 1.1.131[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.131'.
*   [33m67ea389f[m Merge pull request #123 from NiteshKant/master
[35m|[m[36m\[m  
[35m|[m * [33m0542afbc[m Fixing dependency versions suitable for netflix artifactory.
* [36m|[m [33mc3f2c7b5[m Merge pull request #122 from NiteshKant/master
[1;31m|[m[36m\[m[36m|[m 
[1;31m|[m * [33ma8acb94b[m Fixing build failure due to cross-module test deps
[1;31m|[m * [33mb40c7d8e[m Adding testCompile dep on eureka-client from core.
[1;31m|[m * [33m8b29aa04[m Fix for issue #118
[1;31m|[m * [33m68386838[m Fix for issue #120
* [1;32m|[m   [33m70c7c48a[m Merge pull request #121 from Knewton/log-level-fix
[1;32m|[m[1;34m\[m [1;32m\[m  
[1;32m|[m [1;34m|[m[1;32m/[m  
[1;32m|[m[1;32m/[m[1;34m|[m   
[1;32m|[m * [33m171eb552[m Fix log level for serviceUrls
[1;32m|[m[1;32m/[m  
*   [33m71402560[m Merge pull request #117 from Knewton/registrycleanup
[1;35m|[m[1;36m\[m  
[1;35m|[m * [33m8d49020b[m Clean up if block and add JavaDoc in DiscoveryClient
[1;35m|[m * [33m370f6acf[m Remove redundant continue in loop
[1;35m|[m * [33md6d10860[m Fix formatting and CheckStyles naming in EurekaBootStrap
[1;35m|[m * [33m5dd41e91[m Remove redundant checks for null in InstanceRegistry
[1;35m|[m * [33m10b34a2e[m Convert for loops to foreach loops in InstanceRegistry
[1;35m|[m * [33m945df1b2[m Make InstanceRegistry locks final
[1;35m|[m * [33m9218147d[m Fix naming in InstanceRegistry to be CheckStyles compliant
[1;35m|[m * [33mabc327a3[m Clean up code formatting in Applications
[1;35m|[m[1;35m/[m  
*   [33mf4b9585f[m Merge pull request #116 from NiteshKant/master
[31m|[m[32m\[m  
[31m|[m * [33m9d0804dd[m Using upper bounds for dependency versions
[31m|[m *   [33mc4ecf60a[m Merge branch 'master' of https://github.com/Netflix/eureka
[31m|[m [33m|[m[34m\[m  
[31m|[m * [34m|[m [33mb0e7073f[m Changing external dependencies to follow a range version scheme.
* [34m|[m [34m|[m   [33mfe052528[m Merge pull request #114 from Knewton/docs
[34m|[m[36m\[m [34m\[m [34m\[m  
[34m|[m [36m|[m[34m_[m[34m|[m[34m/[m  
[34m|[m[34m/[m[36m|[m [34m|[m   
[34m|[m * [34m|[m [33m11011b45[m Fix typos in JavaDoc/comments in EurekaBootStrap
[34m|[m * [34m|[m [33m8ab019df[m Fix up typos in documentation in InstanceRegistry
[34m|[m * [34m|[m [33mec0a1e46[m Fix typos in comments in Applications
[34m|[m * [34m|[m [33m7928ed27[m Add additional JavaDoc
[34m|[m[34m/[m [34m/[m  
* [34m|[m   [33m913b1172[m Merge pull request #110 from Knewton/checkstyles
[1;31m|[m[1;32m\[m [34m\[m  
[1;31m|[m * [34m|[m [33m89dff7cd[m Make some public values private that can be
[1;31m|[m * [34m|[m [33me0e45473[m Make Applications have CheckStyles-compliant naming
[1;31m|[m * [34m|[m [33md0c53078[m Remove redundant "public" qualifiers on interfaces
[1;31m|[m * [34m|[m [33m159db2b7[m @UpStatus, etc., aren't JavaDoc calls; escape them
[1;31m|[m * [34m|[m [33m57d17d8f[m Use "Type[] foo", not "Type foo[]"
[1;31m|[m * [34m|[m [33m04b9cf5f[m Switch order of static/final declaration
[1;31m|[m * [34m|[m [33m06b1d4a5[m Delete a large number of unused imports
[1;31m|[m * [34m|[m [33ma80d3b90[m First sentence in comments should end in a period
[1;31m|[m * [34m|[m [33mda879cd5[m Add CheckStyles mandated braces to if statements
[1;31m|[m * [34m|[m [33m7abf880a[m Fix bracing-related whitespace and long lines
[1;31m|[m * [34m|[m [33m3158a3b9[m Remove trailing whitespace
[1;31m|[m[1;31m/[m [34m/[m  
* [34m|[m [33me9fbf768[m [Gradle Release Plugin] - new version commit:  '1.1.131-SNAPSHOT'.
* [34m|[m [33ma82112d4[m[33m ([m[1;33mtag: 1.1.130[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.130'.
* [34m|[m   [33mb56d28ae[m Merge pull request #113 from elandau/Governation
[1;33m|[m[1;34m\[m [34m\[m  
[1;33m|[m * [34m|[m [33mf184cf45[m Make DiscoveryClient constructor public so it can be created by a provider
[1;33m|[m * [34m|[m [33m6b8030f2[m Fix wrong interface being provided
* [1;34m|[m [34m|[m   [33ma7b7a486[m Merge pull request #112 from Knewton/deadcode
[1;35m|[m[1;36m\[m [1;34m\[m [34m\[m  
[1;35m|[m * [1;34m|[m [34m|[m [33mefa8181f[m Remove dead code in ApplicationResource
[1;35m|[m [34m|[m [1;34m|[m[34m/[m  
[1;35m|[m [34m|[m[34m/[m[1;34m|[m   
* [34m|[m [1;34m|[m   [33m47472ebf[m Merge pull request #107 from pgkelley4/fix-clientconfig-units
[34m|[m[32m\[m [34m\[m [1;34m\[m  
[34m|[m [32m|[m[34m/[m [1;34m/[m  
[34m|[m[34m/[m[32m|[m [1;34m|[m   
[34m|[m * [1;34m|[m [33mb24cf11f[m Fix DefaultEurekaClientConfig units
[34m|[m[34m/[m [1;34m/[m  
* [1;34m|[m   [33m65bd63a1[m Merge pull request #108 from bpollack/baddatacenter
[33m|[m[34m\[m [1;34m\[m  
[33m|[m * [1;34m|[m [33m52a8980c[m Do not get into a 500 state when a bad app registers
[33m|[m[33m/[m [1;34m/[m  
* [1;34m|[m   [33m869b5247[m Merge pull request #106 from bpollack/deadcode
[35m|[m[36m\[m [1;34m\[m  
[35m|[m * [1;34m|[m [33md4f1de39[m Remove dead code and unused imports
[35m|[m[35m/[m [1;34m/[m  
* [1;34m|[m [33me54e34fc[m [Gradle Release Plugin] - new version commit:  '1.1.130-SNAPSHOT'.
* [1;34m|[m [33m2c430c4d[m[33m ([m[1;33mtag: 1.1.129[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.129'.
* [1;34m|[m   [33m7513f073[m Merge pull request #105 from bpollack/master
[1;31m|[m[1;32m\[m [1;34m\[m  
[1;31m|[m * [1;34m|[m [33meca16d63[m Fix some bad JavaDoc (bad params, incorrect @link)
* [1;32m|[m [1;34m|[m   [33mfa435337[m Merge pull request #104 from NiteshKant/master
[1;32m|[m[1;34m\[m [1;32m\[m [1;34m\[m  
[1;32m|[m [1;34m|[m[1;32m/[m [1;34m/[m  
[1;32m|[m[1;32m/[m[1;34m|[m [1;34m|[m   
[1;32m|[m * [1;34m|[m [33m6a2d2099[m Fixing the indefinite wait in testcase.
[1;32m|[m[1;32m/[m [1;34m/[m  
* [1;34m|[m [33mc38e6130[m Merge pull request #103 from elandau/Governation
[1;35m|[m[1;34m\[m[1;34m|[m 
[1;35m|[m * [33me1ff7b00[m Add logging info to failing tests
[1;35m|[m * [33m04d193b5[m Fix the BackupRegistryTest by clearing properties after each test
[1;35m|[m * [33m8c159cc7[m Incorporate @NiteshKant's comments
[1;35m|[m * [33ma85c4ed2[m Un-deprecate methods
[1;35m|[m * [33mdacfd410[m Move providers into separate packages
[1;35m|[m * [33me467cc34[m Remove unnecessary sub-project
[1;35m|[m * [33m26c44f23[m Full DI for DiscoveryClient
[1;35m|[m * [33m598cefdf[m Fix the unit tests by setting proper properties in advance
[1;35m|[m *   [33mf3bb22b1[m Merge
[1;35m|[m [31m|[m[32m\[m  
[1;35m|[m * [32m|[m [33mb7e18257[m Modify MockRemoteEurekaServer to use an ephemeral port so we never have existing binding errors
[1;35m|[m * [32m|[m [33m3d223075[m Fix unit tests
[1;35m|[m * [32m|[m [33mc835c67a[m Use EventBus for discovery status notification instead of an internal handler Get rid of Rx status stream Revert changes to MockRemoteEurekaServer until it can be fixed properly
[1;35m|[m * [32m|[m   [33md5d5fb68[m Merge remote-tracking branch 'upstream/master'
[1;35m|[m [33m|[m[34m\[m [32m\[m  
[1;35m|[m * [34m|[m [32m|[m [33m0801f7b6[m Allow for multiple RefreshCallback subscriptions
[1;35m|[m * [34m|[m [32m|[m [33mb4dfeaf2[m Current instance status notification
[1;35m|[m * [34m|[m [32m|[m [33m9f62daae[m First pass at eureka extention providing Guice bindings
* [34m|[m [34m|[m [32m|[m [33mbcc34377[m [Gradle Release Plugin] - new version commit:  '1.1.129-SNAPSHOT'.
* [34m|[m [34m|[m [32m|[m [33md35711ed[m[33m ([m[1;33mtag: 1.1.128[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.128'.
* [34m|[m [34m|[m [32m|[m   [33m115ead5d[m Merge pull request #102 from jhohertz/master
[35m|[m[36m\[m [34m\[m [34m\[m [32m\[m  
[35m|[m * [34m|[m [34m|[m [32m|[m [33m4fc5362b[m remove import of com.netflix.logging.* from status.jsp, as it does not appear to be actually used, and makes jetty9 angry as there are no classes at that node of the package namespace, only below it. alternate fix, if classes are needed, is to import deeper into the package space where needed. But if its not referenced, removal is probably better.
[35m|[m[35m/[m [34m/[m [34m/[m [32m/[m  
* [34m|[m [34m|[m [32m|[m   [33m143a459e[m Merge pull request #101 from NiteshKant/master
[32m|[m[1;32m\[m [34m\[m [34m\[m [32m\[m  
[32m|[m [1;32m|[m[32m_[m[34m|[m[32m_[m[34m|[m[32m/[m  
[32m|[m[32m/[m[1;32m|[m [34m|[m [34m|[m   
[32m|[m * [34m|[m [34m|[m [33m20d302f0[m Fixing the scheduling delay for InstanceInfoReplicator.
[32m|[m[32m/[m [34m/[m [34m/[m  
* [34m|[m [34m|[m   [33mf0dec228[m Merge pull request #100 from NiteshKant/master
[34m|[m[1;34m\[m [34m\[m [34m\[m  
[34m|[m [1;34m|[m[34m_[m[34m|[m[34m/[m  
[34m|[m[34m/[m[1;34m|[m [34m|[m   
[34m|[m * [34m|[m [33m5ba64382[m Added testcase for app group.
[34m|[m * [34m|[m [33m5c9da77e[m Incorporating review comment.
[34m|[m * [34m|[m [33m3d0ffb47[m Using ephemeral ports for eureka server mock. Thanks @elandau !
[34m|[m * [34m|[m [33mce1929b9[m Fixes issue #93 #97 #98 #99
[34m|[m[34m/[m [34m/[m  
* [34m|[m   [33mfe430880[m Merge pull request #95 from bpollack/typofix
[1;35m|[m[1;36m\[m [34m\[m  
[1;35m|[m * [34m|[m [33mda16a651[m Fix typo in Eureka client
[1;35m|[m[1;35m/[m [34m/[m  
* [34m|[m [33m49ccbb5f[m [Gradle Release Plugin] - new version commit:  '1.1.128-SNAPSHOT'.
* [34m|[m [33m52c80049[m[33m ([m[1;33mtag: 1.1.127[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.127'.
* [34m|[m   [33m4b5a52a1[m Merge pull request #88 from NiteshKant/master
[31m|[m[32m\[m [34m\[m  
[31m|[m * [34m|[m [33m811259a5[m Fix for issue #87
[31m|[m[31m/[m [34m/[m  
* [34m|[m   [33mc3260780[m Merge pull request #86 from CH3CHO/master
[33m|[m[34m\[m [34m\[m  
[33m|[m * [34m|[m [33me39469fd[m Add a check to make sure the metadata namespace is correct no matter the trailing '.' exists or not.
[33m|[m * [34m|[m [33m42836887[m Fix the bug that unable to read metadata from the property file.
* [34m|[m [34m|[m   [33m4ca5d766[m Merge pull request #85 from atlassian/unique-identifier-pr
[34m|[m[36m\[m [34m\[m [34m\[m  
[34m|[m [36m|[m[34m/[m [34m/[m  
[34m|[m[34m/[m[36m|[m [34m|[m   
[34m|[m * [34m|[m [33m3d2a2e55[m Added the UniqueIdentifier interface and modified InstanceInfo to call this getId method if this interface is implemented, rather than checking if name is Name.AMAZON. Updated AmazonInfo to use this.
[34m|[m[34m/[m [34m/[m  
* [34m|[m [33m1ece3263[m [Gradle Release Plugin] - new version commit:  '1.1.127-SNAPSHOT'.
* [34m|[m [33m46bf8183[m[33m ([m[1;33mtag: 1.1.126[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.126'.
* [34m|[m   [33m8be64b3e[m Merge pull request #83 from zarfide/master
[1;31m|[m[1;32m\[m [34m\[m  
[1;31m|[m * [34m|[m [33m8d689631[m fix javadoc on copy constructor
[1;31m|[m * [34m|[m [33m8b5c33ee[m add copy constructor to InstanceInfo
[1;31m|[m[1;31m/[m [34m/[m  
* [34m|[m [33mf816edd5[m [Gradle Release Plugin] - new version commit:  '1.1.126-SNAPSHOT'.
* [34m|[m [33mbdccdf26[m[33m ([m[1;33mtag: 1.1.125[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.125'.
* [34m|[m   [33m14dd1083[m Merge pull request #82 from scotte/fix-up-timestamp
[1;33m|[m[1;34m\[m [34m\[m  
[1;33m|[m * [34m|[m [33mf7ec3dbd[m Fix service UP timestamp from getting reset
[1;33m|[m [34m|[m[34m/[m  
* [34m|[m   [33mac5975c1[m Merge pull request #80 from NiteshKant/master
[34m|[m[1;36m\[m [34m\[m  
[34m|[m [1;36m|[m[34m/[m  
[34m|[m[34m/[m[1;36m|[m   
[34m|[m * [33m142ae10c[m Disabling replication batching by default.
[34m|[m *   [33m3cc7e8a4[m Merge branch 'master' of https://github.com/Netflix/eureka
[34m|[m [31m|[m[34m\[m  
[34m|[m [31m|[m[34m/[m  
[34m|[m[34m/[m[31m|[m   
* [31m|[m [33m8c5d7c8f[m [Gradle Release Plugin] - new version commit:  '1.1.125-SNAPSHOT'.
* [31m|[m [33m9a98b66e[m[33m ([m[1;33mtag: 1.1.124[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.124'.
* [31m|[m   [33m24c8b948[m Merge pull request #78 from NiteshKant/master
[33m|[m[34m\[m [31m\[m  
[33m|[m [34m|[m * [33mc3164d48[m Additional debug logs to indicate whether an instance started up as STARTING or UP status.
[33m|[m [34m|[m[34m/[m  
[33m|[m * [33m3b346852[m Fix for issue #76
[33m|[m[33m/[m  
*   [33ma6cd4f63[m Merge pull request #77 from knok16/master
[35m|[m[36m\[m  
[35m|[m * [33mb89274eb[m Fix dependencies in gradle build. com.sun.jersey:jersey-servlet:1.11 was missed during some refactoring.
[35m|[m[35m/[m  
* [33m4fd9f12f[m [Gradle Release Plugin] - new version commit:  '1.1.124-SNAPSHOT'.
* [33mdc56c41b[m[33m ([m[1;33mtag: 1.1.123[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.123'.
*   [33m181baf31[m Merge pull request #75 from NiteshKant/master
[1;31m|[m[1;32m\[m  
[1;31m|[m * [33m22bc1ada[m Using a more qualified name for HTTP client stats.
[1;31m|[m[1;31m/[m  
*   [33m62e9bd91[m Merge pull request #74 from NiteshKant/master
[1;33m|[m[1;34m\[m  
[1;33m|[m * [33m587739b9[m Bumping snapshot version
[1;33m|[m[1;33m/[m  
*   [33mb8bb1285[m Merge pull request #73 from NiteshKant/master
[1;35m|[m[1;36m\[m  
[1;35m|[m * [33m5d9fbd77[m Fix for issue #53 #70 #72
[1;35m|[m[1;35m/[m  
*   [33m3143c4fe[m Merge pull request #68 from karthik-vn/master
[31m|[m[32m\[m  
[31m|[m * [33m37d2a3d0[m Minor refactors and bug fixes.
[31m|[m * [33m48a79b71[m Optimize on EIP binding logic to avoid unnecessary AWS calls per the pull request comments.
[31m|[m * [33m7b2f9190[m Remove the old way of handing batched requests.
[31m|[m * [33ma2a2a8e8[m Separate resource to handle batch requests.
[31m|[m * [33mcf2ef384[m Minor changes based on pull request comments.
[31m|[m * [33m964334e4[m Replication optimization where the network traffic between eureka nodes are considerably reduced by executing the replication events as one batch instead of individual requests.
* [32m|[m [33m8ea38b76[m [Gradle Release Plugin] - new version commit:  '1.1.121-SNAPSHOT'.
* [32m|[m [33m01229462[m[33m ([m[1;33mtag: 1.1.120[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.120'.
* [32m|[m [33m861b487a[m Merge pull request #67 from karthik-vn/master
[33m|[m[32m\[m[32m|[m 
[33m|[m * [33m1becd631[m Add missing dependency.
* [34m|[m [33me2acbd1f[m [Gradle Release Plugin] - new version commit:  '1.1.120-SNAPSHOT'.
* [34m|[m [33m92c9d7eb[m[33m ([m[1;33mtag: 1.1.119[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.119'.
* [34m|[m [33m2c2f7589[m Merge pull request #66 from karthik-vn/master
[35m|[m[34m\[m[34m|[m 
[35m|[m * [33m418c9dd1[m Change jersey bundle dependency to "provided" so that the upstream dependencies can specify their own.
* [36m|[m [33m95b5aea0[m [Gradle Release Plugin] - new version commit:  '1.1.119-SNAPSHOT'.
* [36m|[m [33m3f5c8a98[m[33m ([m[1;33mtag: 1.1.118[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.118'.
* [36m|[m [33m87b9b9d7[m Merge pull request #65 from karthik-vn/master
[1;31m|[m[36m\[m[36m|[m 
[1;31m|[m * [33m5c985da0[m Fix a minor bug with respect to logging information.
[1;31m|[m * [33m88d14d81[m Minor changes to comments.
[1;31m|[m * [33m8910fd1c[m https://github.com/Netflix/eureka/issues/62: Simplify EIP selection logic by relying completely on AWS to determine if an EIP is already being used by another instance.
* [1;32m|[m [33ma9565953[m [Gradle Release Plugin] - new version commit:  '1.1.118-SNAPSHOT'.
* [1;32m|[m [33md94e14ea[m[33m ([m[1;33mtag: 1.1.117[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.117'.
* [1;32m|[m [33mc8801abc[m Merge pull request #64 from karthik-vn/master
[1;33m|[m[1;32m\[m[1;32m|[m 
[1;33m|[m * [33mf6fc9edf[m Break after we have associated the EIP without going through the entire list.
* [1;34m|[m [33m858476c0[m [Gradle Release Plugin] - new version commit:  '1.1.117-SNAPSHOT'.
* [1;34m|[m [33m6f188510[m[33m ([m[1;33mtag: 1.1.116[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.116'.
* [1;34m|[m [33mc2d8261c[m Merge pull request #63 from karthik-vn/master
[1;35m|[m[1;34m\[m[1;34m|[m 
[1;35m|[m * [33m0ee32dc3[m https://github.com/Netflix/eureka/issues/62
* [1;36m|[m [33m53435297[m [Gradle Release Plugin] - new version commit:  '1.1.116-SNAPSHOT'.
* [1;36m|[m [33m7adb70e8[m[33m ([m[1;33mtag: 1.1.115[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.115'.
* [1;36m|[m [33m37752bf3[m Merge pull request #61 from karthik-vn/master
[31m|[m[1;36m\[m[1;36m|[m 
[31m|[m * [33ma5591fdc[m Fix for https://github.com/Netflix/eureka/issues/60:
[31m|[m * [33m3767d56e[m https://github.com/Netflix/eureka/issues/59: Fix for the following issues
[31m|[m * [33m48a52427[m Merge branch 'master' of github.com:/karthik-vn/eureka
[31m|[m[31m/[m[34m|[m 
[31m|[m * [33mbf9f1a3c[m Bump up version number again.
[31m|[m * [33m18a8e904[m Update version number.
[31m|[m * [33mb0bce608[m Upgrade aws java sdk version from 1.3.11 to 1.3.4.1 to support IAM credentials.
* [34m|[m [33m083394fd[m [Gradle Release Plugin] - new version commit:  '1.1.115-SNAPSHOT'.
* [34m|[m [33m9e3d769c[m[33m ([m[1;33mtag: 1.1.114[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.114'.
* [34m|[m   [33m0e55e7a3[m Merge pull request #58 from NiteshKant/master
[35m|[m[36m\[m [34m\[m  
[35m|[m * [34m|[m [33me72bfc70[m Fix for issue #57
[35m|[m[35m/[m [34m/[m  
* [34m|[m [33mb16ebbd0[m [Gradle Release Plugin] - new version commit:  '1.1.114-SNAPSHOT'.
* [34m|[m [33mad2ee31e[m[33m ([m[1;33mtag: 1.1.113[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.113'.
* [34m|[m   [33m4705e58d[m Merge pull request #56 from NiteshKant/master
[1;31m|[m[1;32m\[m [34m\[m  
[1;31m|[m * [34m|[m [33m6db9ea3a[m Fix for issue #55
[1;31m|[m[1;31m/[m [34m/[m  
* [34m|[m [33m2f0cb0e4[m [Gradle Release Plugin] - new version commit:  '1.1.113-SNAPSHOT'.
* [34m|[m [33me1586914[m[33m ([m[1;33mtag: 1.1.112[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.112'.
* [34m|[m   [33m14d1b8af[m Merge pull request #52 from NiteshKant/master
[1;33m|[m[1;34m\[m [34m\[m  
[1;33m|[m * [34m|[m [33m4fbd676b[m Handling empty AZ in AZtoRegionMapper
* [1;34m|[m [34m|[m [33m69931491[m [Gradle Release Plugin] - new version commit:  '1.1.112-SNAPSHOT'.
* [1;34m|[m [34m|[m [33m2c57ccf2[m[33m ([m[1;33mtag: 1.1.111[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.111'.
* [1;34m|[m [34m|[m [33ma2a9cb23[m Merge pull request #51 from NiteshKant/master
[1;35m|[m[1;34m\[m[1;34m|[m [34m|[m 
[1;35m|[m * [34m|[m [33mecda6c07[m Fixes issue #50
[1;35m|[m[1;35m/[m [34m/[m  
* [34m|[m   [33mb5100ed4[m Merge pull request #49 from mampcs/master
[31m|[m[32m\[m [34m\[m  
[31m|[m * [34m|[m [33m586a1196[m Allow EIP binding if the current IP of the instance is null.
[31m|[m[31m/[m [34m/[m  
* [34m|[m [33ma3aa590e[m [Gradle Release Plugin] - new version commit:  '1.1.111-SNAPSHOT'.
* [34m|[m [33m98de51cc[m[33m ([m[1;33mtag: 1.1.110[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.110'.
* [34m|[m   [33me5bd1691[m Merge pull request #48 from NiteshKant/master
[33m|[m[34m\[m [34m\[m  
[33m|[m * [34m|[m [33m94248177[m Fixes issue #47
[33m|[m[33m/[m [34m/[m  
* [34m|[m   [33md9255817[m Merge pull request #46 from NiteshKant/master
[35m|[m[36m\[m [34m\[m  
[35m|[m * [34m|[m [33mf34197bb[m Fixes issue #45
* [36m|[m [34m|[m [33mdbfe87ac[m [Gradle Release Plugin] - new version commit:  '1.1.110-SNAPSHOT'.
* [36m|[m [34m|[m [33m374ccbcf[m[33m ([m[1;33mtag: 1.1.109[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.109'.
* [36m|[m [34m|[m [33m641233e4[m Merge pull request #41 from NiteshKant/master
[1;31m|[m[36m\[m[36m|[m [34m|[m 
[1;31m|[m * [34m|[m [33m51cf9fe9[m Some debug logs to give a view of the registry contents (app hashcodes for every region) after each registry refresh from the server.
[1;31m|[m * [34m|[m [33m6eccda9a[m Fix for issue #40
[1;31m|[m[1;31m/[m [34m/[m  
* [34m|[m [33me47d3b23[m [Gradle Release Plugin] - new version commit:  '1.1.109-SNAPSHOT'.
* [34m|[m [33mfa98f87c[m[33m ([m[1;33mtag: 1.1.108[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.108'.
* [34m|[m   [33m9ddd5cd0[m Merge pull request #31 from scotte/service-up
[1;33m|[m[1;34m\[m [34m\[m  
[1;33m|[m * [34m|[m [33m74b22a54[m Add service UP time tracking
* [1;34m|[m [34m|[m [33m3098c99a[m [Gradle Release Plugin] - new version commit:  '1.1.108-SNAPSHOT'.
* [1;34m|[m [34m|[m [33m69f3d182[m[33m ([m[1;33mtag: 1.1.107[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.107'.
* [1;34m|[m [34m|[m [33m73944f23[m [Gradle Release Plugin] - new version commit:  '1.1.107-SNAPSHOT'.
* [1;34m|[m [34m|[m [33ma8a05573[m[33m ([m[1;33mtag: 1.1.106[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.106'.
* [1;34m|[m [34m|[m   [33mc7cf96d9[m Merge pull request #39 from NiteshKant/master
[1;35m|[m[1;36m\[m [1;34m\[m [34m\[m  
[1;35m|[m * [1;34m|[m [34m|[m [33mdc834ded[m Fix for issue #37 & #38
[1;35m|[m[1;35m/[m [1;34m/[m [34m/[m  
* [1;34m|[m [34m|[m [33me2fd25f2[m [Gradle Release Plugin] - new version commit:  '1.1.106-SNAPSHOT'.
* [1;34m|[m [34m|[m [33m9d1d0164[m[33m ([m[1;33mtag: 1.1.105[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.105'.
* [1;34m|[m [34m|[m   [33mb4286dcc[m Merge branch 'master' of https://github.com/Netflix/gradle-template
[31m|[m[32m\[m [1;34m\[m [34m\[m  
[31m|[m * [1;34m|[m [34m|[m [33m168e7094[m Removing reference to docs that don't exist.
[31m|[m * [1;34m|[m [34m|[m [33m9e050ad1[m Fixing aggregateJavadoc
[31m|[m * [1;34m|[m [34m|[m   [33m95afa254[m Merge branch 'multi-project'
[31m|[m [33m|[m[34m\[m [1;34m\[m [34m\[m  
[31m|[m * [34m\[m [1;34m\[m [34m\[m   [33md7994a52[m Merge branch 'multi-project'
[31m|[m [35m|[m[36m\[m [34m\[m [1;34m\[m [34m\[m  
[31m|[m * [36m\[m [34m\[m [1;34m\[m [34m\[m   [33ma4db0ed3[m Merge branch 'multi-project'
[31m|[m [1;31m|[m[1;32m\[m [36m\[m [34m\[m [1;34m\[m [34m\[m  
[31m|[m * [1;32m\[m [36m\[m [34m\[m [1;34m\[m [34m\[m   [33mb3230b2e[m Merge branch 'multi-project'
[31m|[m [1;33m|[m[1;34m\[m [1;32m\[m [36m\[m [34m\[m [1;34m\[m [34m\[m  
[31m|[m * [1;34m\[m [1;32m\[m [36m\[m [34m\[m [1;34m\[m [34m\[m   [33m017751ba[m Merge branch 'multi-project'
[31m|[m [1;35m|[m[1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [34m\[m [1;34m\[m [34m\[m  
[31m|[m * [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [34m\[m [1;34m\[m [34m\[m   [33mfdaf789a[m Merge branch 'multi-project'
[31m|[m [31m|[m[32m\[m [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [34m\[m [1;34m\[m [34m\[m  
[31m|[m * [32m\[m [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [34m\[m [1;34m\[m [34m\[m   [33mfcf330ef[m Merge branch 'multi-project'
[31m|[m [33m|[m[34m\[m [32m\[m [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [34m\[m [1;34m\[m [34m\[m  
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33ma76038d8[m Using latest features of release plugin
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33mc37683d6[m Add sonatype snapshot repository
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33ma28e6064[m Use newer version of license-gradle-plugin that fixes skipExistingHeaders field
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m57086930[m Move gradle-release dependency to bintray
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33md0591508[m Switching to bintray for dependencies (same as Maven Central)
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m020ca77c[m Upgrading to Gradle 1.4
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m   [33m94bfad67[m Merge pull request #5 from gorzell/patch-1
[31m|[m [35m|[m[36m\[m [34m\[m [32m\[m [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [34m\[m [1;34m\[m [34m\[m  
[31m|[m [35m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33ma0fe2921[m Update codequality/checkstyle.xml
[31m|[m [35m|[m[35m/[m [34m/[m [32m/[m [1;36m/[m [1;34m/[m [1;32m/[m [36m/[m [34m/[m [1;34m/[m [34m/[m  
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33mab4d391d[m Fixing transitive-ness of provided
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m46462f51[m Conforming to Markdown
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33mff05152f[m Moving documentation from Confluence into GitHub
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m8bb8eb33[m Adding provided scope
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m4d0b65b7[m Using a better github location
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m9e368c4d[m Fixing issue when publishing source/javadoc to maven central
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33mabf99d1f[m Putting javadoc and sources into proper confs and setting types
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m53ba7023[m Add local publishing
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m55ab6f7f[m Filling in more pom fields for Sonatype
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m52a80851[m Stop relying on maven convention on project
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m7cebae8f[m Ensure full flow of release plugin
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33md1e903cc[m Setting default name for master
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m9350c33f[m Using custom build of release plugin, to support building from a branch
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m4f4d1c73[m Pointing to a repo in our control
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m5c63f84d[m Release plugin
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33mc3d3ad7b[m Adding cobertura
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m88fcfe98[m Upgrade to Gradle 1.1.
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m3e88665e[m Enable license header plugin
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m   [33md36839bc[m Merge pull request #2 from Randgalt/master
[31m|[m [1;31m|[m[1;32m\[m [34m\[m [32m\[m [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [34m\[m [1;34m\[m [34m\[m  
[31m|[m [1;31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33mcf9ab842[m Sonatype URL was wrong
[31m|[m [1;31m|[m[1;31m/[m [34m/[m [32m/[m [1;36m/[m [1;34m/[m [1;32m/[m [36m/[m [34m/[m [1;34m/[m [34m/[m  
[31m|[m * [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m9a283101[m Get back into mergeing from multi-project
* [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m   [33mcbfa4b18[m Merge pull request #36 from NiteshKant/master
[1;33m|[m[1;34m\[m [1;32m\[m [34m\[m [32m\[m [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [34m\[m [1;34m\[m [34m\[m  
[1;33m|[m * [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m8b339453[m Did the following changes:
* [1;34m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33me0268d5e[m [Gradle Release Plugin] - new version commit:  '1.1.105-SNAPSHOT'.
* [1;34m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33mad99322f[m[33m ([m[1;33mtag: 1.1.104[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.104'.
* [1;34m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m320a1dd5[m Merge pull request #35 from NiteshKant/master
[1;35m|[m[1;34m\[m[1;34m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m 
[1;35m|[m * [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33mae6381ba[m Fixing flakiness of the tests because of improper property cleanup.
[1;35m|[m * [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m   [33mafb9a245[m Merge branch 'master' of https://github.com/Netflix/eureka
[1;35m|[m [31m|[m[1;35m\[m [1;32m\[m [34m\[m [32m\[m [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [34m\[m [1;34m\[m [34m\[m  
[1;35m|[m [31m|[m[1;35m/[m [1;32m/[m [34m/[m [32m/[m [1;36m/[m [1;34m/[m [1;32m/[m [36m/[m [34m/[m [1;34m/[m [34m/[m  
[1;35m|[m[1;35m/[m[31m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m   
* [31m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m   [33m494afb6f[m Merge pull request #34 from NiteshKant/test_jenkins_failure
[33m|[m[34m\[m [31m\[m [1;32m\[m [34m\[m [32m\[m [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [34m\[m [1;34m\[m [34m\[m  
[33m|[m * [31m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m3a3edf67[m Added cloudbees link
[33m|[m * [31m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m56cdb659[m Added some more debug statements
[33m|[m * [31m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m4974483f[m Trying stuff to fix jenkins failures
[33m|[m * [31m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33mc0b38fc4[m Trying stuff to fix jenkins failures
[33m|[m [34m|[m * [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m86ba8240[m Merge branch 'master' of https://github.com/NiteshKant/eureka
[33m|[m [34m|[m[33m/[m[34m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m 
[33m|[m[33m/[m[34m|[m[34m/[m [1;32m/[m [34m/[m [32m/[m [1;36m/[m [1;34m/[m [1;32m/[m [36m/[m [34m/[m [1;34m/[m [34m/[m  
[33m|[m * [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33m7133f68d[m Trying stuff to fix jenkins failures
* [36m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m [33mf423bd4f[m Merge pull request #33 from NiteshKant/master
[1;34m|[m[36m\[m[36m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [1;34m|[m [34m|[m 
[1;34m|[m [36m|[m[1;34m_[m[1;32m|[m[1;34m_[m[34m|[m[1;34m_[m[32m|[m[1;34m_[m[1;36m|[m[1;34m_[m[1;34m|[m[1;34m_[m[1;32m|[m[1;34m_[m[36m|[m[1;34m_[m[34m|[m[1;34m/[m [34m/[m  
[1;34m|[m[1;34m/[m[36m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m   
[1;34m|[m * [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33m086a7b17[m Fixes issue #32
[1;34m|[m * [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33m91a67dc6[m Fixes issue #32
[1;34m|[m[1;34m/[m [1;32m/[m [34m/[m [32m/[m [1;36m/[m [1;34m/[m [1;32m/[m [36m/[m [34m/[m [34m/[m  
* [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m   [33m4897114c[m Merge pull request #30 from NiteshKant/master
[1;33m|[m[1;34m\[m [1;32m\[m [34m\[m [32m\[m [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [34m\[m [34m\[m  
[1;33m|[m * [1;32m\[m [34m\[m [32m\[m [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [34m\[m [34m\[m   [33m77b68856[m Merge branch 'master' of https://github.com/Netflix/eureka
[1;33m|[m [1;35m|[m[1;33m\[m [1;32m\[m [34m\[m [32m\[m [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [34m\[m [34m\[m  
[1;33m|[m [1;35m|[m[1;33m/[m [1;32m/[m [34m/[m [32m/[m [1;36m/[m [1;34m/[m [1;32m/[m [36m/[m [34m/[m [34m/[m  
[1;33m|[m[1;33m/[m[1;35m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m   
* [1;35m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33m75d70180[m [Gradle Release Plugin] - new version commit:  '1.1.104-SNAPSHOT'.
* [1;35m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33m7394d0bf[m[33m ([m[1;33mtag: 1.1.103[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.103'.
[1;36m|[m * [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33me0c7d106[m Removing unused method.
[1;36m|[m * [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33m0cd608d1[m Fixed issues with squashing of commits
[1;36m|[m * [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33mb7e8ab7c[m Fixing shutdown of eureka client and reducing flakiness of a test.
[1;36m|[m * [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m   [33m70c37e13[m Merge remote-tracking branch 'origin/master'
[1;36m|[m [31m|[m[32m\[m [1;32m\[m [34m\[m [32m\[m [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [34m\[m [34m\[m  
[1;36m|[m [31m|[m * [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33m08e04128[m Bug fix in ApplicationsResource.
[1;36m|[m [31m|[m * [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33m827138b1[m Fix for issue #29
[1;36m|[m * [32m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33ma84be6ab[m Incorporated review comments:
[1;36m|[m * [32m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33mf7729607[m Fix for issue #29
[1;36m|[m [32m|[m[32m/[m [1;32m/[m [34m/[m [32m/[m [1;36m/[m [1;34m/[m [1;32m/[m [36m/[m [34m/[m [34m/[m  
[1;36m|[m * [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m   [33mf96ac9ae[m Merge branch 'master' of https://github.com/Netflix/eureka
[1;36m|[m [33m|[m[1;36m\[m [1;32m\[m [34m\[m [32m\[m [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [34m\[m [34m\[m  
[1;36m|[m [33m|[m[1;36m/[m [1;32m/[m [34m/[m [32m/[m [1;36m/[m [1;34m/[m [1;32m/[m [36m/[m [34m/[m [34m/[m  
[1;36m|[m[1;36m/[m[33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m   
* [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33m42d73d3e[m [Gradle Release Plugin] - new version commit:  '1.1.103-SNAPSHOT'.
* [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33m6be437a3[m[33m ([m[1;33mtag: 1.1.102[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.102'.
* [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33mf69c544e[m [Gradle Release Plugin] - new version commit:  '1.1.102-SNAPSHOT'.
* [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33m3e0808a9[m[33m ([m[1;33mtag: 1.1.101[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.101'.
* [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m   [33ma53a4c84[m Merge branch 'master' of https://github.com/Netflix/eureka
[35m|[m[36m\[m [33m\[m [1;32m\[m [34m\[m [32m\[m [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [34m\[m [34m\[m  
[35m|[m * [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33mdc538f47[m [Gradle Release Plugin] - new version commit:  '1.1.101-SNAPSHOT'.
[35m|[m * [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33mfc612dd0[m[33m ([m[1;33mtag: 1.1.100[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.100'.
* [36m|[m [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33mb3e950af[m API changes to support latest version of servo. Revert back accidentally removed code.
[36m|[m[36m/[m [33m/[m [1;32m/[m [34m/[m [32m/[m [1;36m/[m [1;34m/[m [1;32m/[m [36m/[m [34m/[m [34m/[m  
* [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33m46f074a4[m [Gradle Release Plugin] - new version commit:  '1.1.100-SNAPSHOT'.
* [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33m7f818176[m[33m ([m[1;33mtag: 1.1.99[m[33m)[m [Gradle Release Plugin] - pre tag commit:  '1.1.99'.
* [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33m87025dc4[m Update to the latest version of servo.
* [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33m9df8fbc9[m SSL support for Remote Region Registry.
* [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m   [33mbb9ed355[m Merge pull request #21 from quidryan/merge-gradle-template-May
[1;31m|[m[1;32m\[m [33m\[m [1;32m\[m [34m\[m [32m\[m [1;36m\[m [1;34m\[m [1;32m\[m [36m\[m [34m\[m [34m\[m  
[1;31m|[m * [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33m202b1f90[m Always use version of the NEXT version
[1;31m|[m * [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33ma0ef6a25[m Always use -SNAPSHOT in the version string
[1;31m|[m * [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m [33m8660f930[m Merge remote-tracking branch 'build/multi-project' into merge-gradle-template-May
[1;31m|[m[1;31m/[m[34m|[m [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [34m|[m 
[1;31m|[m [34m|[m [33m|[m[34m_[m[1;32m|[m[34m_[m[34m|[m[34m_[m[32m|[m[34m_[m[1;36m|[m[34m_[m[1;34m|[m[34m_[m[1;32m|[m[34m_[m[36m|[m[34m/[m [34m/[m  
[1;31m|[m [34m|[m[34m/[m[33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m   
[1;31m|[m * [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [36m|[m [34m|[m [33mb0585dae[m Passing status to Artifactory builds
[1;31m|[m [36m|[m [33m|[m[36m_[m[1;32m|[m[36m_[m[34m|[m[36m_[m[32m|[m[36m_[m[1;36m|[m[36m_[m[1;34m|[m[36m_[m[1;32m|[m[36m/[m [34m/[m  
[1;31m|[m [36m|[m[36m/[m[33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [34m|[m   
[1;31m|[m * [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [1;32m|[m [34m|[m [33m28c69890[m Verify before we can't take it back, use preferredVersion variable
[1;31m|[m [1;32m|[m [33m|[m[1;32m_[m[1;32m|[m[1;32m_[m[34m|[m[1;32m_[m[32m|[m[1;32m_[m[1;36m|[m[1;32m_[m[1;34m|[m[1;32m/[m [34m/[m  
[1;31m|[m [1;32m|[m[1;32m/[m[33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [34m|[m   
[1;31m|[m * [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [1;34m|[m [34m|[m [33md0e42e3d[m Handle unavailable sonatype properties
[1;31m|[m [1;34m|[m [33m|[m[1;34m_[m[1;32m|[m[1;34m_[m[34m|[m[1;34m_[m[32m|[m[1;34m_[m[1;36m|[m[1;34m/[m [34m/[m  
[1;31m|[m [1;34m|[m[1;34m/[m[33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [34m|[m   
[1;31m|[m * [33m|[m [1;32m|[m [34m|[m [32m|[m [1;36m|[m [34m|[m [33m9de56143[m Make uploadMavenCentral task, that encompasses other tasks
[1;31m|[m [1;36m|[m [33m|[m[1;36m_[m[1;32m|[m[1;36m_[m[34m|[m[1;36m_[m[32m|[m[1;36m/[m [34m/[m  
[1;31m|[m [1;36m|[m[1;36m/[m[33m|[m [1;32m|[m [34m|[m [32m|[m [34m|[m   
[1;31m|[m * [33m|[m [1;32m|[m [34m|[m [32m|[m [34m|[m [33m832eb537[m Automatically aggregate and publish docs (java,groovy,scala)
[1;31m|[m [32m|[m [33m|[m[32m_[m[1;32m|[m[32m_[m[34m|[m[32m/[m [34m/[m  
[1;31m|[m [32m|[m[32m/[m[33m|[m [1;32m|[m [34m|[m [34m|[m   
[1;31m|[m * [33m|[m [1;32m|[m [34m|[m [34m|[m [33m498c25fe[m Matching wrapper to 1.5
[1;31m|[m [34m|[m [33m|[m[34m_[m[1;32m|[m[34m/[m [34m/[m  
[1;31m|[m [34m|[m[34m/[m[33m|[m [1;32m|[m [34m|[m   
[1;31m|[m * [33m|[m [1;32m|[m [34m|[m [33m8caf8ec9[m Upgrading release process
[1;31m|[m * [33m|[m [1;32m|[m [34m|[m [33m63e44e8e[m Using latest features of release plugin
[1;31m|[m * [33m|[m [1;32m|[m [34m|[m [33m883dd0da[m Add sonatype snapshot repository
[1;31m|[m * [33m|[m [1;32m|[m [34m|[m [33mc3477877[m Use newer version of license-gradle-plugin that fixes skipExistingHeaders field
[1;31m|[m * [33m|[m [1;32m|[m [34m|[m [33md87b66e0[m Move gradle-release dependency to bintray
[1;31m|[m * [33m|[m [1;32m|[m [34m|[m [33m84339e0a[m Switching to bintray for dependencies (same as Maven Central)
[1;31m|[m * [33m|[m [1;32m|[m [34m|[m [33m6f9e3a02[m Upgrading to Gradle 1.4
[1;31m|[m * [33m|[m [1;32m|[m [34m|[m [33mf5a10c63[m Update codequality/checkstyle.xml
[1;31m|[m * [33m|[m [1;32m|[m [34m|[m [33mb7847eb9[m Fixing transitive-ness of provided
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33mbd21a6fd[m Gradle Release Plugin - new version commit:  'eureka-1.1.98'.
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33m2ed954bc[m[33m ([m[1;33mtag: eureka-1.1.97[m[33m)[m Commit new version.
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m   [33mf961785a[m Merge branch 'master' of github.com:Netflix/eureka
[1;35m|[m[1;36m\[m [1;34m\[m [33m\[m [1;32m\[m [34m\[m  
[1;35m|[m * [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33md3a87c9d[m Gradle Release Plugin - new version commit:  'eureka-1.1.96'.
* [1;36m|[m [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33mc1c585c3[m Minor defensive checks.
[1;36m|[m[1;36m/[m [1;34m/[m [33m/[m [1;32m/[m [34m/[m  
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33m6edd1ab8[m[33m ([m[1;33mtag: eureka-1.1.95[m[33m)[m Allow update of renewal threshold if the self preservation mode is disabled.
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33m44f7a6d3[m Gradle Release Plugin - new version commit:  'eureka-1.1.94'.
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33m8bc84035[m[33m ([m[1;33mtag: eureka-1.1.93[m[33m)[m Bump up revision number.
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m   [33m2aa8050b[m Merge branch 'master' of github.com:Netflix/eureka
[31m|[m[32m\[m [1;34m\[m [33m\[m [1;32m\[m [34m\[m  
[31m|[m * [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33m3c20222f[m Gradle Release Plugin - new version commit:  'eureka-1.1.92'.
* [32m|[m [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33m009c15b0[m A bug in not incrementing expected renewal threshold during registrations fixed.
[32m|[m[32m/[m [1;34m/[m [33m/[m [1;32m/[m [34m/[m  
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33mc2650273[m[33m ([m[1;33mtag: eureka-1.1.91[m[33m)[m Upgrade revision number.
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33m4cd9c6e4[m Decrement the renewal threshold during cancels rather than recalculating the counter every time.
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33mac0d10c9[m Gradle Release Plugin - new version commit:  'eureka-1.1.89'.
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33mf3701574[m[33m ([m[1;33mtag: eureka-1.1.88[m[33m)[m Update version.
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33mcf483f9c[m Instead of decrementing renewal threshold, update the threshold by recalculating.
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33m56a1c835[m Gradle Release Plugin - new version commit:  'eureka-1.1.86'.
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33m7832917c[m[33m ([m[1;33mtag: eureka-1.1.85[m[33m)[m Upgrade gradle version.
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33m3478052d[m https://github.com/Netflix/eureka/issues/19:When a client instance is gracefully shutdown and a corresponding cancel is called - reduce the renewal threshold as the client requested it.
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33mec75315a[m Gradle Release Plugin - new version commit:  'eureka-1.1.84'.
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33m5a48e89b[m[33m ([m[1;33mtag: eureka-1.1.83[m[33m)[m Still having problems with version - updated to a new one.
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33m730670e6[m Upgrade version again.
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33mfe78a7ce[m Upgrade version.
* [1;34m|[m [33m|[m [1;32m|[m [34m|[m   [33m992d416f[m Merge branch 'master' of github.com:Netflix/eureka
[33m|[m[34m\[m [1;34m\[m [33m\[m [1;32m\[m [34m\[m  
* [34m|[m [1;34m|[m [33m|[m [1;32m|[m [34m|[m [33m4d57a3a2[m In a scenario where there are more instances than EIPs, there is a chance that the instance may try to grab an already existing EIP as it relies on renewal time to determine if the instance is dead and the renewals are never updated. Now we rely on heartbeats to determine if the instance is alive or dead.
[34m|[m [34m|[m [1;34m|[m * [1;32m|[m [34m|[m [33m4727485f[m Gradle Release Plugin - new version commit:  'eureka-1.1.83'.
[34m|[m [34m|[m [1;34m|[m * [1;32m|[m [34m|[m [33m33a2f044[m Bug fix for VIP & SVIP
[34m|[m [34m|[m [1;34m|[m * [1;32m|[m [34m|[m [33m2653fdf9[m Gradle Release Plugin - new version commit:  'eureka-1.1.82'.
[34m|[m [34m|[m [1;34m|[m * [1;32m|[m [34m|[m [33md33878d4[m Gradle Release Plugin - new version commit:  'eureka-1.1.80'.
[34m|[m [34m|[m [1;34m|[m * [1;32m|[m [34m|[m   [33m7aa2d4a1[m Merge branch 'master' of https://github.com/Netflix/eureka
[34m|[m [34m|[m [1;34m|[m [35m|[m[34m\[m [1;32m\[m [34m\[m  
[34m|[m [34m|[m [1;34m|[m[34m_[m[35m|[m[34m/[m [1;32m/[m [34m/[m  
[34m|[m [34m|[m[34m/[m[1;34m|[m [35m|[m [1;32m|[m [34m|[m   
[34m|[m * [1;34m|[m [35m|[m [1;32m|[m [34m|[m [33m5580a985[m Gradle Release Plugin - new version commit:  'eureka-1.1.79'.
[34m|[m[34m/[m [1;34m/[m [35m/[m [1;32m/[m [34m/[m  
* [1;34m|[m [35m|[m [1;32m|[m [34m|[m [33ma2c726a1[m[33m ([m[1;33mtag: eureka-1.1.78[m[33m)[m Bump up revision number.
* [1;34m|[m [35m|[m [1;32m|[m [34m|[m [33m686398ad[m Gradle Release Plugin - pre tag commit:  'eureka-1.1.77'.
* [1;34m|[m [35m|[m [1;32m|[m [34m|[m [33m38dee84c[m Eureka Client should assume empty string for interpolated expression for which the value cannot be found.
[36m|[m [1;34m|[m * [1;32m|[m [34m|[m [33m5df405a0[m Gradle Release Plugin - new version commit:  'eureka-1.1.76-SNAPSHOT'.
[36m|[m [1;34m|[m * [1;32m|[m [34m|[m [33mcf2f6e4d[m Gradle Release Plugin - pre tag commit:  'eureka-1.1.75'.
[36m|[m [1;34m|[m * [1;32m|[m [34m|[m [33m59c6c059[m Addressing some more comments
[36m|[m [1;34m|[m * [1;32m|[m [34m|[m [33me2ab6f5a[m Gradle Release Plugin - new version commit:  'eureka-1.1.75-SNAPSHOT'.
[36m|[m [1;34m|[m * [1;32m|[m [34m|[m [33mb98580c2[m Gradle Release Plugin - pre tag commit:  'eureka-1.1.74'.
[36m|[m [1;34m|[m * [1;32m|[m [34m|[m [33mae89ba92[m New REST endpoints for (S)VIP
[36m|[m [1;34m|[m [36m|[m [1;32m|[m [34m|[m * [33m8812d4ae[m[33m ([m[1;33mtag: eureka-1.1.77[m[33m)[m Gradle Release Plugin - pre tag commit:  'eureka-1.1.77'.
[36m|[m [1;34m|[m[36m_[m[36m|[m[36m_[m[1;32m|[m[36m_[m[34m|[m[36m/[m  
[36m|[m[36m/[m[1;34m|[m [36m|[m [1;32m|[m [34m|[m   
* [1;34m|[m [36m|[m [1;32m|[m [34m|[m [33mcb58fd22[m Bump up revision number.
* [1;34m|[m [36m|[m [1;32m|[m [34m|[m [33mca69ee6b[m Correct wrong version upgrade.
* [1;34m|[m [36m|[m [1;32m|[m [34m|[m [33m08ca5983[m Upgrade AWS jdk version from 1.3.11 to 1.3.4.1 to support IAM credential support for eureka.
* [1;34m|[m [36m|[m [1;32m|[m [34m|[m [33mc165b9cf[m Gradle Release Plugin - pre tag commit:  'eureka-1.1.76'.
* [1;34m|[m [36m|[m [1;32m|[m [34m|[m   [33m5ee6cce4[m Merge pull request #5 from ericdowd/iam-role
[34m|[m[1;33m\[m [1;34m\[m [36m\[m [1;32m\[m [34m\[m  
[34m|[m [1;33m|[m[34m_[m[1;34m|[m[34m_[m[36m|[m[34m_[m[1;32m|[m[34m/[m  
[34m|[m[34m/[m[1;33m|[m [1;34m|[m [36m|[m [1;32m|[m   
[34m|[m * [1;34m|[m [36m|[m [1;32m|[m   [33ma903b40e[m Merge branch 'master' into iam-role
[34m|[m [1;34m|[m[34m\[m [1;34m\[m [36m\[m [1;32m\[m  
[34m|[m [1;34m|[m[34m/[m [1;34m/[m [36m/[m [1;32m/[m  
[34m|[m[34m/[m[1;34m|[m [1;34m|[m [36m|[m [1;32m|[m   
[34m|[m * [1;34m|[m [36m|[m [1;32m|[m   [33m1c7967df[m Merge branch 'master' into iam-role
[34m|[m [1;36m|[m[36m\[m [1;34m\[m [36m\[m [1;32m\[m  
[34m|[m [1;36m|[m [36m|[m [1;34m|[m[36m/[m [1;32m/[m  
[34m|[m [1;36m|[m [36m|[m[36m/[m[1;34m|[m [1;32m|[m   
[34m|[m * [36m|[m [1;34m|[m [1;32m|[m   [33m2cc8df5d[m Merge branch 'master' into iam-role
[34m|[m [32m|[m[33m\[m [36m\[m [1;34m\[m [1;32m\[m  
[34m|[m * [33m\[m [36m\[m [1;34m\[m [1;32m\[m   [33m4122a392[m Merge branch 'master' into iam-role
[34m|[m [34m|[m[35m\[m [33m\[m [36m\[m [1;34m\[m [1;32m\[m  
[34m|[m * [35m\[m [33m\[m [36m\[m [1;34m\[m [1;32m\[m   [33m3de55de4[m Merge branch 'master' into iam-role
[34m|[m [36m|[m[1;31m\[m [35m\[m [33m\[m [36m\[m [1;34m\[m [1;32m\[m  
[34m|[m * [1;31m\[m [35m\[m [33m\[m [36m\[m [1;34m\[m [1;32m\[m   [33m2f24398e[m Merge with master
[34m|[m [1;32m|[m[1;33m\[m [1;31m\[m [35m\[m [33m\[m [36m\[m [1;34m\[m [1;32m\[m  
[34m|[m * [1;33m\[m [1;31m\[m [35m\[m [33m\[m [36m\[m [1;34m\[m [1;32m\[m   [33m0dadaeab[m Merging master
[34m|[m [1;34m|[m[1;35m\[m [1;33m\[m [1;31m\[m [35m\[m [33m\[m [36m\[m [1;34m\[m [1;32m\[m  
[34m|[m * [1;35m|[m [1;33m|[m [1;31m|[m [35m|[m [33m|[m [36m|[m [1;34m|[m [1;32m|[m [33m1faaddf9[m Use InstanceProfileCredentialsProvider for getting IAM role credentials
[34m|[m * [1;35m|[m [1;33m|[m [1;31m|[m [35m|[m [33m|[m [36m|[m [1;34m|[m [1;32m|[m [33mf2ac4a4e[m Handle NPE for unset credentials
[34m|[m * [1;35m|[m [1;33m|[m [1;31m|[m [35m|[m [33m|[m [36m|[m [1;34m|[m [1;32m|[m [33mdc904317[m Attempting to use IAM role as a fallback for AWS credentials
[34m|[m [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [35m|[m [33m|[m [36m|[m [1;34m|[m [1;32m|[m * [33m50fd5d08[m[33m ([m[1;33mtag: eureka-1.1.76[m[33m)[m Gradle Release Plugin - pre tag commit:  'eureka-1.1.76'.
[34m|[m [1;35m|[m[34m_[m[1;35m|[m[34m_[m[1;33m|[m[34m_[m[1;31m|[m[34m_[m[35m|[m[34m_[m[33m|[m[34m_[m[36m|[m[34m_[m[1;34m|[m[34m_[m[1;32m|[m[34m/[m  
[34m|[m[34m/[m[1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [35m|[m [33m|[m [36m|[m [1;34m|[m [1;32m|[m   
* [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [35m|[m [33m|[m [36m|[m [1;34m|[m [1;32m|[m [33m2a4fb9e4[m Bump up revision number - one more time.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [35m|[m [33m|[m [36m|[m [1;34m|[m [1;32m|[m [33m2df5527f[m Bump up revision number.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [35m|[m [33m|[m [36m|[m [1;34m|[m [1;32m|[m [33m2f407049[m If all eureka instances go away and then eureka fall back cluster is not accessible because of network  issues- the number of instances registered with eureka at startup will be zero.
[36m|[m [1;35m|[m[36m_[m[1;35m|[m[36m_[m[1;33m|[m[36m_[m[1;31m|[m[36m_[m[35m|[m[36m_[m[33m|[m[36m/[m [1;34m/[m [1;32m/[m  
[36m|[m[36m/[m[1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [35m|[m [33m|[m [1;34m|[m [1;32m|[m   
* [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [35m|[m [33m|[m [1;34m|[m [1;32m|[m [33mb117472e[m Gradle Release Plugin - new version commit:  'eureka-1.1.74-SNAPSHOT'.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [35m|[m [33m|[m [1;34m|[m [1;32m|[m [33m59b81b4a[m[33m ([m[1;33mtag: eureka-1.1.73[m[33m)[m Gradle Release Plugin - pre tag commit:  'eureka-1.1.73'.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [35m|[m [33m|[m [1;34m|[m [1;32m|[m   [33m5cd5fbb5[m Merge branch 'master' of https://github.com/Netflix/eureka
[31m|[m[32m\[m [1;35m\[m [1;35m\[m [1;33m\[m [1;31m\[m [35m\[m [33m\[m [1;34m\[m [1;32m\[m  
[31m|[m * [1;35m\[m [1;35m\[m [1;33m\[m [1;31m\[m [35m\[m [33m\[m [1;34m\[m [1;32m\[m   [33mc6e8377e[m Merge pull request #14 from craigforster/jettison_dependency
[31m|[m [33m|[m[34m\[m [1;35m\[m [1;35m\[m [1;33m\[m [1;31m\[m [35m\[m [33m\[m [1;34m\[m [1;32m\[m  
[31m|[m [33m|[m [34m|[m[33m_[m[1;35m|[m[33m_[m[1;35m|[m[33m_[m[1;33m|[m[33m_[m[1;31m|[m[33m_[m[35m|[m[33m/[m [1;34m/[m [1;32m/[m  
[31m|[m [33m|[m[33m/[m[34m|[m [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [35m|[m [1;34m|[m [1;32m|[m   
[31m|[m [33m|[m * [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [35m|[m [1;34m|[m [1;32m|[m [33m8cff28cd[m eureka-client should declare dependency on jettison
[31m|[m [33m|[m[33m/[m [1;35m/[m [1;35m/[m [1;33m/[m [1;31m/[m [35m/[m [1;34m/[m [1;32m/[m  
* [33m/[m [1;35m/[m [1;35m/[m [1;33m/[m [1;31m/[m [35m/[m [1;34m/[m [1;32m/[m [33md4f1272a[m Update servo revision to a valid one.
[33m|[m[33m/[m [1;35m/[m [1;35m/[m [1;33m/[m [1;31m/[m [35m/[m [1;34m/[m [1;32m/[m  
* [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [35m|[m [1;34m|[m [1;32m|[m [33m6d2267d7[m Fixed a case where the region information was looked up straight from archaius instead of eureka client configuration.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [35m|[m [1;34m|[m [1;32m|[m [33m3e8cfd3b[m https://github.com/Netflix/eureka/issues/11: Fixed a bug where Xstream deserialization was returning "null" when the appropriate type was not defined. Also, change the deserialization type check to check only for subtypes(xml or json) instead of the exact string match (for e.g.) application/xml.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [35m|[m [1;34m|[m [1;32m|[m   [33m3bc8f867[m Merge branch 'master' of https://github.com/Netflix/eureka
[35m|[m[35m\[m [1;35m\[m [1;35m\[m [1;33m\[m [1;31m\[m [35m\[m [1;34m\[m [1;32m\[m  
[35m|[m [35m|[m [1;35m|[m[35m_[m[1;35m|[m[35m_[m[1;33m|[m[35m_[m[1;31m|[m[35m/[m [1;34m/[m [1;32m/[m  
[35m|[m [35m|[m[35m/[m[1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [1;34m|[m [1;32m|[m   
[35m|[m * [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [1;34m|[m [1;32m|[m [33me1ce3e1f[m Gradle Release Plugin - new version commit:  'eureka-1.1.73-SNAPSHOT'.
[35m|[m * [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [1;34m|[m [1;32m|[m [33m5d577f33[m[33m ([m[1;33mtag: eureka-1.1.72[m[33m)[m Gradle Release Plugin - pre tag commit:  'eureka-1.1.72'.
* [36m|[m [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [1;34m|[m [1;32m|[m [33m6feaa10f[m https://github.com/Netflix/eureka/issues/12: Added an API to update user-specific metadata.
[36m|[m[36m/[m [1;35m/[m [1;35m/[m [1;33m/[m [1;31m/[m [1;34m/[m [1;32m/[m  
* [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [1;34m|[m [1;32m|[m [33mc46db5d1[m Fixes the scenario where the deltas  don't work in the case of interactions with a remote region registry.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [1;34m|[m [1;32m|[m [33m152efc71[m Gradle Release Plugin - new version commit:  'eureka-1.1.72-SNAPSHOT'.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [1;34m|[m [1;32m|[m [33m5b8e29a9[m[33m ([m[1;33mtag: eureka-1.1.71[m[33m)[m Gradle Release Plugin - pre tag commit:  'eureka-1.1.71'.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [1;34m|[m [1;32m|[m [33mb4bb9eb2[m Move to a new versioning scheme.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;31m|[m [1;34m|[m [1;32m|[m   [33m9a619bbb[m Merge branch 'master' of https://github.com/Netflix/eureka
[1;31m|[m[1;31m\[m [1;35m\[m [1;35m\[m [1;33m\[m [1;31m\[m [1;34m\[m [1;32m\[m  
[1;31m|[m [1;31m|[m [1;35m|[m[1;31m_[m[1;35m|[m[1;31m_[m[1;33m|[m[1;31m/[m [1;34m/[m [1;32m/[m  
[1;31m|[m [1;31m|[m[1;31m/[m[1;35m|[m [1;35m|[m [1;33m|[m [1;34m|[m [1;32m|[m   
[1;31m|[m * [1;35m|[m [1;35m|[m [1;33m|[m [1;34m|[m [1;32m|[m [33mc6b735e1[m Gradle Release Plugin - new version commit:  'eureka-1.1.70'.
* [1;32m|[m [1;35m|[m [1;35m|[m [1;33m|[m [1;34m|[m [1;32m|[m [33m617e09ef[m Log formatting error fixed. Also increased the overridden status expiry to 1 hour.
[1;32m|[m[1;32m/[m [1;35m/[m [1;35m/[m [1;33m/[m [1;34m/[m [1;32m/[m  
* [1;35m|[m [1;35m|[m [1;33m|[m [1;34m|[m [1;32m|[m [33mfaf4fb88[m[33m ([m[1;33mtag: eureka-1.1.69[m[33m)[m Bump up revision number.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;34m|[m [1;32m|[m [33m995d32ff[m Fixed a bug in a scenario during startup where the replications to  some of the peer nodes does not happen until the node has recognized itself with its EIP.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;34m|[m [1;32m|[m [33m5c69eba4[m Gradle Release Plugin - new version commit:  'eureka-1.1.67'.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;34m|[m [1;32m|[m [33m0a88a0c9[m[33m ([m[1;33mtag: eureka-1.1.66[m[33m)[m Bump up revision number.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;34m|[m [1;32m|[m [33m83904eea[m Bump up revision number.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;34m|[m [1;32m|[m [33m70b2dad0[m Missed case of storing overridden status added.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;34m|[m [1;32m|[m [33m7246f4fc[m Tweaks to allow overridden status properly in certain edge cases.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;34m|[m [1;32m|[m [33m3200cd1f[m Gradle Release Plugin - new version commit:  'eureka-1.1.60'.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;34m|[m [1;32m|[m [33m5cefd6ce[m[33m ([m[1;33mtag: eureka-1.1.59[m[33m)[m Minor changes to handle non-specified availability zones.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;34m|[m [1;32m|[m [33m2e63328f[m Gradle Release Plugin - new version commit:  'eureka-1.1.58'.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;34m|[m [1;32m|[m [33mb006ee7a[m[33m ([m[1;33mtag: eureka-1.1.57[m[33m)[m Bump up revision number.
* [1;35m|[m [1;35m|[m [1;33m|[m [1;34m|[m [1;32m|[m   [33mf69f87be[m Merge branch 'master' of https://github.com/Netflix/eureka
[1;33m|[m[1;33m\[m [1;35m\[m [1;35m\[m [1;33m\[m [1;34m\[m [1;32m\[m  
[1;33m|[m [1;33m|[m [1;35m|[m[1;33m_[m[1;35m|[m[1;33m/[m [1;34m/[m [1;32m/[m  
[1;33m|[m [1;33m|[m[1;33m/[m[1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m   
[1;33m|[m * [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33mddcda443[m Gradle Release Plugin - new version commit:  'eureka-1.1.56'.
* [1;34m|[m [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33m041ef70c[m Avoid registration during state transfer at startup for unspecified availability zones.
[1;34m|[m[1;34m/[m [1;35m/[m [1;35m/[m [1;34m/[m [1;32m/[m  
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33m730e47c8[m[33m ([m[1;33mtag: eureka-1.1.55[m[33m)[m Bump up revision number.
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33m6f720856[m Bump up revision number.
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m   [33m77b80f73[m Merge branch 'master' of https://github.com/Netflix/eureka
[1;35m|[m[1;36m\[m [1;35m\[m [1;35m\[m [1;34m\[m [1;32m\[m  
[1;35m|[m * [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33mf8ab57b2[m Gradle Release Plugin - new version commit:  'eureka-1.1.53'.
* [1;36m|[m [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33m840a817a[m Changes to not include applications from remote regions in certain cases.
[1;36m|[m[1;36m/[m [1;35m/[m [1;35m/[m [1;34m/[m [1;32m/[m  
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33mca8e429b[m[33m ([m[1;33mtag: eureka-1.1.52[m[33m)[m Bump up revision number.
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33mb284be00[m Bump up version number.
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33m846f8083[m Preventive checks during delta fetches from remote regions.
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33mf636b47c[m Gradle Release Plugin - new version commit:  'eureka-1.1.50'.
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33m729b9357[m[33m ([m[1;33mtag: eureka-1.1.49[m[33m)[m Bump up revision number.
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m   [33m9f30ab3c[m Merge branch 'master' of https://github.com/Netflix/eureka
[31m|[m[32m\[m [1;35m\[m [1;35m\[m [1;34m\[m [1;32m\[m  
[31m|[m * [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33mf9348af5[m Gradle Release Plugin - new version commit:  'eureka-1.1.47'.
[31m|[m * [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33mbe2bc79f[m[33m ([m[1;33mtag: eureka-1.1.46[m[33m)[m Gradle Release Plugin - new version commit:  'eureka-1.1.46'.
* [32m|[m [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33me78d15bb[m Tweak eureka registry access for remote regions.
[32m|[m[32m/[m [1;35m/[m [1;35m/[m [1;34m/[m [1;32m/[m  
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33m4a46a922[m[33m ([m[1;33mtag: eureka-1.1.45[m[33m)[m Bump up version number.
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m   [33m2bf640af[m Merge branch 'master' of https://github.com/Netflix/eureka
[33m|[m[34m\[m [1;35m\[m [1;35m\[m [1;34m\[m [1;32m\[m  
[33m|[m * [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33mae796ae8[m Gradle Release Plugin - new version commit:  'eureka-1.1.44'.
* [34m|[m [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33mf432da61[m Fetch remote registry only after EIP binding as the security group rules would then be honored.
[34m|[m[34m/[m [1;35m/[m [1;35m/[m [1;34m/[m [1;32m/[m  
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33m68ca0359[m[33m ([m[1;33mtag: eureka-1.1.43[m[33m)[m Bump up revision number.
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m   [33m66cedc5f[m Merge branch 'master' of https://github.com/Netflix/eureka
[35m|[m[36m\[m [1;35m\[m [1;35m\[m [1;34m\[m [1;32m\[m  
[35m|[m * [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33m9b5c58a6[m Gradle Release Plugin - new version commit:  'eureka-1.1.42'.
* [36m|[m [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33mbd4f9439[m Missed check-in.
[36m|[m[36m/[m [1;35m/[m [1;35m/[m [1;34m/[m [1;32m/[m  
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33m7f1d340b[m[33m ([m[1;33mtag: eureka-1.1.41[m[33m)[m Bump up version number.
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m   [33m9f7f7ff7[m Merge branch 'master' of https://github.com/Netflix/eureka
[1;31m|[m[1;32m\[m [1;35m\[m [1;35m\[m [1;34m\[m [1;32m\[m  
[1;31m|[m * [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33m7f5f81d5[m Gradle Release Plugin - new version commit:  'eureka-1.1.40'.
* [1;32m|[m [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33me177867d[m Typo fix.
[1;32m|[m[1;32m/[m [1;35m/[m [1;35m/[m [1;34m/[m [1;32m/[m  
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33m64668b6c[m[33m ([m[1;33mtag: eureka-1.1.39[m[33m)[m Bump up revision number.
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m   [33m8fc5715e[m Merge branch 'master' of https://github.com/Netflix/eureka
[1;33m|[m[1;34m\[m [1;35m\[m [1;35m\[m [1;34m\[m [1;32m\[m  
[1;33m|[m * [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33mdb05503a[m Gradle Release Plugin - new version commit:  'eureka-1.1.38'.
* [1;34m|[m [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33m26816f32[m https://github.com/Netflix/eureka/issues/10:
[1;34m|[m[1;34m/[m [1;35m/[m [1;35m/[m [1;34m/[m [1;32m/[m  
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33mc112b082[m[33m ([m[1;33mtag: eureka-1.1.37[m[33m)[m Bump up release number.
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m [33m3f95a5b5[m https://github.com/Netflix/eureka/issues/9:
* [1;35m|[m [1;35m|[m [1;34m|[m [1;32m|[m   [33mcaf1ce79[m Merge pull request #8 from bgentry/master
[1;35m|[m[1;36m\[m [1;35m\[m [1;35m\[m [1;34m\[m [1;32m\[m  
[1;35m|[m [1;36m|[m[1;35m_[m[1;35m|[m[1;35m/[m [1;34m/[m [1;32m/[m  
[1;35m|[m[1;35m/[m[1;36m|[m [1;35m|[m [1;34m|[m [1;32m|[m   
[1;35m|[m * [1;35m|[m [1;34m|[m [1;32m|[m [33mc689195a[m Remove extra spaces, fix bullets.
[1;35m|[m[1;35m/[m [1;35m/[m [1;34m/[m [1;32m/[m  
* [1;35m|[m [1;34m|[m [1;32m|[m   [33m7d50288b[m Merge pull request #7 from quidryan/master
[31m|[m[32m\[m [1;35m\[m [1;34m\[m [1;32m\[m  
[31m|[m * [1;35m|[m [1;34m|[m [1;32m|[m [33maf63b1d8[m Putting aws-java-sdk back to 1.3.11 until 1.3.22 is approved internally
[31m|[m * [1;35m|[m [1;34m|[m [1;32m|[m [33me5d6b8e4[m Properly using project's name in the manifest.
[31m|[m * [1;35m|[m [1;34m|[m [1;32m|[m [33m84b5fc01[m No longer need to swap org name, since com.amazonaws is available in extlib, as long as you use 1.3.22, which we're moving to. It hasn't been verified by Steven Wu, but it will be soon.
[31m|[m * [1;35m|[m [1;34m|[m [1;32m|[m [33m8fc8ffd4[m Merge gradle-template/multi-project.
[31m|[m[31m/[m[1;34m|[m [1;35m|[m [1;34m|[m [1;32m|[m 
[31m|[m [1;34m|[m [1;35m|[m[1;34m/[m [1;32m/[m  
[31m|[m [1;34m|[m[1;34m/[m[1;35m|[m [1;32m|[m   
[31m|[m * [1;35m|[m [1;32m|[m [33m36e5b8f5[m Adding provided scope
[31m|[m * [1;35m|[m [1;32m|[m [33m66ff83f7[m Using a better github location
[31m|[m * [1;35m|[m [1;32m|[m [33m1cbb4d6d[m Fixing issue when publishing source/javadoc to maven central
[31m|[m * [1;35m|[m [1;32m|[m [33m05c4d066[m Putting javadoc and sources into proper confs and setting types
[31m|[m * [1;35m|[m [1;32m|[m [33m61bd2b05[m Add local publishing
[31m|[m * [1;35m|[m [1;32m|[m [33m6d4a854d[m Filling in more pom fields for Sonatype
[31m|[m * [1;35m|[m [1;32m|[m [33ma8674db7[m Stop relying on maven convention on project
* [34m|[m [1;35m|[m [1;32m|[m   [33m72cdf658[m Merge pull request #2 from joesondow/logo
[35m|[m[36m\[m [34m\[m [1;35m\[m [1;32m\[m  
[35m|[m * [34m|[m [1;35m|[m [1;32m|[m [33mcfce014b[m "Gold bars adventure" Eureka logo
* [36m|[m [34m|[m [1;35m|[m [1;32m|[m   [33m68acc47b[m Merge pull request #4 from ericdowd/eurekaServer-properties
[1;31m|[m[1;32m\[m [36m\[m [34m\[m [1;35m\[m [1;32m\[m  
[1;31m|[m * [36m|[m [34m|[m [1;35m|[m [1;32m|[m [33m79c42931[m eureka.port appears to be pulling double duty: both telling what port to register as and what port the eureka server is listening on. Changed the properties that deal with DNS discovery of eureka servers to be eureka.eurekaServer.<property>
[1;31m|[m [1;35m|[m [36m|[m[1;35m_[m[34m|[m[1;35m/[m [1;32m/[m  
[1;31m|[m [1;35m|[m[1;35m/[m[36m|[m [34m|[m [1;32m|[m   
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33m79e7688a[m Gradle Release Plugin - new version commit:  'eureka-1.1.36'.
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33m5bee5f6d[m[33m ([m[1;33mtag: eureka-1.1.35[m[33m)[m Bump up version number.
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33m7b9909e7[m Change blitz4j version dependency.
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33m2ebbd667[m Bump up revision number.
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m   [33mcfca9276[m Merge branch 'master' of https://github.com/Netflix/eureka
[1;33m|[m[1;34m\[m [1;35m\[m [36m\[m [34m\[m [1;32m\[m  
[1;33m|[m * [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33m7939ccfb[m Gradle Release Plugin - new version commit:  'eureka-1.1.33'.
* [1;34m|[m [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33mf6ca1a32[m Register some more monitors for tracking stats.
[1;34m|[m[1;34m/[m [1;35m/[m [36m/[m [34m/[m [1;32m/[m  
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33mb52cd064[m[33m ([m[1;33mtag: eureka-1.1.32[m[33m)[m Bump up the version number.
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33ma3278468[m Added some statistics to track the number of retries.
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33m9b333b09[m Gradle Release Plugin - new version commit:  'eureka-1.1.31'.
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33mb3e08bff[m[33m ([m[1;33mtag: eureka-1.1.30[m[33m)[m Bump up version.
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m   [33m6fdc4bf2[m Merge branch 'master' of https://github.com/Netflix/eureka
[1;35m|[m[1;36m\[m [1;35m\[m [36m\[m [34m\[m [1;32m\[m  
[1;35m|[m * [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33mc33799a1[m Gradle Release Plugin - new version commit:  'eureka-1.1.29'.
* [1;36m|[m [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33m510046b3[m Specify the version number before serializing instance information.
[1;36m|[m[1;36m/[m [1;35m/[m [36m/[m [34m/[m [1;32m/[m  
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33me712abf9[m[33m ([m[1;33mtag: eureka-1.1.28[m[33m)[m Bump up the release number.
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m   [33mb6712e8f[m Merge branch 'master' of https://github.com/Netflix/eureka
[31m|[m[32m\[m [1;35m\[m [36m\[m [34m\[m [1;32m\[m  
[31m|[m * [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33m39b01d2a[m Gradle Release Plugin - new version commit:  'eureka-1.1.27'.
* [32m|[m [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33m9c91374a[m Fixed a bug with missing "break" statement.
[32m|[m[32m/[m [1;35m/[m [36m/[m [34m/[m [1;32m/[m  
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33mda7c7520[m[33m ([m[1;33mtag: eureka-1.1.26[m[33m)[m Bump up the version number.
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m   [33m4cdb1e9c[m Merge branch 'master' of https://github.com/Netflix/eureka
[33m|[m[34m\[m [1;35m\[m [36m\[m [34m\[m [1;32m\[m  
[33m|[m * [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33m4fda696c[m Gradle Release Plugin - new version commit:  'eureka-1.1.25'.
* [34m|[m [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33m8b3ee29d[m Fix a run-away loop.
[34m|[m[34m/[m [1;35m/[m [36m/[m [34m/[m [1;32m/[m  
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33mc9db9920[m[33m ([m[1;33mtag: eureka-1.1.24[m[33m)[m Upgrade version.
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33m1ba05d1d[m Change version of blitz4j again.
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33mf27f93ce[m Change version number for blitz4j.
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33m700190bb[m New dependency 'blitz4j' added.
* [1;35m|[m [36m|[m [34m|[m [1;32m|[m [33m7af3a79a[m https://github.com/Netflix/eureka/issues/6:
[1;35m|[m[1;35m/[m [36m/[m [34m/[m [1;32m/[m  
* [36m|[m [34m|[m [1;32m|[m [33m0860561e[m Gradle Release Plugin - new version commit:  'eureka-1.1.23'.
* [36m|[m [34m|[m [1;32m|[m [33m72505b9c[m[33m ([m[1;33mtag: eureka-1.1.22[m[33m)[m Update version.
* [36m|[m [34m|[m [1;32m|[m [33m52872dcb[m Update gradle.properties.
* [36m|[m [34m|[m [1;32m|[m [33mcf0f7520[m Check for the existence of instance info before inititalizing.
[36m|[m[36m/[m [34m/[m [1;32m/[m  
* [34m|[m [1;32m|[m   [33m11f45191[m Merge branch 'master' of github.com:Netflix/eureka
[35m|[m[36m\[m [34m\[m [1;32m\[m  
[35m|[m * [34m|[m [1;32m|[m [33m5aa23f90[m Change app name to be all-lowercase
[35m|[m * [34m|[m [1;32m|[m [33m54ac9729[m Gradle Release Plugin - new version commit:  'eureka-1.1.21'.
* [36m|[m [34m|[m [1;32m|[m [33mc82e8c2b[m Place holder text for AWS access key ID and secret key.
[36m|[m[36m/[m [34m/[m [1;32m/[m  
* [34m|[m [1;32m|[m [33mcf949895[m[33m ([m[1;33mtag: eureka-1.1.20[m[33m)[m Change release number.
* [34m|[m [1;32m|[m   [33m86a568c9[m Merge branch 'master' of github.com:Netflix/eureka
[1;31m|[m[1;32m\[m [34m\[m [1;32m\[m  
[1;31m|[m * [34m|[m [1;32m|[m [33m7c2ce8e0[m Gradle Release Plugin - new version commit:  'eureka-1.1.19'.
* [1;32m|[m [34m|[m [1;32m|[m [33m3276bb53[m Clean up resources when trying to update eureka nodes. Lingering resources may create problems when the server is running for a long time.
[1;32m|[m[1;32m/[m [34m/[m [1;32m/[m  
* [34m|[m [1;32m|[m [33mb8a3a1bb[m[33m ([m[1;33mtag: eureka-1.1.18[m[33m)[m Update version.
* [34m|[m [1;32m|[m [33me1e40e7c[m Reuse the EIP if the lease has expired.
* [34m|[m [1;32m|[m   [33mf186ee8d[m Merge branch 'master' of github.com:Netflix/eureka
[1;33m|[m[1;34m\[m [34m\[m [1;32m\[m  
[1;33m|[m * [34m|[m [1;32m|[m [33m85392fa1[m Gradle Release Plugin - new version commit:  'eureka-1.1.17'.
* [1;34m|[m [34m|[m [1;32m|[m [33mfc7003ca[m During a network partition between DC and Cloud, the following scenario led the discovery client to get "null" applications. If the outage happened exactly at the time of unmarshalling discovery data, a "null" value is returned by the discovery unmarshaller. If the network connection failed at the time of connection or when the response is read - it wouldn't be a problem. That is why this problem was not affecting all the servers. Below is the sample exception trace that indicates the problem
[1;34m|[m[1;34m/[m [34m/[m [1;32m/[m  
* [34m|[m [1;32m|[m   [33m1ca37216[m[33m ([m[1;33mtag: eureka-1.1.16[m[33m)[m Merge branch 'master' of github.com:Netflix/eureka
[1;35m|[m[1;36m\[m [34m\[m [1;32m\[m  
[1;35m|[m * [34m|[m [1;32m|[m [33m68e3afe8[m Gradle Release Plugin - pre tag commit:  'eureka-1.1.16'.
[1;35m|[m * [34m|[m [1;32m|[m [33m89c08fc4[m Gradle Release Plugin - new version commit:  'eureka-1.1.16-SNAPSHOT'.
[1;35m|[m * [34m|[m [1;32m|[m [33m32593fcc[m[33m ([m[1;33mtag: eureka-1.1.15[m[33m)[m Gradle Release Plugin - pre tag commit:  'eureka-1.1.15'.
* [1;36m|[m [34m|[m [1;32m|[m [33me7da2a28[m Some more fixes to allow non-AWS applications to deploy eureka.
[1;36m|[m[1;36m/[m [34m/[m [1;32m/[m  
* [34m|[m [1;32m|[m   [33mebb0c925[m Merge branch 'master' of github.com:Netflix/eureka
[31m|[m[32m\[m [34m\[m [1;32m\[m  
[31m|[m * [34m|[m [1;32m|[m [33m0f405066[m Gradle Release Plugin - new version commit:  'eureka-1.1.15-SNAPSHOT'.
[31m|[m * [34m|[m [1;32m|[m [33mf8d098bc[m[33m ([m[1;33mtag: eureka-1.1.14[m[33m)[m Gradle Release Plugin - pre tag commit:  'eureka-1.1.14'.
* [32m|[m [34m|[m [1;32m|[m [33m00459ca8[m Fix a bug which does not allow the bootstrapping of the eureka server in a non-AWS datacenter.
[32m|[m[32m/[m [34m/[m [1;32m/[m  
* [34m|[m [1;32m|[m [33m2b52704c[m When priming connections, check for eureka peer renewal expiration before trying to indefinitely prime the instance.
* [34m|[m [1;32m|[m   [33m9393019e[m Merge branch 'master' of github.com:Netflix/eureka
[33m|[m[34m\[m [34m\[m [1;32m\[m  
[33m|[m * [34m|[m [1;32m|[m [33m4215df69[m Gradle Release Plugin - new version commit:  'eureka-1.1.14-SNAPSHOT'.
[33m|[m * [34m|[m [1;32m|[m [33maa6e78aa[m[33m ([m[1;33mtag: eureka-1.1.13[m[33m)[m Gradle Release Plugin - pre tag commit:  'eureka-1.1.13'.
* [34m|[m [34m|[m [1;32m|[m [33m0a879596[m Cosmetic changes to display correct  warnings during startup.
[34m|[m[34m/[m [34m/[m [1;32m/[m  
* [34m|[m [1;32m|[m [33m63f9b68c[m When registering the instances that is fetched from the replica during the startup, the registration incorrectly registers the instance with a expiration duration of -1 seconds. causing the instances to expire immediately after the expiration task runs. The registration should register the instances with the default duration of 90 seconds.
* [34m|[m [1;32m|[m [33me834abe2[m Bug in not excluding the current eureka server instance being taken down for redeployment when priming the connection fixed.
* [34m|[m [1;32m|[m [33mcc314245[m When starting up a eureka server node, sometimes the server starts up with inbound connections opened but uninitialized outbound connections because of AWS firewall.
* [34m|[m [1;32m|[m [33m463aa48a[m Make the renewal last update timestamp volatile so that the expiration task does not have a race condition.
* [34m|[m [1;32m|[m [33mefbc4d73[m Only replicate to replica if the status is UP.
* [34m|[m [1;32m|[m [33mb4231b0d[m Clean up javadoc.
* [34m|[m [1;32m|[m [33m1f4e0b8e[m Gradle Release Plugin - new version commit:  'eureka-1.1.12'.
* [34m|[m [1;32m|[m [33m1972c9cd[m[33m ([m[1;33mtag: eureka-1.1.11[m[33m)[m Upgrade version.
* [34m|[m [1;32m|[m [33mad4f4579[m Log some important events at a higher level (INFO instead of DEBUG).
* [34m|[m [1;32m|[m [33m8b8b9363[m Update version.
* [34m|[m [1;32m|[m [33m8096fa5d[m Merge remote-tracking branch 'build/multi-project'
[35m|[m[34m\[m[34m|[m [1;32m|[m 
[35m|[m * [1;32m|[m [33m2b31d36a[m Changes needed for release plugin
[35m|[m * [1;32m|[m [33m1954d730[m Setting default name for multi-project
[35m|[m * [1;32m|[m [33mf170238c[m Using custom build of release plugin, to support building from a branch
[35m|[m * [1;32m|[m [33mddedbd72[m Pointing to a repo in our control
* [36m|[m [1;32m|[m [33mf170a3ee[m Changes to support Asgard in Eureka.
* [36m|[m [1;32m|[m [33m70077a8e[m Gradle Release Plugin - new version commit:  '1.1.9'.
* [36m|[m [1;32m|[m [33made2231f[m[33m ([m[1;33mtag: 1.1.8[m[33m)[m Gradle Release Plugin - pre tag commit:  '1.1.8'.
* [36m|[m [1;32m|[m [33m30c13a9a[m Changes to
* [36m|[m [1;32m|[m [33me91bce9e[m Include google support group.
* [36m|[m [1;32m|[m [33m79eff439[m Get the formatting right for READ me.
* [36m|[m [1;32m|[m [33mfeeaf7f3[m READ me changes.
* [36m|[m [1;32m|[m [33m5e58d306[m Updates to READ me.
* [36m|[m [1;32m|[m [33mb9ba6c97[m READ me updates.
* [36m|[m [1;32m|[m [33m9a879158[m Eureka Read me.
* [36m|[m [1;32m|[m [33m70001cb3[m READ me file.
* [36m|[m [1;32m|[m [33md9123232[m Gradle Release Plugin - new version commit:  '1.1.8-SNAPSHOT'.
* [36m|[m [1;32m|[m [33mb7b14ed2[m[33m ([m[1;33mtag: 1.1.7[m[33m)[m Gradle Release Plugin - pre tag commit:  '1.1.7'.
* [36m|[m [1;32m|[m   [33mdc4171e1[m Merge branch 'master' of github.com:Netflix/eureka
[1;31m|[m[1;32m\[m [36m\[m [1;32m\[m  
[1;31m|[m * [36m\[m [1;32m\[m   [33ma8a86bf5[m Merge branch 'master' of github.com:Netflix/eureka
[1;31m|[m [1;33m|[m[1;34m\[m [36m\[m [1;32m\[m  
[1;31m|[m * [1;34m|[m [36m|[m [1;32m|[m [33m4ac445cf[m Minor tweaks to formatting.
* [1;34m|[m [1;34m|[m [36m|[m [1;32m|[m [33mffb108de[m Resetting back to 1.1.7
[1;34m|[m [1;34m|[m[1;34m/[m [36m/[m [1;32m/[m  
[1;34m|[m[1;34m/[m[1;34m|[m [36m|[m [1;32m|[m   
* [1;34m|[m [36m|[m [1;32m|[m [33mab7dfdb6[m Gradle Release Plugin - new version commit:  '1.1.8-SNAPSHOT'.
* [1;34m|[m [36m|[m [1;32m|[m [33mb4a0c4c6[m Gradle Release Plugin - pre tag commit:  '1.1.7'.
* [1;34m|[m [36m|[m [1;32m|[m [33m1832c153[m Aligning version to the next version, with -SNAPSHOT
[1;34m|[m[1;34m/[m [36m/[m [1;32m/[m  
* [36m|[m [1;32m|[m [33mca329b54[m Java doc formatting changes.
* [36m|[m [1;32m|[m [33m582edbcf[m Version number changes.
* [36m|[m [1;32m|[m [33m0863184a[m Gradle Release Plugin - pre tag commit:  '1.1.4'.
* [36m|[m [1;32m|[m [33mc5193c82[m Minor tweaks to overridden status.
* [36m|[m [1;32m|[m   [33m450e5097[m Merge branch 'master' of github.com:Netflix/eureka
[1;35m|[m[1;36m\[m [36m\[m [1;32m\[m  
[1;35m|[m * [36m|[m [1;32m|[m [33mc757ba43[m Gradle Release Plugin - new version commit:  '1.1.4-SNAPSHOT'.
[1;35m|[m * [36m|[m [1;32m|[m [33maf2e636f[m[33m ([m[1;33mtag: 1.1.3[m[33m)[m Gradle Release Plugin - pre tag commit:  '1.1.3'.
[1;35m|[m * [36m|[m [1;32m|[m [33m9d3f83f5[m Add .gitignore
[1;35m|[m * [36m|[m [1;32m|[m [33m2011928c[m Pointing to a repo in our control
* [1;36m|[m [36m|[m [1;32m|[m [33m7de6ec85[m Minor changes to the descriptions of the properties.
[1;36m|[m[1;36m/[m [36m/[m [1;32m/[m  
* [36m|[m [1;32m|[m [33meb87827a[m Minor changes to demo classes.
* [36m|[m [1;32m|[m [33mb406e757[m Gradle Release Plugin - new version commit:  '1.1.3-SNAPSHOT'.
* [36m|[m [1;32m|[m [33m64a83b55[m[33m ([m[1;33mtag: 1.1.2[m[33m)[m Gradle Release Plugin - pre tag commit:  '1.1.2'.
* [36m|[m [1;32m|[m [33m34335e24[m Gradle dependencies changes for amazon aws.
* [36m|[m [1;32m|[m [33m416e5287[m Merge remote-tracking branch 'build/multi-project'
[31m|[m[36m\[m[36m|[m [1;32m|[m 
[31m|[m * [1;32m|[m [33m8f289b73[m Release plugin
[31m|[m * [1;32m|[m [33ma85e1963[m Adding cobertura
[31m|[m * [1;32m|[m [33mc2af08e7[m Upgrade to Gradle 1.1.
[31m|[m * [1;32m|[m [33m0f0c6114[m Enable license header plugin
[31m|[m * [1;32m|[m   [33mcc1b04ce[m Merge pull request #3 from Randgalt/multi-project
[31m|[m [1;32m|[m[34m\[m [1;32m\[m  
[31m|[m [1;32m|[m [34m|[m[1;32m/[m  
[31m|[m [1;32m|[m[1;32m/[m[34m|[m   
[31m|[m [1;32m|[m * [33meaa8fc97[m Sonatype URL was wrong
[31m|[m [1;32m|[m[1;32m/[m  
* [1;32m|[m [33m2722f1ff[m Spelling error in maven build fixed.
* [1;32m|[m [33m9bf31566[m Make dependency on servo 0.4.15 as that is what is available in maven.
* [1;32m|[m [33md767239c[m Remove duplicate files.
* [1;32m|[m [33m90116973[m Updated architecture image.
* [1;32m|[m [33m38e296a3[m Changes to the architecture diagram.
* [1;32m|[m [33m52517722[m Added Architecture diagram of Eureka
* [1;32m|[m [33mbdf4309e[m Fixed a bug related to vipaddress to instance mapping not getting updated during discovery delta fetches.
* [1;32m|[m [33m6dc501f4[m Bug in choosing EIPs with multiple instances in one zone fixed.
* [1;32m|[m [33m012bfb58[m Bump up the gradle revision to 1.1
* [1;32m|[m [33mee2e003c[m Changes to EIPManager to get the eip list from the discovery client instead of its own registry.
* [1;32m|[m [33m76ed462a[m Some more javadoc changes. Some more javadoc changes. Some more javadoc changes. Some more javadoc changes. Some more javadoc changes. Some more javadoc changes. Some more javadoc changes. Some more javadoc changes. Some more javadoc changes.
* [1;32m|[m [33m002410dc[m Configuration cleanup.
* [1;32m|[m [33mb6fef97f[m Fix JSP errors.
* [1;32m|[m [33m336d91fe[m Fix the broken build.
* [1;32m|[m [33me6e92c9d[m Fix javadoc comments.
* [1;32m|[m [33mfa6ea738[m Delete obsolete files.
* [1;32m|[m [33mcfb7b48c[m More Eureka changes..
* [1;32m|[m [33m7937cc79[m Adding missing gradle library.
* [1;32m|[m [33mf2f3fcb1[m More initial configuration files for Sample Eureka service and client.
* [1;32m|[m [33m53939453[m First commit of eureka.
* [1;32m|[m [33m4dc11948[m clean up everything
* [1;32m|[m [33m795de033[m Cleaning up unnecessary check-ins
* [1;32m|[m [33meac002d4[m Initial client and server for eureka
* [1;32m|[m [33m2bb2e203[m Merge commit 'build/multi-project'
[35m|[m[1;32m\[m[1;32m|[m 
[35m|[m * [33mbf5b2682[m Make one less thing people have to change
[35m|[m *   [33me9cdf18d[m Merge commit 'bc662051d8c72ea7b20350b1746e1a8f527c9244' into multi-project
[35m|[m [1;31m|[m[1;32m\[m  
[35m|[m [1;31m|[m * [33mbc662051[m Un-indenting HEADER
[35m|[m * [1;32m|[m [33m7c28a763[m Create branch that contains only build related files
[35m|[m [1;32m|[m[1;32m/[m  
[35m|[m * [33m1df6e445[m Use lifecycle to add signing task
[35m|[m * [33m66332d8b[m Fix quotes
[35m|[m * [33m61b17106[m Multimodule builds need a dump signing task
[35m|[m * [33m3a10a077[m Remove local testing file
[35m|[m * [33m9fa9ec0a[m Avoid signatures in archives unless doing mavenCentral build
* [1;32m|[m [33ma4f7060f[m Initial commit of eureka
 [1;32m/[m  
[1;32m|[m * [33m473c2bc8[m[33m ([m[1;33mtag: blitz4j-1.24[m[33m)[m Gradle Release Plugin - new version commit:  'blitz4j-1.24'.
[1;32m|[m * [33mb2e7900e[m[33m ([m[1;33mtag: blitz4j-1.23[m[33m)[m Gradle Release Plugin - new version commit:  'blitz4j-1.23'.
[1;32m|[m * [33m287eaa1e[m[33m ([m[1;33mtag: blitz4j-1.22[m[33m)[m Fixed a problem where log4j was getting initialized during archaius initialization under a different factory than blitz4j - because archaius starts up before blitz4j configures everything.
[1;32m|[m * [33m79f01a7b[m Gradle Release Plugin - new version commit:  'blitz4j-1.22'.
[1;32m|[m * [33m01415015[m[33m ([m[1;33mtag: blitz4j-1.21[m[33m)[m Gradle Release Plugin - new version commit:  'blitz4j-1.21'.
[1;32m|[m * [33mc2c76c6f[m[33m ([m[1;33mtag: blitz4j-1.20[m[33m)[m Provide an option to skip loading log4j.properties from class path as this could pull random entries from jar files which include them by mistake.
[1;32m|[m * [33mc9dc5eff[m Gradle Release Plugin - new version commit:  'blitz4j-1.20'.
[1;32m|[m *   [33m11d6127e[m[33m ([m[1;33mtag: blitz4j-1.19[m[33m)[m Merge branch 'master' of http://github.com/Netflix/blitz4j
[1;32m|[m [1;34m|[m[1;35m\[m  
[1;32m|[m [1;34m|[m * [33m781e38f3[m Gradle Release Plugin - new version commit:  'blitz4j-1.19'.
[1;32m|[m * [1;35m|[m [33m6fdbda41[m Fix conflicts in case of log4j.properties loaded from the class path has conflicting entries of log4j.rootLogger and log4j.rootCategory keys.
[1;32m|[m [1;35m|[m[1;35m/[m  
[1;32m|[m * [33m0c91672b[m[33m ([m[1;33mtag: blitz4j-1.18[m[33m)[m Minor changes to not throw an error if the configuration cannot find log4j.properties.
[1;32m|[m * [33m8a7598c2[m Gradle Release Plugin - new version commit:  'blitz4j-1.18'.
[1;32m|[m *   [33m01ed560d[m[33m ([m[1;33mtag: blitz4j-1.17[m[33m)[m Merge branch 'master' of http://github.com/Netflix/blitz4j
[1;32m|[m [1;36m|[m[31m\[m  
[1;32m|[m [1;36m|[m * [33m5cae0907[m Gradle Release Plugin - new version commit:  'blitz4j-1.17'.
[1;32m|[m [1;36m|[m * [33mcbc98a70[m[33m ([m[1;33mtag: blitz4j-1.16[m[33m)[m Gradle Release Plugin - new version commit:  'blitz4j-1.16'.
[1;32m|[m [1;36m|[m * [33m794acbb4[m[33m ([m[1;33mtag: blitz4j-1.15[m[33m)[m Gradle Release Plugin - new version commit:  'blitz4j-1.15'.
[1;32m|[m * [31m|[m [33ma3229e8d[m Load the log4j.properties file from the class path if the log4j.configuration is not specified.
[1;32m|[m [31m|[m[31m/[m  
[1;32m|[m *   [33maeed0c84[m[33m ([m[1;33mtag: blitz4j-1.14[m[33m)[m Merge branch 'master' of http://github.com/Netflix/blitz4j
[1;32m|[m [32m|[m[33m\[m  
[1;32m|[m [32m|[m * [33m89b86e68[m Gradle Release Plugin - new version commit:  'blitz4j-1.14'.
[1;32m|[m * [33m|[m [33m725cc4fa[m Change slf4j-log4j version to be the same version as slf4j-api.
[1;32m|[m [33m|[m[33m/[m  
[1;32m|[m * [33m21c0d97b[m[33m ([m[1;33mtag: blitz4j-1.13[m[33m)[m https://github.com/Netflix/blitz4j/issues/1:
[1;32m|[m * [33m6ebf64c0[m Gradle Release Plugin - new version commit:  'blitz4j-1.13'.
[1;32m|[m *   [33mb8906d6f[m[33m ([m[1;33mtag: blitz4j-1.12[m[33m)[m Merge branch 'master' of https://github.com/Netflix/blitz4j
[1;32m|[m [34m|[m[35m\[m  
[1;32m|[m [34m|[m * [33m7a6c101a[m Gradle Release Plugin - new version commit:  'blitz4j-1.12'.
[1;32m|[m * [35m|[m [33m7140bddf[m Get the default configurations in a much more efficient way.
[1;32m|[m [35m|[m[35m/[m  
[1;32m|[m * [33m22442c3f[m[33m ([m[1;33mtag: blitz4j-1.11[m[33m)[m Update version.
[1;32m|[m * [33mf1d9ee7e[m Gradle Release Plugin - new version commit:  'blitz4j-1.10'.
[1;32m|[m * [33md6b3d104[m[33m ([m[1;33mtag: blitz4j-1.9[m[33m)[m Some minor tweaks :
[1;32m|[m * [33mb4beeb50[m Gradle Release Plugin - new version commit:  'blitz4j-1.9'.
[1;32m|[m * [33maaed55c6[m[33m ([m[1;33mtag: blitz4j-1.8[m[33m)[m Defensive check against unnamed appenders.
[1;32m|[m * [33m59780135[m Formatting javadoc comments.
[1;32m|[m * [33m83e3fff3[m Gradle Release Plugin - new version commit:  'blitz4j-1.8'.
[1;32m|[m * [33m455aac13[m[33m ([m[1;33mtag: blitz4j-1.7[m[33m)[m A few critical bug fixes including closing appenders(asynchronous) which have been left over during the re-configuration.
[1;32m|[m * [33mf6e8a580[m Gradle Release Plugin - new version commit:  'blitz4j-1.7'.
[1;32m|[m * [33m420860ce[m[33m ([m[1;33mtag: blitz4j-1.6[m[33m)[m Added a critical piece of non-blocking method override which got missed out of the refactoring move.
[1;32m|[m * [33m6974f8b6[m Remove some duplicate code.
[1;32m|[m * [33m7862b5e0[m Load log4j configuration first - followed by overrrides.
[1;32m|[m * [33mac008ba2[m READ me changes.
[1;32m|[m * [33maefa63ba[m Add read me for blitz4j.
[1;32m|[m * [33mc7a42afc[m Gradle Release Plugin - new version commit:  'blitz4j-1.6'.
[1;32m|[m * [33me1b55472[m[33m ([m[1;33mtag: blitz4j-1.5[m[33m)[m Comments, refactoring and test cases for bltiz4j.
[1;32m|[m * [33m26520e2c[m Gradle Release Plugin - new version commit:  'blitz4j-1.5'.
[1;32m|[m * [33mf7c73f94[m[33m ([m[1;33mtag: blitz4j-1.4[m[33m)[m Gradle Release Plugin - pre tag commit:  'blitz4j-1.4'.
[1;32m|[m * [33me7c9de5b[m Comments and copyright information added for blitz4j.
[1;32m|[m * [33m77dd18fb[m Register with Servo monitor.
[1;32m|[m * [33m5992d89f[m Gradle Release Plugin - new version commit:  'blitz4j-1.4'.
[1;32m|[m * [33ma6a7397a[m[33m ([m[1;33mtag: blitz4j-1.3[m[33m)[m Move NFPatternLayout/NFPatternParser to original package.
[1;32m|[m * [33mfd4ed5f1[m Gradle Release Plugin - new version commit:  'blitz4j-1.3'.
[1;32m|[m * [33md18834bc[m[33m ([m[1;33mtag: blitz4j-1.2[m[33m)[m Gradle Release Plugin - pre tag commit:  'blitz4j-1.2'.
[1;32m|[m * [33m2b799e83[m Blitz4j updates.
[1;32m|[m * [33md086e33e[m Gradle Release Plugin - new version commit:  'blitz4j-1.2-SNAPSHOT'.
[1;32m|[m * [33ma38fb1ec[m[33m ([m[1;33mtag: blitz4j-1.1[m[33m)[m Gradle Release Plugin - pre tag commit:  'blitz4j-1.1'.
[1;32m|[m * [33m270c0b68[m Remove tomcat and jetty plugins.
[1;32m|[m * [33m9f2df1e5[m Gradle Release Plugin - new version commit:  'blitz4j-1.1-SNAPSHOT'.
[1;32m|[m * [33m0b40e6db[m[33m ([m[1;33mtag: blitz4j-1.0[m[33m)[m Gradle Release Plugin - pre tag commit:  'blitz4j-1.0'.
[1;32m|[m * [33mbcacda9a[m Remove ivy.
[1;32m|[m * [33m9a689910[m Change the name of project.
[1;32m|[m * [33mebdc3f6c[m Build changes for blitz.
[1;32m|[m * [33m405625a1[m Blitz4j updates.
[1;32m|[m * [33m3b66e862[m Initial commit of blitz4j.
[1;32m|[m * [33m8c16fb33[m Fixing issue when publishing source/javadoc to maven central
[1;32m|[m * [33mb607ea58[m Putting javadoc and sources into proper confs and setting types
[1;32m|[m * [33m6d37dcb8[m Add local publishing
[1;32m|[m * [33m6157d059[m Filling in more pom fields for Sonatype
[1;32m|[m * [33m2dc6043d[m Fix extra right bracket
[1;32m|[m * [33mddff5b86[m Stop relying on maven convention on project
[1;32m|[m * [33m53adc060[m Changes needed for release plugin
[1;32m|[m * [33m7007b883[m Using custom build of release plugin, to support building from a branch
[1;32m|[m * [33me03f71cc[m Pointing to a repo in our control
[1;32m|[m * [33m0929271a[m Release plugin
[1;32m|[m * [33m188d9631[m Adding cobertura
[1;32m|[m * [33m75daf8d6[m Upgrade to Gradle 1.1.
[1;32m|[m * [33m102347bc[m Merging license header plugin
[1;32m|[m *   [33m6e852780[m Merge pull request #4 from Randgalt/single-project
[1;32m|[m [36m|[m[1;31m\[m  
[1;32m|[m [36m|[m * [33m8df2acc6[m Sonatype URL was wrong
[1;32m|[m [36m|[m[36m/[m  
[1;32m|[m * [33m2ac2de75[m Make one less thing people have to change
[1;32m|[m * [33m5894d1e3[m Make structure more of skeleton
[1;32m|[m * [33mdc5adaec[m Work with lifecycle to create signing task
[1;32m|[m * [33mca6ff68c[m Single project layout
[1;32m|[m[1;32m/[m  
* [33mb5b2f5ef[m Correct artifacts, moved pom to more visible area
* [33m52bd53f5[m Restructure into smaller files
* [33m697fd66a[m Initial commit, working with Maven Central
