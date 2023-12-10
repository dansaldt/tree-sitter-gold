
module Example

uses aListOfInstances, OcsPrimaryTypes, aRecordHashTable, aLightObject

type tSerde : (
	sdSerialize,
	sdDeserialize,
)
