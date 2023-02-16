pipeline {

agent any
stages {
stage('Build') {
steps {
sh 'PES2UG20CS515-1 clean install'
echo 'Build Stage Successful'
}
}
stage('Test') {
steps {
sh 'g++ hello.cpp -o hello'
echo 'Test Stage Successful'

}
}
stage( Deploy’) {
steps {
sh 'hello.cpp deploy'
echo 'Deployment Successful'
}
}
}
post {
failure {

echo 'Pipeline failed’

}
