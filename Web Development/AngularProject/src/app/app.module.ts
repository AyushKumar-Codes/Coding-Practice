import { NgModule } from '@angular/core';
import { BrowserModule, provideClientHydration } from '@angular/platform-browser';
import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { SidebarComponent } from './sidebar/sidebar.component';
import { DashboardMainComponent } from './dashboard-main/dashboard-main.component';
import {RouterModule, Routes} from "@angular/router";
import { CastvoteComponent } from './castvote/castvote.component';
import { DeleteAccComponent } from './delete-acc/delete-acc.component';
import { ChangePassComponent } from './change-pass/change-pass.component';
import { VotingResultComponent } from './voting-result/voting-result.component';
import { LoginComponent } from './login/login.component';
import { SignupComponent } from './signup/signup.component';

const  appRoutes: Routes = [
    {path : 'dashboard' , component : DashboardMainComponent},
    {path:"castvote",component:CastvoteComponent},
    {path:'delete',component:DeleteAccComponent},
    {path:'password' , component:ChangePassComponent},
    {path:'votingresult',component:VotingResultComponent},
    {path:"login",component:LoginComponent},
    {path:"",component:SignupComponent}
] ;
@NgModule({
  declarations: [
    AppComponent,
    SidebarComponent,
    DashboardMainComponent,
    DeleteAccComponent,
    ChangePassComponent,
    VotingResultComponent,
    LoginComponent,
    SignupComponent,
    
  ],
  imports: [
    BrowserModule,
    AppRoutingModule,
    RouterModule.forRoot(appRoutes)
  ],
  providers: [
    provideClientHydration()
  ],
  bootstrap: [AppComponent]
})
export class AppModule { }
