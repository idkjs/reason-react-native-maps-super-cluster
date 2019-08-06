# Reason-react-native-maps-super-cluster

ReasonML bindings for `react-native-maps-super-cluster`

Currently supports `react-native-maps-super-cluster` v1.5.0 which wraps `react-native-maps` and `supercluster`.

## Install

`$ yarn add reason-react-native-maps-super-cluster react-native-maps-super-cluster`

Then add `reason-react-native-maps-super-cluster` to `bsconfig.json`

`"bs-dependencies": ["reason-react-native-maps-super-cluster"]`

## Example

```reason
let component = ReasonReact.statelessComponent("MyClusteringMap");

let make = children => {
  ...component,
  render: _self =>
    <ClusteredMapView
    // TODO: add props
    />
};
```
